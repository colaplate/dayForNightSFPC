
#include "andyMenkmanDataBendsPng.h"

void andyMenkmanDataBendsPng::setup(){
  
    bender.setup("scenes/andyMenkmanDataBends/images/", "png", 50);
    
    // setup pramaters
    numberOfLines.set("numberOfLines", 1, 0, bender.lineCount);
    startLine.set("startLine", 50, 0, bender.lineCount);
    debounce.set("debounce", 2, 0, 100);
    parameters.add(numberOfLines);
    parameters.add(startLine);
    parameters.add(debounce);
 
    ofBackground(0);
    ofSetColor(255);

    setAuthor("Andy Dayton");
    setOriginalArtist("Rosa Menkman");
    loadCode("scenes/andyMenkmanDataBends/code/png.txt");
}

void andyMenkmanDataBendsPng::update(){
    bender.setDebounce(debounce);
    bender.update(startLine, numberOfLines, true);
}

void andyMenkmanDataBendsPng::draw(){
    bender.draw(0, 0, dimensions.getWidth(), dimensions.getHeight());
}
