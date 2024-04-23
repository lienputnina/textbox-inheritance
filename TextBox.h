#ifndef TextBox_h
#define TextBox_h
#include <string>

#include "./Box.h"
#include "./Text.h"

class TextBox : public Text, public Box {

public:
  /*
  Taking the constructor parameters from the base classes Text and Box to
  initialize them in the TextBox constructor
  */
  TextBox(string font, int size, string color, string data, int width,
          int height, string border_color);

  void SetTextBox(string newTextFont, int newTextSize, string newTextColor,
                  string newTextData, int newBoxWidth, int newBoxHeight,
                  string new_box_border_color);
  void PrintTextBox() const;
};

#endif
