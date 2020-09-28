#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //font.load("CPFont.ttf", 100, true, true, true );
    ofTrueTypeFontSettings settings("CPFont2.ttf", 200);
	settings.antialiased = true;
	settings.contours = true;
	settings.dpi = 72;
	settings.direction = OF_TTF_LEFT_TO_RIGHT;
	settings.addRanges(ofAlphabet::Japanese);
	font.load(settings);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


	ofBackground(255);
	ofSetColor(0);
	auto bufferlines = ofBufferFromFile("intro.txt").getText();

	//vector < ofPath > paths = font.getStringAsPoints("モリサワ");
	vector < ofPath > paths = font.getStringAsPoints(bufferlines);


    //cout << paths.size() << endl;
    //return;
    
	ofTranslate(60, 120);
    
    
	for (int i = 0; i < paths.size(); i++) {
		paths[i].setPolyWindingMode(OF_POLY_WINDING_ODD);
		vector < ofPolyline > lines = paths[i].getOutline();
		for (int j = 0; j < lines.size(); j++) {

            ofPoint center = lines[j].getBoundingBox().getCenter();
			
			// fill shape - white
			ofBeginShape();
			ofSetColor(0);
			for (int k = 0; k < lines[j].size(); k++) {
				ofVertex(lines[j][k]);
			}
			ofEndShape();


            for (int z = 0; z < 500; z++){
                //let's mess with a temporary copy
				ofSetColor(0, 8, 48, 10);
                ofPushMatrix();
                ofTranslate(center.x, center.y + z* 1);
                ofScale(ofMap(z, 0, 500, 1, 0));
                ofPolyline temp = lines[j];
                for (int k = 0; k < temp.size(); k++) {
                    temp[k] -= center;
                    temp[k].x += 30 * sin(z * 0.07 + ofGetElapsedTimef() + i);
                }
                temp.draw();
                ofPopMatrix();
            }

			for (int z = 0; z < 500; z++) {
				//let's mess with a temporary copy
				ofSetColor(0, 8, 48, 40 - (z/8));
				ofPushMatrix();
				ofTranslate(center.x, center.y + z * 1);
				ofScale(ofMap(z, 0, 500, 1, 0));
				ofPolyline temp = lines[j];
				for (int k = 0; k < temp.size(); k++) {
					temp[k] -= center;
					temp[k].x += 20 * -sin(z * 0.05 + ofGetElapsedTimef() + i);
				}
				temp.draw();
				ofPopMatrix();
			}

			for (int z = 0; z < 500; z++) {
				//let's mess with a temporary copy
				ofSetColor(0, 8, 48, 10);
				ofPushMatrix();
				ofTranslate(center.x, center.y + z * 1);
				ofScale(ofMap(z, 0, 500, 1, 0));
				ofPolyline temp = lines[j];
				for (int k = 0; k < temp.size(); k++) {
					temp[k] -= center;
					temp[k].x += 40 * cos(z * 0.03 + ofGetElapsedTimef() + i);
				}
				temp.draw();
				ofPopMatrix();
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
