#include "Text.h"
#include <iostream>

Text::Text(string textFont, int textSize, string textColor, string textData) {
  font = textFont.empty() ? "Arial" : textFont;
  size = textSize > 0 ? textSize : 16;
  color = textColor.empty() ? "black" : textColor;
  data = textData.empty() ? "lorem ipsum dolor sit amet" : textData;
};

void Text::SetText(string newTextFont, int newTextSize, string newTextColor,
                   string newTextData) {
  font = newTextFont.empty() ? "Arial" : newTextFont;
  size = newTextSize > 0 ? newTextSize : 16;
  color = newTextColor.empty() ? "black" : newTextColor;
  data = newTextData.empty() ? "lorem ipsum dolor sit amet" : newTextData;
}

string Text::GetTextFont() const { return font; };
int Text::GetTextSize() const { return size; };
string Text::GetTextColor() const { return color; };
string Text::GetTextData() const { return data; };

void Text::PrintText() const {
  cout << "Font: " << GetTextFont() << endl;
  cout << "Size: " << GetTextSize() << endl;
  cout << "Color: " << GetTextColor() << endl;
  cout << "Data: " << GetTextData() << endl;
}
