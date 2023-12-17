/*
 * factory_test.cpp - uses google test ( and mock) frame work to perform test application
 */
 
 #include "gtest/gtest.h"
 #include "gmock/gmock.h"
 
 #include "door.h"
 #include "window.h"
 #include "components.h"


/* test fixture to be used for testing */

class FactoryMethodTest : public testing::Test
{
public: 
	void SetUp() override {
		Component component;
		/* concrete window pointer */
		window_ = component.component("window");
		/* concrete door pointer */
		door_ = component.component("door");
		
		/* set parameter to window object */
		window_->setDimensions(5.5, 2.5, 3.5);
		/* set parameter to door object */
		door_->setDimensions(10.5, 4.5, 5.5);
	}
protected:
    shared_ptr<Dimensions> window_;
	shared_ptr<Dimensions> door_;
};

/* test window parameters */
TEST_F(FactoryMethodTest, WindowTest)
{
	/* test wndow length */
    EXPECT_FLOAT_EQ(5.5, window_->getLength());
	/* test wndow width */
    EXPECT_FLOAT_EQ(2.5, window_->getWidth());
	/* test wndow height */
    EXPECT_FLOAT_EQ(3.5, window_->getHeight());
}

/* test door parameters */
TEST_F(FactoryMethodTest, DoorTest)
{
    /* test door length */
    EXPECT_FLOAT_EQ(10.5, door_->getLength());
	/* test door width */
    EXPECT_FLOAT_EQ(4.5, door_->getWidth());
	/* test door height */
    EXPECT_FLOAT_EQ(5.5, door_->getHeight());
}




