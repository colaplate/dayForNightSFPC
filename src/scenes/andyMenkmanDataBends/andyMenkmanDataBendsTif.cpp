
#include "andyMenkmanDataBendsTif.h"

void andyMenkmanDataBendsTif::setup(){
  
    bender.setup("scenes/andyMenkmanDataBends/images/", "tif", 100);
    
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
    loadCode("scenes/andyMenkmanDataBends/code/tif.txt");
}

void andyMenkmanDataBendsTif::update(){
    bender.setDebounce(debounce);
    bender.update(startLine, numberOfLines);
}

void andyMenkmanDataBendsTif::draw(){
    bender.draw(0, 0, dimensions.getWidth(), dimensions.getHeight());
}

