#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	CircleClass c(100, 200, 200, 100, amount);
	CircleClass d(200, 100, 300, 200, amount);
	CircleClass e(300, 200, 100, 200, amount);

	Circles.push_back(c);
	Circles.push_back(d);
	Circles.push_back(e);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofPixels.begin();
	
	ofBackground(255);

	
	for (int i = 0; i < Circles.size(); i++)
	{
		Circles[i].amount = amount;

		ofSetColor(0);
		ofCircle(Circles[i].result().x, Circles[i].result().y, 10);
		
		std::cout << Circles[i].result().x << std::endl;

	}

	if (amount > 1)
	{
		amount = 0;

	}

	amount += 0.01;

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
	CircleClass newEntry(mouseX,
		mouseY,
		Circles.back().startVector.x, Circles.back().startVector.y, amount);
	Circles.push_back(newEntry);
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
