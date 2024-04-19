#ifndef Text_h
#define Text_h

#include <string>
using namespace std;

class Text {

protected:
  string font;
  int size;
  string color;
  string data;

public:
  Text(string font, int size, string color, string data);
  ~Text();

  Text SetText(string font, int size, string color, string data);

  string GetTextFont() const;
  int GetTextSize() const;
  string GetTextColor() const;
  string GetTextData() const;

  void PrintText(Text &textObject) const;
};

#endif