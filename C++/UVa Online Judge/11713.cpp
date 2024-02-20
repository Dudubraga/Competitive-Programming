#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string name, copy;
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};
        bool s = false, v = true;
        cin >> name >> copy;
        if(name.size() == copy.size()){ s = true; }
        for(int i = 0; i < name.size(); i++){
            bool consN = true, consC = true;
            for(int j = 0; j < 5; j++){
                if(name[i] == vowels[j]){ consN = false; }
                if(copy[i] == vowels[j]){ consC = false; }
            }
            if(consN){
                if(name[i] != copy[i]){ v = false; }
            }
            if(consC){
                if(copy[i] != name[i]){ v = false; }
            }
        }
        if(s && v){ cout << "Yes" << endl; }
        else{ cout << "No" << endl; }
    }

    return 0;
}

/* 11713 - Abstract Names
https://onlinejudge.org/external/117/11713.pdf */