#include <iostream>
#include <iomanip>
using namespace std;

void forex(float &nzd, float &wst, float &pgk);

float dollar, tala, kina;

int main() {
  cout << "Enter any amount in NZD dollars: ";
  cin >> dollar;
  forex(dollar, tala, kina);
  cout << endl << "You have entered $" << setprecision(2) << fixed << dollar << " NZD" << endl << endl;
  cout << setprecision(2) << fixed << dollar << " NZD = " << setprecision(2) << fixed << tala << " WST" << endl;
  cout << setprecision(2) << fixed << dollar << " NZD = " << setprecision(2) << fixed << kina << " PGK" << endl << endl;
}

void forex(float &nzd, float &wst, float &pgk) {
  wst = nzd * 1.7919458;
  pgk = nzd * 2.4840849;
}
