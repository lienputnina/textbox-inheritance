#include "Text.h"
#include <iostream>

int main() {
  Text TextyBoi("Helvetica", 24, "red", "smsmsmsm");

  cout << "Text before setting:" << endl;
  TextyBoi.PrintText();

  TextyBoi.SetText("MyFavFont", 28, "blue", "420, blaze it"); // doesn't work
  cout << "Text after setting:" << endl;
  TextyBoi.PrintText();

  return 0;
}