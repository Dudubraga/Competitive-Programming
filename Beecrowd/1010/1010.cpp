/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1010 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int code1, quant1, code2, quant2;
    double price1, price2, paid;
    cin >> code1 >> quant1 >> price1;
    cin >> code2 >> quant2 >> price2;
    paid = quant1 * price1 + quant2 * price2;

    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << paid << "\n";

    return 0;
}

