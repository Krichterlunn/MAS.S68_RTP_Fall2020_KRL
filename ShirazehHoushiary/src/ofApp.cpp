#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetWindowShape(900, 900);
	image.load("image2.jpg");
	seed = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	//ofBackground(0);
	image.draw(0,0, ofGetWidth(), ofGetHeight());

	for (int i = 0; i < 200; i++) {
		line.clear();
		for (int j = 0; j < 400; j++) {

			float y = ofMap(i, 0, 200, 10, 850);
			float x = ofMap(j, 0, 400, 20, 450);
			float amtToMove = ofMap(j, 0, 2000, 0, -400);

			//float distance = ofDist(x, y, mouseX, mouseY);
			//float pct = ofMap(distance, 0, 200, 1, 0, true);

			//line.addVertex(ofVec3f(x, y, 0));
			//line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01 + i* 1.5)* 10, 0));
			line.addVertex(ofVec3f(x, y + ofNoise(x*0.04 + i * 0.9) * amtToMove, 0));
			//line.addVertex(ofVec3f(x, y + ofNoise(x*0.04 + i * 0.9) * amtToMove, 0));
			//line.addVertex(ofVec3f(x, y + ofSignedNoise(x*0.01 + i * 1.5) * 11, 0));


		}
		ofSetColor(55, 120, 150);
		ofSetLineWidth(2.5);
		ofNoFill();
		//line.draw();

		// gradient color 01
		ofMesh m;
		m.setMode(OF_PRIMITIVE_LINE_STRIP);

		for (int i = 0; i < line.size(); i++) {
			float pct = ofMap(i, 0, line.size(), 1, 0);
			m.addVertex(line[i]);
			//m.addColor(ofColor(55, 120, 150, pct * -255));
			m.addColor(ofColor(55, 120, 150, pct * 255));
		}
		m.draw();

		ofPushMatrix();
		ofRotateZ(180);
		ofTranslate(-850, -800);
		ofSetLineWidth(2.5);
		ofNoFill();
		

		ofMesh m2;
		m2.setMode(OF_PRIMITIVE_LINE_STRIP);

		for (int i = 0; i < line.size(); i++) {
			float pct = ofMap(i, 0, line.size(), 1, 0);
			m2.addVertex(line[i]);
			//m2.addColor(ofColor(64, 81, 97, pct * -255));
			m2.addColor(ofColor(64, 81, 97, pct * 255));
		}
		m2.draw();

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
