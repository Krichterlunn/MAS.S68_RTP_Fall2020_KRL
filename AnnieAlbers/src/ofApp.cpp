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



	for (int i = 0; i < 16; i++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float y = ofMap(i, 0, 15, 30, 880);
		line.clear();
		for (int j = 0; j < 400; j++) {
			float x = ofMap(j, 0, 400, 20, 880);

			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.015, i*1.23 + ofGetElapsedTimef()) * 20, 0));
			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.015, i*1.23 + ofGetElapsedTimef()) * 10, 0));

		}
		ofSetColor(26, 25, 21, 60);
		ofSetLineWidth(7);
		ofNoFill();
		line.draw();
	}

	for (int i = 0; i < 16; i++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float y = ofMap(i, 0, 15, 30, 880);
		line.clear();
		for (int j = 0; j < 400; j++) {
			float x = ofMap(j, 0, 400, 20, 880);

			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01, i*2.23 + ofGetElapsedTimef()) * 20, 0));
			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01, i*2.23 + ofGetElapsedTimef()) * 30, 0));

		}
		ofSetColor(26, 25, 21, 10);
		ofSetLineWidth(6);
		ofNoFill();
		line.draw();
	}

	for (int i = 0; i < 16; i++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float y = ofMap(i, 0, 15, 30, 880);
		line.clear();
		for (int j = 0; j < 400; j++) {
			float x = ofMap(j, 0, 400, 20, 880);

			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01, i*3.23 + ofGetElapsedTimef()) * 20, 0));
			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01, i*3.23 + ofGetElapsedTimef()) * 30, 0));

		}
		ofSetColor(26, 25, 21, 20);
		ofSetLineWidth(5);
		ofNoFill();
		line.draw();
	}

	for (int i = 0; i < 16; i++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float y = ofMap(i, 0, 15, 30, 880);
		line.clear();
		for (int j = 0; j < 400; j++) {
			float x = ofMap(j, 0, 400, 20, 880);

			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01, i*4.23 + ofGetElapsedTimef()) * 30, 0));
			line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01, i*4.23 + ofGetElapsedTimef()) * 40, 0));

		}
		ofSetColor(26, 25, 21, 10);
		ofSetLineWidth(5);
		ofNoFill();
		line.draw();
	}

	//----------------------------------------


	for (int j = 0; j < 16; j++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float x = ofMap(j, 0, 15, 30, 880);
		line.clear();
		for (int i = 0; i < 400; i++) {
			float y = ofMap(i, 0, 400, 20, 880);
			line.addVertex(ofVec3f(x + ofSignedNoise(y*0.006, j*1.23 + ofGetElapsedTimef()) * 30, y , 0));
			line.addVertex(ofVec3f(x + ofSignedNoise(y*0.006, j*1.23 + ofGetElapsedTimef()) * 20, y, 0));

		}
		ofSetColor(26, 25, 21, 40);
		ofSetLineWidth(6);
		ofNoFill();
		line.draw();
	}


	for (int j = 0; j < 16; j++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float x = ofMap(j, 0, 15, 30, 880);
		line.clear();
		for (int i = 0; i < 400; i++) {
			float y = ofMap(i, 0, 400, 20, 880);
			line.addVertex(ofVec3f(x + ofSignedNoise(y*0.006, j*2.23 + ofGetElapsedTimef()) * 25, y, 0));
			line.addVertex(ofVec3f(x + ofSignedNoise(y*0.006, j*2.23 + ofGetElapsedTimef()) * 35, y, 0));

		}
		ofSetColor(26, 25, 21, 20);
		ofSetLineWidth(7);
		ofNoFill();
		line.draw();
	}

	for (int j = 0; j < 16; j++) {
		// ofMap( value number to be mapped, inputMin, inputMax, outputMin, outputMax); 
		float x = ofMap(j, 0, 15, 30, 880);
		line.clear();
		for (int i = 0; i < 400; i++) {
			float y = ofMap(i, 0, 400, 20, 880);
			line.addVertex(ofVec3f(x + ofSignedNoise(y*0.006, j*3.23 + ofGetElapsedTimef()) * 30, y, 0));
			line.addVertex(ofVec3f(x + ofSignedNoise(y*0.006, j*3.23 + ofGetElapsedTimef()) * 40, y, 0));

		}
		ofSetColor(26, 25, 21, 10);
		ofSetLineWidth(5);
		ofNoFill();
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
