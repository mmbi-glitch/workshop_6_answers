#include <iostream>
using namespace std;

int val;
int *ptr;

int main() {
  cout << "Please enter a number: ";
  cin >> val;
  ptr = &val;
  cout << "The result is " << *ptr + 3 << endl << endl;
}
