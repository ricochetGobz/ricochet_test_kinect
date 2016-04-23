#include "ofApp.h"
#include "KinectCapture.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLogLevel(OF_LOG_VERBOSE);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(100, 100, 100);
    
    kinectCapture.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    kinectCapture.draw();
        
    // COMMUNICATION INFORMATION
    stringstream reportCommunicationStream;
    string kinectConnected = (kinectCapture.kinectIsConnected())?"ON":"OFF - press (o) :: try to connect the kinect.";
    reportCommunicationStream << "Kinect: " << kinectConnected << endl;
    ofDrawBitmapString(reportCommunicationStream.str(), 10, 20);
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    kinectCapture.onKeyPressed(key);
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
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
