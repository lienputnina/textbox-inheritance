#ifndef Box_h
#define Box_h

#include <string>
using namespace std;

class Box {

protected:
  int width;
  int height;
  string border_color;

public:
  Box(int width, int height, string border_color);

  void SetBox(int width, int height, string border_color);

  int GetBoxWidth() const;
  int GetBoxHeight() const;
  string GetBoxBorderColor() const;

  void PrintBox() const;
};

#endif