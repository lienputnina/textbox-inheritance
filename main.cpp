#include "Box.h"
#include "Text.h"

#include <iostream>

int main() {
  Text TextyBoi("Helvetica", 24, "red", "smsmsmsm");

  cout << "Text before setting:" << endl;
  TextyBoi.PrintText();

  TextyBoi.SetText("MyFavFont", 28, "blue", "420, blaze it"); // doesn't work
  cout << "Text after setting:" << endl;
  TextyBoi.PrintText();

  Box BeatBox(600, 100, "red");

  cout << "Box before setting:" << endl;
  BeatBox.PrintBox();

  BeatBox.SetBox(700, 200, "brown");
  cout << "Box after setting:" << endl;
  BeatBox.PrintBox();

  return 0;
}