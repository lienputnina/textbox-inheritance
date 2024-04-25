#ifndef Box_h
#define Box_h

#include <string>
using namespace std;

class Box {
  /*
     Using the'protected' access type to give the derived TextBox class access
     to these variables.
  */
protected:
  int width;
  int height;
  string border_color;

public:
  Box(int width, int height, string border_color);

  /*
  Taking in the "new" Box variables as parameters to avoid directly modifying
  the original member variables.
  */
  void SetBox(int newBoxWidth, int newBoxHeight, string new_box_border_color);

  int GetBoxWidth() const;
  int GetBoxHeight() const;
  string GetBoxBorderColor() const;

  void PrintBox() const;
};

#endif