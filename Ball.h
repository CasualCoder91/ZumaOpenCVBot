#pragma once
#include "color.h"
#include <opencv2/core/types.hpp>

class Ball
{
public:
	Color color;
	cv::Point position; //x and y as integer
	cv::Rect rect;

	Ball(Color color, cv::Rect rect, int x, int y);
	Ball();
};

