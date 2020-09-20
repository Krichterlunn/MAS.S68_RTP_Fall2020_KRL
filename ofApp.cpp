#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("CPFont.ttf", 100, true, true, true );
	/* ofTrueTypeFontSettings settings("CPFont.ttf", 100);
	settings.antialiased = true;
	settings.dpi = 72;
	settings.direction = OF_TTF_LEFT_TO_RIGHT;
	settings.addRanges(ofAlphabet::Japanese);
	settings.contours = true;
	font.load(settings); */
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


	ofBackground(0);

	//vector < ofPath > paths = font.getStringAsPoints("モリサワ");
	vector < ofPath > paths = font.getStringAsPoints("KATE");

	ofTranslate(300, 150);

	for (int i = 0; i < paths.size(); i++) {
		paths[i].setPolyWindingMode(OF_POLY_WINDING_ODD);
		vector < ofPolyline > lines = paths[i].getOutline();
		for (int j = 0; j < lines.size(); j++) {

			lines[j].setClosed(true);
			lines[j] = lines[j].getResampledBySpacing(3);
			lines[j].draw();

			// fill shapes - white
			/* ofBeginShape();
			ofSetColor(255);
			for (int k = 0; k < lines[j].size(); k++) {
				ofVertex(lines[j][k]);
			}
			ofEndShape(); */

			for (int k = 0; k < lines[j].size(); k++) {
				lines[j][k].x += 20 * sin(lines[j][k].y * 0.04 + i);
				ofNoFill();
				ofScale(.99);
				ofTranslate(0.5, 6);
				lines[j].draw();
			}


		}
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
