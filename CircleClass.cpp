#include "CircleClass.h"

CircleClass::CircleClass(float startX, float startY, float endX, float endY, float amountPar)
{
	//Start vectors represent the beginning point of animation, the end vector represents the end.
	//Setting parameters in constructor
	amount = amountPar; 
	centralVector.set(200, 150);
	startVector.set(startX, startY);
	endVector.set(endX, endY);

	
}

ofVec2f CircleClass::result()
{
	//Math calculation
	mixedVector = startVector.getInterpolated(centralVector, amount);
	mixedVector2 = centralVector.getInterpolated(endVector, amount);

	//Final Calculation
	ofVec2f Calc = mixedVector.getInterpolated(mixedVector2, amount);

	return Calc;
}
