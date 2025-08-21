/* Problem statement: https://onlinejudge.org/external/121/12195.pdf */
#include <iostream>
#include <string>
using namespace std;

int main(){
    string composition;
    double measures = 0;
    int answer = 0;
    while(cin >> composition && composition != "*"){
        int i = 0;
        while(composition[i] != NULL){
            if(composition[i] == '/'){
                if(measures == 1) answer++;
                measures = 0;
            }
            if(composition[i] == 'W'){
                measures += 1;
            } 
            else if(composition[i] == 'H'){
                measures += 0.5;
            }  
            else if(composition[i] == 'Q'){
                measures += 0.25;
            }  
            else if(composition[i] == 'E'){
                measures += 0.125;
            }  
            else if(composition[i] == 'S'){
                measures += 0.0625;
            }  
            else if(composition[i] == 'T'){
                measures += 0.03125;
            }  
            else if(composition[i] == 'X'){
                measures += 0.015625;
            }
            i++;
        }

        cout << answer << endl;
        measures = 0;
        answer = 0;
    }

    return 0;
}

