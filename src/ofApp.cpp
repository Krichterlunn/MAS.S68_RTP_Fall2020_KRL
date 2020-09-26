#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetWindowShape(900, 900);
	seed = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(255);
	ofSetColor(0, 0, 0, 150);
	ofSetLineWidth(4);
	ofNoFill();

	ofSeedRandom(seed);

	for (int i = 0; i < 300; i++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float y = ofMap(i, 0, 10, 30, 750);
		//float y = sin(0.05) * ofNoise(i);
		//ofDrawCircle(i, 300 + ofSignedNoise(i * 0.03,  0.1) * 100, 2);
		//ofDrawLine(i, 300 + ofSignedNoise(i * 0.03,  0.1) * 100, 2, 5);
		line.clear();
		for (int j = 0; j < 40; j++) {
			float x = ofMap(j, 0, 80, 20, 2000);

			//line.addVertex(ofVec3f(x, y , 0));
			line.addVertex(ofVec3f(x, y , 0));
		}
		line.draw();
	}

	for (int j = 0; j < 30; j++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float x = ofMap(j, 0, 10, 30, 750);
		line.clear();
		for (int i = 0; i < 40; i++) {
			float y = ofMap(i, 0, 80, 20, 2000);

			line.addVertex(ofVec3f(x, y, 0));

		}

		line.draw();
	}
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
