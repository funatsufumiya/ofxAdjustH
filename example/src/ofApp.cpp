#include "ofApp.h"

#include "ofxAdjustH.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLogToConsole();
    ofxAdjustH::setup();

    ADJUST_SET_FLOAT(x, 100); // modify this line, save file and press R on your running app!
	ADJUST_SET_FLOAT(y, 100); // modify this line, save file and press R on your running app!
    ADJUST_SET_FLOAT(w, 200); // modify this line, save file and press R on your running app!
	ADJUST_SET_FLOAT(h, 200); // modify this line, save file and press R on your running app!
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofDrawEllipse(x, y, w, h);
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
