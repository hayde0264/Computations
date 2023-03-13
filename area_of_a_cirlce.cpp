#include <iomanip>
#include <iostream>

using std::cin, std::cout, std::fixed, std::setprecision;

/*
 * see: https://www.beecrowd.com.br/judge/en/problems/view/1001
 */

int main() {
  double R;
  cin >> R;
  double pi = 3.14159;
  double A = pi * (R * R);

  cout << fixed << setprecision(4) << "A=" << A << '\n';
  return 0;
}
