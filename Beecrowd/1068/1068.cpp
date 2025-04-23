#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool parenthesis(string exp){
    vector<char>stack;
    for(int i = 0; i < exp.length(); i++){
        if(exp[i] == '('){
            stack.push_back('(');
        }
        else if(exp[i] == ')'){
            if(stack.empty()){
                return false;
            }else{
                stack.pop_back();
            }
        }
    }
    return stack.empty();
}

int main(){
    string exp;
    while(getline(cin, exp)){
        if(parenthesis(exp)){
            cout << "correct" << endl;
        }else{
            cout << "incorrect" << endl;
        }
    }

    return 0;
}

