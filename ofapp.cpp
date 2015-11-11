#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetFrameRate(40);
    ofEnableAlphaBlending();
    
    sounds[0].loadSound("Distant-thunder-sound.mp3");
    sounds[1].loadSound("Dog-barking-4.mp3");
    sounds[2].loadSound("Evil-laugh.mp3");
    sounds[3].loadSound("Flock-of-crows-cawing-loudly.mp3");
    
    for (int i=0; i<10; i++) {
        balls[i].x = ofRandomWidth();
        balls[i].y = ofRandomHeight();
        balls[i].vx = ofRandom(-10,10);
        balls[i].vy = ofRandom(-10,10);
        balls[i].radius = ofRandom(10,40);
        balls[i].red = ofRandom(0,255);
        balls[i].green = ofRandom(0,255);
        balls[i].blue = ofRandom(0,255);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<10; i++) {
        
        balls[i].x = balls[i].x + balls[i].vx;
        balls[i].y = balls[i].y + balls[i].vy;
        
        if (balls[i].x<0 || balls[i].x > ofGetWidth()) {
            balls[i].vx = -balls[i].vx;
            
            int randomSound = ofRandom(0,4);
            sounds[randomSound].play();
        }
        
        if (balls[i].y<0 || balls[i].y > ofGetHeight()) {
            balls[i].vy = -balls[i].vy;
            
            int randomSound = ofRandom(0,4);
            sounds[randomSound].play();
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0,0,0,30);
    ofRect(0,0,ofGetWidth(),ofGetHeight());
    ofCircle(mouseX, mouseY, 50);
    
    for (int i=0; i<10; i++) {
        ofSetColor(balls[i].red, balls[i].green, balls[i].blue);
        ofCircle(balls[i].x, balls[i].y, balls[i].radius);
        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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


