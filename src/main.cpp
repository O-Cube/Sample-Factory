/*
 * client 
 */
 
 #include <iostream>
 #include "window.h"
 #include "door.h"
 #include "components.h"
 
 using namespace std;
 
 int main() {
	 /* create concrete window object from factory method */
	 Component component;
	 shared_ptr<Dimensions> myWindow = component.component("window");
	 
	 /* create concrete door object from factory method */
	 shared_ptr<Dimensions> myDoor = component.component("door");
	 
	 /* myWindow */
	 myWindow->setDimensions(5.5, 2.5, 3.5);
	 cout << "Length: " << myWindow->getLength() << endl \
	 << "Width: " << myWindow->getWidth() << endl \
	 << "Height: " << myWindow->getHeight() << endl;
	 
	 /* myDoor */
	 myDoor->setDimensions(10.0, 3.0, 20.5);
	 cout << "Length: " << myDoor->getLength() << endl \
	 << "Width: " << myDoor->getWidth() << endl \
	 << "Height: " << myDoor->getHeight() << endl;
	 
	 return(0);
 }