#include "Text.h"
#include <iostream>

Text::Text(string textFont, int textSize, string textColor, string textData) {
  font = textFont.empty() ? "Arial" : textFont;
  size = textSize > 0 ? textSize : 16;
  color = textColor.empty() ? "black" : textColor;
  data = textData.empty() ? "lorem ipsum dolor sit amet" : textData;
};

Text::~Text() {
  cout << "Text cleared" << endl;
  cout << "\n";
};

Text Text::SetText(string font, int size, string color, string data) {
  Text resultingText(font, size, color, data);

  resultingText.font = font;
  resultingText.size = size;
  resultingText.color = color;
  resultingText.data = data;
  return resultingText;
}

string Text::GetTextFont() const { return font; };

int Text::GetTextSize() const { return size; };

string Text::GetTextColor() const { return color; };

string Text::GetTextData() const { return data; };

void Text::PrintText(Text &textObject) const {
  cout << "Font: " << textObject.GetTextFont() << endl;
  cout << "Size: " << textObject.GetTextSize() << endl;
  cout << "Color: " << textObject.GetTextColor() << endl;
  cout << "Data: " << textObject.GetTextData() << endl;
}
