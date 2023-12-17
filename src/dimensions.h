 /*
 * dimensions.h
 * designates length, width and height
 */
#ifndef DIMENSIONS_H
#define DIMENSIONS_H

#include <string>


class Dimensions {
public:
    virtual void setDimensions(float length, float width, float height) = 0;
	virtual float getLength() const = 0;
	virtual float getWidth() const = 0;
	virtual float getHeight() const = 0;
};

#endif // DIMENSIONS_H
