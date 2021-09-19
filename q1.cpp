#include <iostream>
using namespace std;

float a;

int main() {
  cout << "The address of \'a\' in hexadecimal is " << &a << endl;
  cout << "The address of \'a\' in decimal is " << reinterpret_cast<long long int>(&a) << endl << endl;
}
