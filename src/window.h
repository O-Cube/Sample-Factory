/*
 * window.h
 */
 
 #ifndef WINDOW_H
 #define WINDOW_H
 
 #include "dimensions.h"
 
 class Window : public Dimensions {
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
 #endif // WINDOW_H