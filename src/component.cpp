/* 
 * component.cpp
 */
 #include "components.h"
 
 shared_ptr<Dimensions> Component::component(const string object) {
	 if (object == "door") {
		 return make_shared<Door>();
	 }
	 if (object == "window") {
		 return make_shared<Window>();
	 }
	 /* if string matches no object then return a nullptr */
	 return nullptr;
 }