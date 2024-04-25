#ifndef TextBox_h
#define TextBox_h
#include <string>

#include "./Box.h"
#include "./Text.h"

/*
Creating a TextBox class through multiple inheritance to get access to the
public methods and protected variables from both Text and Box classes.
*/
class TextBox : public Text, public Box {

public:
  /*
  Taking the constructor parameters from the base classes Text and Box to
  initialize the base classes in the TextBox constructor.
  */
  TextBox(string font, int size, string color, string data, int width,
          int height, string border_color);

  /*
    Taking in the "new" Text and Box variables as parameters to avoid directly
    modifying the original member variables.
    */
  void SetTextBox(string newTextFont, int newTextSize, string newTextColor,
                  string newTextData, int newBoxWidth, int newBoxHeight,
                  string new_box_border_color);
  void PrintTextBox() const;
};

#endif
