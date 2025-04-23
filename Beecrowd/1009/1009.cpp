#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    char name[50];
    double salary, sold, bonus;
    cin >> name >> salary >> sold;
    bonus = salary + (sold * 0.15);
    
    cout << "TOTAL = R$ " << setprecision(2) << fixed << bonus << "\n";
 
    return 0;
}
