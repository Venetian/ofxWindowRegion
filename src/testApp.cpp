#include "testApp.h"
#include "stdio.h"

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib> 


const double samplingFrequency = 44100.0;
	
//--------------------------------------------------------------
void testApp::setup(){

	smallWindow.setToRelativeSize(0.2, 0.2, 0.6, 0.4);

	for (int x = 0;x < 20;x++)
		simpleVector.push_back(x*x);
}



//--------------------------------------------------------------
void testApp::update(){
	
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(255,0,0);
	smallWindow.drawOutline();
	
	plotter.drawVector(simpleVector, 0, 10, smallWindow, 1000);//has maximum 10 points
	
}
 
//--------------------------------------------------------------
void testApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){

}
//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	mouseX = x;
	mouseY = y;
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

	
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	//width = w;
	//height = h;
	
}






void testApp::exit(){

	
}

