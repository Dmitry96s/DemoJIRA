#include <iostream>
#include "Box.h"
using namespace std;
int main() {
  double radius;
  int quantity;

  
  
  
  
  
  
  
  
  
  
  
  Box yourBox(4, 4, 4);

  yourBox.calcSurface();
  cout << "Length: " << yourBox.getLength();
  cout << "\nWidth: " << yourBox.getWidth();
  cout << "\nHeight: " << yourBox.getHeight();
  cout << "\nSurface: " << yourBox.getSurface() << endl;
  
  return 0;
}
