#include "Text.h"
#include <iostream>

Text::Text(string textFont, int textSize, string textColor, string textData) {
  font = textFont.empty() ? "Arial" : textFont;
  size = textSize > 0 ? textSize : 16;
  color = textColor.empty() ? "black" : textColor;
  data = textData.empty() ? "lorem ipsum dolor sit amet" : textData;
};

void Text::SetText(string newFont, int newSize, string newColor,
                   string newData) {
  font = newFont.empty() ? "Arial" : newFont;
  size = newSize > 0 ? newSize : 16;
  color = newColor.empty() ? "black" : newColor;
  data = newData.empty() ? "lorem ipsum dolor sit amet" : newData;
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
  cout << "\n";
}
