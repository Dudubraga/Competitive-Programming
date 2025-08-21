/* Problem statement: https://neps.academy/br/exercise/271 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int T; scanf("%d\n", &T);
    while(T--){
        string expr; getline(cin, expr);
        int p1 = 0, p2 = 0, p3 = 0, close = 0;
        vector<int>open;
        if(expr.empty()){ cout << "S" << endl; }
        else{
            bool P = true;
            for(int i = 0; i < expr.size(); i++){
                if(expr[i] == '('){ p1++; open.push_back(1); }
                else if(expr[i] == '['){ p2++; open.push_back(2); }
                else if(expr[i] == '{'){ p3++; open.push_back(3); }
                else if(expr[i] == ')'){ p1--; close = 1; }
                else if(expr[i] == ']'){ p2--; close = 2; }
                else if(expr[i] == '}'){ p3--; close = 3; }
                if(p1 < 0 || p2 < 0 || p3 < 0){
                    P = false; break;
                }
                if(close != 0 && close != open[open.size()-1]){
                    P = false; break;
                }
                else if(close == open[open.size()-1]){
                    open.pop_back();
                    close = 0;
                }
            }
            if(P == false || p1 > 0 || p2 > 0 || p3 > 0){
                cout << "N" << endl;
            }
            else{
                cout << "S" << endl;
            }
        }
        open.clear();
    }

    return 0;
}

