/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1094 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int tests, amount, total = 0;
    char animal;
    int rabbit = 0, rat = 0, frog = 0;
    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> amount >> animal;
        total += amount;
        if(animal == 'C'){
            rabbit += amount;
        }else if(animal == 'R'){
            rat += amount;
        }else if(animal == 'S'){
            frog += amount;
        }
    }
    double rabbit_percentage = (rabbit / (total*1.0)) * 100.00;
    double rat_percentage = (rat / (total*1.0)) * 100.00;
    double frog_percentage = (frog / (total*1.0)) * 100.00;
    
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << rabbit << "\n";
    cout << "Total de ratos: " << rat << "\n";
    cout << "Total de sapos: " << frog << "\n";
    cout << "Percentual de coelhos: " << setprecision(2) << fixed << rabbit_percentage << " %\n";
    cout << "Percentual de ratos: " << setprecision(2) << fixed << rat_percentage << " %\n";
    cout << "Percentual de sapos: " << setprecision(2) << fixed << frog_percentage << " %\n";
    
    return 0;
}

