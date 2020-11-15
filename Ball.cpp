#include "Ball.h"

Ball::Ball(Color _color, cv::Rect _rect, int _x, int _y) {
	this->color = _color;
	this->rect = _rect;
	position.x = _x;
	position.y = _y;
}

Ball::Ball(){
	this->color = Color::BLUE;
	this->position = cv::Point();
	this->rect = cv::Rect();
}
