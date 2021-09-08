#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetLogLevel(OF_LOG_VERBOSE);
	AdvatekAssist.setup();

	//required call
	gui.setup();

	//backgroundColor is stored as an ImVec4 type but can handle ofColor
	backgroundColor = ofColor(114, 144, 154);

	// we don't want to be running to fast
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofEnableAntiAliasing();
}

//--------------------------------------------------------------
void ofApp::update(){
	AdvatekAssist.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofSetBackgroundColor(backgroundColor);

	gui.begin();
	//==========================================================
	// In between gui.begin() and gui.end() use ImGui

	{
		ImGui::Begin("Advatek Assistant");
		ImGui::Text("Network Devices");
		

		ImGui::Text("Application average %.1f FPS", ImGui::GetIO().Framerate);
		ImGui::End();
	}

	//==========================================================
	gui.end();

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
