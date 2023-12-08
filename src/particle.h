#pragma once
#include "ofMain.h"

class particle
{
public:
	particle(int startX, int startY, int hue);

	float size;
	glm::vec2 force, position, direction;

	void update();
	void draw();


};

