#include "particle.h"



particle::particle(int startX, int startY, int hue)
{
	//pos.x = ofRandom();
	//pos.y = ofRandom();
	position = glm::vec2(startX, startY);
	direction = glm::vec2(ofRandom(-2.0, 2.0), ofRandom(-2.0, 2.0));
	size = 20;
}

void particle::update()
{
	position += direction;
}

void particle::draw()
{
	ofDrawCircle(position, size);
}
