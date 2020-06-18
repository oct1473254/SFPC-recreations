#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("carbontype.ttf", 20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(243, 207, 201);
    ofSeedRandom(mouseX);
float w = ofGetWidth()/30.0;
float h = ofGetWidth()/30.0;



    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 30; j++){

            float x = ofMap(i, 0, 30, 0, ofGetWidth());
            float y = ofMap(j, 0, 30, 0, ofGetWidth());

            ofSetColor(69, 94, 131);
            ofSetLineWidth(ofRandom(1, 6));
            ofDrawLine(x-40, y+7, x+30, y+5);

            if ((j+i) % 2 == 0){
                font.drawString("S", x, y);
            } else{
                font.drawString("s", x, y);
            }
//            ofDrawRectangle(x, y, w, h);
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
