#include "TextBox.h"

#include <iostream>

int main() {

  TextBox FillMaBox("Roboto", 24, "brown", "What's in the box? Pain", 700, 200,
                    "red");

  // Text class method calls
  cout << "Calling Text class methods:" << endl;
  cout << "Text font: " << FillMaBox.GetTextFont() << endl;
  cout << "Text color: " << FillMaBox.GetTextColor() << endl;
  cout << "Text data: " << FillMaBox.GetTextData() << endl;
  cout << "\n";

  // Box class method calls
  cout << "Calling Box class methods:" << endl;
  cout << "Box width: " << FillMaBox.GetBoxWidth() << endl;
  cout << "Box height: " << FillMaBox.GetBoxHeight() << endl;
  cout << "Box border color: " << FillMaBox.GetBoxBorderColor() << endl;
  cout << "\n";

  cout << "Printing the TextBox object" << endl;
  FillMaBox.PrintTextBox();
  cout << "\n";

  cout << "TextBox object after setting new TextBox values" << endl;
  FillMaBox.SetTextBox("Helvetica", 50, "Green", "New text", 500, 100, "grey");
  FillMaBox.PrintTextBox();
  cout << "\n";

  cout << "Happy textboxing!" << endl;

  return 0;
}