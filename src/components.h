/*
 * component.h - implements abstract method
 */
 
 #ifndef COMPONENT_H
 #define COMPONENT_H
 
 
 #include <memory>
 #include "door.h"
 #include "window.h"
 
 using namespace std;
 
 class Component {
public:
	 /* factory method */
	 shared_ptr<Dimensions> component(const string object);
 };
 
 #endif // COMPONENT_H