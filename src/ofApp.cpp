#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	//hue = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);

	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
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

	particle newParticle(mouseX, mouseY, hue);
	particles.push_back(newParticle);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------

