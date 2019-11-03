#pragma once

#include "ofMain.h"

class CircleClass
{
public :
	CircleClass(float startX, float startY, float endX, float endY, float amountPar);

	//List of vectors
	ofVec2f centralVector;

	ofVec2f startVector;
	ofVec2f endVector;
	ofVec2f mixedVector;
	ofVec2f mixedVector2;

	//The amount, the animation scales from 0 to 1
	float amount;

	//The final result with coordinates 
	ofVec2f result();
	

	

};

