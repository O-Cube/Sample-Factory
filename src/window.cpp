/*
 * window.cpp
 */

#include "window.h"

void Window::setDimensions(float length, float width, float height) {
	length_ = length;
	width_ = width;
	height_ = height;
} 

float Window::getLength() const {
	return length_;
}

float Window::getWidth() const {
	return width_;
}

float Window::getHeight() const {
	return height_;
}
 