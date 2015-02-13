#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    if (guardMovment == false)
    {
        positionGuardY++;
        if(positionGuardY == 900)
        {
            guardMovment = !guardMovment;
        }
    }
    else if (guardMovment == true)
    {
        positionGuardY--;
        if(positionGuardY == 100)
        {
            guardMovment = !guardMovment;
        }
    }
    distanceGuard = sqrt((positionX - positionGuardX)*(positionX - positionGuardX) + (positionY - positionGuardY)*(positionY - positionGuardY));
    if (distanceGuard <= 75)
    {
        playerColorRed = 255;
        playerColorGreen = 0;
    }
    if (distanceGuard > 75)
    {
        playerColorGreen = 255;
        playerColorRed = 0;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor (255,255,255);
    ofCircle (positionGuardX,positionGuardY,75);

    ofSetColor (playerColorRed,playerColorGreen,0);
    ofCircle (positionX,positionY, 10);

    ofSetColor (0,0,255);
    ofCircle (positionGuardX,positionGuardY, 10);



}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'w')
    {
        positionY-=4;
    }
    if(key == 's')
    {
        positionY+=4;
    }
    if(key == 'd')
    {
        positionX+=4;
    }
    if(key == 'a')
    {
        positionX-=4;
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
