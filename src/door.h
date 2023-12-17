/*
 * door.h
 */
 
 #ifndef DOOR_H
 #define DOOR_H
 
 #include "dimensions.h"
 
 class Door : public Dimensions {
public:
	void setDimensions(float length, float width, float height) override;
	float getLength() const override;
	float getWidth() const override;
	float getHeight() const override; 
private:
	 float length_;
	 float width_;
	 float height_;
 };
 #endif // DOOR_H