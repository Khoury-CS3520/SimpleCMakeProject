#include <iostream>

using std::cout, std::endl;
using std::cin;

int main () {

  cout << "Welcome to the fancy number generator.\n";
  cout << "Enter the number of ints you'd like to print to the screen: ";

  int count;
  cin >> count;

  for(int i = 0; i < count; i++) {
    cout << i << endl;
  }

}
