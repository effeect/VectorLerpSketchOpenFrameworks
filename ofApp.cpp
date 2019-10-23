#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
	
	ofVec2f version1 = tweenFrames(100, 200, 200, 100, 0);
	ofVec2f version2 = tweenFrames(200, 100, 300, 200, 0);
	ofVec2f version3 = tweenFrames(100, 200, 100, 200, 0);

	if (amount > 1)
	{
		amount = 0;
	}

	amount += 0.1;

	ofSetColor(255, 255, 0);
	ofCircle(version1.x, version1.y, 10);
	ofCircle(version2.x, version2.y, 10);
	ofCircle(version3.x, version3.y, 10);

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

ofVec2f ofApp::tweenFrames(float startX, float startY, float endX, float endY, float frame)
{
	ofVec2f centralVector(200, 150);
	
	ofVec2f startVector(startX, startY);
	ofVec2f endVector(endX, endY);
	ofVec2f mixedVector1 = startVector.getInterpolated(centralVector,amount);
	ofVec2f mixedVector2 = centralVector.getInterpolated(endVector,amount);

	ofVec2f result = mixedVector1.getInterpolated(mixedVector2, amount);

	return result;
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
