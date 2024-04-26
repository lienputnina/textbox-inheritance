#ifndef Text_h
#define Text_h

#include <string>

using namespace std;

class Text {

  /*
     Using the'protected' access type to give the derived TextBox class access
     to these variables.
  */
protected:
  string font;
  int size;
  string color;
  string data;

public:
  Text(string font, int size, string color, string data);

  /*
  Taking in the "new" Text variables as parameters to avoid directly modifying
  the original member variables.
  */
  void SetText(string newTextFont, int newTextSize, string newTextColor,
               string newTextData);

  string GetTextFont() const;
  int GetTextSize() const;
  string GetTextColor() const;
  string GetTextData() const;

  void PrintText() const;
};

#endif