#include "Box.h"
#include <iostream>

Box::Box(int boxWidth, int boxHeight, string box_border_color) {
  width = boxWidth > 0 ? boxWidth : 400;
  height = boxHeight > 0 ? boxHeight : 90;
  border_color = box_border_color.empty() ? "black" : box_border_color;
};

void Box::SetBox(int newBoxWidth, int newBoxHeight,
                 string new_box_border_color) {

  width = newBoxWidth > 0 ? newBoxWidth : 400;
  height = newBoxHeight > 0 ? newBoxHeight : 90;
  border_color = new_box_border_color.empty() ? "black" : new_box_border_color;
};

int Box::GetBoxWidth() const { return width; };
int Box::GetBoxHeight() const { return height; };
string Box::GetBoxBorderColor() const { return border_color; };

void Box::PrintBox() const {
  cout << "Width: " << GetBoxWidth() << endl;
  cout << "Height: " << GetBoxHeight() << endl;
  cout << "Border color: " << GetBoxBorderColor() << endl;
}