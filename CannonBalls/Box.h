#pragma once
class Box {
private:
  double length;
  double width;
  double height;
  double surface;
public:
  
  Box(double l, double w, double h);
  void calcSurface();

  double getLength();
  double getWidth();
  double getHeight();

  double getSurface();
  


};



