#include "Box.h"
#include <iostream>

Box::Box(int boxWidth, int boxHeight, string box_border_color) {
  width = boxWidth > 0 ? boxWidth : 400;
  height = boxHeight > 0 ? boxHeight : 90;
  border_color = box_border_color.empty() ? "black" : box_border_color;
};

void Box::SetBox(int newWidth, int newHeight, string newBorderColor) {

  width = newWidth > 0 ? newWidth : 400;
  height = newHeight > 0 ? newHeight : 90;
  border_color = newBorderColor.empty() ? "black" : newBorderColor;
};

int Box::GetBoxWidth() const { return width; };
int Box::GetBoxHeight() const { return height; };
string Box::GetBoxBorderColor() const { return border_color; };

void Box::PrintBox() const {
  cout << "Box width: " << GetBoxWidth() << endl;
  cout << "Box height: " << GetBoxHeight() << endl;
  cout << "Box border color: " << GetBoxBorderColor() << endl;

  cout << "\n";
}