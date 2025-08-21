/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1837 */
#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int Q = A / B, R = A % B;
    if(R < 0 && B > 0){ Q -= 1; R += B; }
    else if(R < 0 && B < 0){ Q += 1; R = A - B * Q; }
    cout << Q << " " << R << endl;

    return 0;
}

