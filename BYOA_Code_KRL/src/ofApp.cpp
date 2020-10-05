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

	ofBackground(0);

	for (int i = 0; i < 200; i++) {
		line.clear();
		for (int j = 0; j < 30; j++) {

			float y = ofMap(i, 0, 200, 30, 850);
			float x = ofMap(j, 0, 30, 20, 450);

			float distance = ofDist(x, y, mouseX, mouseY);
			float pct = ofMap(distance, 0, 200, 1, 0, true);

			//line.addVertex(ofVec3f(x, y, 0));
			line.addVertex(ofVec3f(x, y + ofNoise(x + i*0.5) * 10, 0));


		}
		ofSetColor(55, 120, 150);
		ofSetLineWidth(2);
		ofNoFill();
		line.draw();

		ofPushMatrix();
		ofRotateZ(180);
		ofTranslate(-875, -885);
		ofSetColor(64, 81, 97);
		ofSetLineWidth(2);
		ofNoFill();
		line.draw();
		ofPopMatrix();
		
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
