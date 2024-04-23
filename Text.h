#ifndef Text_h
#define Text_h
#include <string>

using namespace std;

class Text {

  /*
     Using the'protected' type to give the derived class access to this
     variable
     */
protected:
  string font;
  int size;
  string color;
  string data;

public:
  Text(string font, int size, string color, string data);

  void SetText(string newTextFont, int newTextSize, string newTextColor,
               string newTextData);

  string GetTextFont() const;
  int GetTextSize() const;
  string GetTextColor() const;
  string GetTextData() const;

  void PrintText() const;
};

#endif