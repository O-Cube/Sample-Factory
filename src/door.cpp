/*
 * door.cpp
 */

#include "door.h"

void Door::setDimensions(float length, float width, float height) {
	length_ = length;
	width_ = width;
	height_ = height;
} 

float Door::getLength() const {
	return length_;
}

float Door::getWidth() const {
	return width_;
}

float Door::getHeight() const {
	return height_;
}