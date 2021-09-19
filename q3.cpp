#include <iostream>
using namespace std;

string *ptr;
string request;

int main() {
  cout << "Do you want to load the pointer with an address? Enter Yes/No or Y/N: ";
  cin >> request;
  cout << endl;
  if (request == "Yes" || request == "Y") {
    ptr = &request;
  }
  else {
    ptr = NULL;
  }
  if (ptr == 0x0) {
    cout << "The pointer's value is NULL" << endl << endl;
  }
  else {
    cout << "The pointer's value is " << ptr << endl << endl;
  }
}
