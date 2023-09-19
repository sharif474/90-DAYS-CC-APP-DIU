

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number %2) {
    cout << "yes  " ;
  }

else {
    cout << " no " ;
}

  return 0;
}