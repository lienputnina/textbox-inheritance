#include "TextBox.h"
#include <iostream>

int main() {

  TextBox Boxy("Roboto", 24, "brown", "What bar do programmers go to? Foo Bar.",
               700, 200, "red");

  cout << "Text font: " << Boxy.GetTextFont() << endl;
  cout << "Text color: " << Boxy.GetTextColor() << endl;
  cout << "Text data: " << Boxy.GetTextData() << endl;
  cout << "\n";

  cout << "Box width: " << Boxy.GetBoxWidth() << endl;
  cout << "Box height: " << Boxy.GetBoxHeight() << endl;
  cout << "Box border color: " << Boxy.GetBoxBorderColor() << endl;
  cout << "\n";

  cout << "TextBox properties:" << endl;
  Boxy.PrintTextBox();
  cout << "\n";

  cout << "TextBox properties after setting new values:" << endl;
  Boxy.SetTextBox(
      "Helvetica", 50, "Green",
      "Why do programmers prefer dark mode? Because light attracts bugs.", 500,
      100, "grey");
  Boxy.PrintTextBox();
  cout << "\n";

  cout << "Happy textboxing!" << endl;

  return 0;
}