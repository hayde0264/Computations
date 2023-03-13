#include <iomanip>
#include <iostream>

using std::cin, std::cout, std::setprecision, std::fixed;

/*
 * see: https://www.beecrowd.com.br/judge/en/problems/view/1008
 */

int main() {
  int employId, hoursWorked;
  float salPerHour;
  cin >> employId >> hoursWorked >> salPerHour;

  float amountDue = hoursWorked * salPerHour;

  cout << "NUMBER = " << employId << '\n'
       << "SALARY = U$ " << fixed << setprecision(2) << amountDue << '\n';
  return 0;
}
