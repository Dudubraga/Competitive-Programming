#include <iostream>
#include <string>
using namespace std;

int main(){
    string message;
    while(cin >> message){
        for(int i = 0; i < message.size(); i++){
            if(message[i] == 'A' || message[i] == 'B' || message[i] == 'C'){
                message[i] = '2';
            }
            else if(message[i] == 'D' || message[i] == 'E' || message[i] == 'F'){
                message[i] = '3';
            }
            else if(message[i] == 'G' || message[i] == 'H' || message[i] == 'I'){
                message[i] = '4';
            }
            else if(message[i] == 'J' || message[i] == 'K' || message[i] == 'L'){
                message[i] = '5';
            }
            else if(message[i] == 'M' || message[i] == 'N' || message[i] == 'O'){
                message[i] = '6';
            }
            else if(message[i] == 'P' || message[i] == 'Q' || message[i] == 'R' || message[i] == 'S'){
                message[i] = '7';
            }
            else if(message[i] == 'T' || message[i] == 'U' || message[i] == 'V'){
                message[i] = '8';
            }
            else if(message[i] == 'W' || message[i] == 'X' || message[i] == 'Y' || message[i] == 'Z'){
                message[i] = '9';
            }
        }
        for(int j = 0; j < message.size(); j++){
            if(j == message.size() - 1) cout << message[j] << endl;
            else cout << message[j];
        }
    }

    return 0;
}

/* ENCOTEL - Encontre o telefone
https://br.spoj.com/problems/ENCOTEL/ */