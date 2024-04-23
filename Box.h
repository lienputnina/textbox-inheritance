#ifndef Box_h
#define Box_h

#include <string>
using namespace std;

class Box {

  /*
     Using the'protected' type to give the derived class access to this
     variable
  */
protected:
  int width;
  int height;
  string border_color;

public:
  Box(int width, int height, string border_color);

  void SetBox(int newBoxWidth, int newBoxHeight, string new_box_border_color);

  int GetBoxWidth() const;
  int GetBoxHeight() const;
  string GetBoxBorderColor() const;

  void PrintBox() const;
};

#endif