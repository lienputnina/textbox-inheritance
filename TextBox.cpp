#include "TextBox.h"

/*
Initializing a TextBox instance with specific names for the variables inherited
from Text and Box classes. The initializer list ensures that the both of the
base class constructors run first. This way the inherited parameters are
initialized correctly.
*/
TextBox::TextBox(string textBoxFont, int textBoxSize, string textBoxColor,
                 string textBoxData, int textBoxWidth, int textBoxHeight,
                 string textbox_border_color)
    : Text(textBoxFont, textBoxSize, textBoxColor, textBoxData),
      Box(textBoxWidth, textBoxHeight, textbox_border_color){};

void TextBox::SetTextBox(string newTextFont, int newTextSize,
                         string newTextColor, string newTextData,
                         int newBoxWidth, int newBoxHeight,
                         string new_box_border_color) {
  Text::SetText(newTextFont, newTextSize, newTextColor, newTextData);
  Box::SetBox(newBoxWidth, newBoxHeight, new_box_border_color);
};

void TextBox::PrintTextBox() const {
  Text::PrintText();
  Box::PrintBox();
};