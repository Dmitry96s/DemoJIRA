#include "Box.h"

  
  Box::Box(double l, double w, double h)
	: length(l), width(w), height(h)
  {
  }

  void Box::calcSurface() {
	surface = 2 * (height * width) + 2 * (height * length) + 2 * (width * length);
  }

  double Box::getLength() {
	return length;
  }
  
  double Box::getWidth() {
	return width;
  }
  
  double Box::getHeight() {
	return height;
  }
  
  double Box::getSurface() {
	return surface;
  }


