#include "ofApp.h"

#include "ofxAdjustH.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLogToConsole();
    ofxAdjustH::setup();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ADJUST_CONST_FLOAT(w1, 200);
    ADJUST_CONST_FLOAT(h1, 200);

    ofSetColor(255, 0, 0);
    ofDrawRectangle(0, 0, w1, h1);

    ofSetColor(0, 255, 0);
    ofDrawEllipse(100, 100, 200, 200);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'r'){
        ofxAdjustH::refresh();
        ofLog() << "refreshed";
    }
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
