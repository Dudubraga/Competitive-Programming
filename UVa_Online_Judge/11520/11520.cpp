/* Problem statement: https://onlinejudge.org/external/115/11520.pdf */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    for(int c = 0; c < t; c++){
        int size = 0; cin >> size;
        char mat[size][size];
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                char x; 
                cin >> x;
                mat[i][j] = x;
            }
        }
        char letra = 'A';
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(mat[i][j] == '.'){
                    int compfeitas = -1, compOk = 0;
                    while(compfeitas != compOk){
                        compfeitas = 0, compOk = 0;
                        if(j - 1 >= 0){
                            compfeitas++;
                            if(mat[i][j-1] == letra){
                                letra+=1;
                            }else{
                                compOk++;
                            }
                        }
                        if(j + 1 < size){
                            compfeitas++;
                            if(mat[i][j+1] == letra){
                                letra+=1;
                            }else{
                                compOk++;
                            }
                        }
                        if(i - 1 >= 0){
                            compfeitas++;
                            if(mat[i-1][j] == letra){
                                letra+=1;
                            }else{
                                compOk++;
                            }
                        }
                        if(i + 1 < size){
                            compfeitas++;
                            if(mat[i+1][j] == letra){
                                letra+=1;
                            }else{
                                compOk++;
                            }
                        }
                    }
                    mat[i][j] = letra;
                    letra = 'A';
                }
            }
        }
        cout << "Case " << c+1 << ":" << endl;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                cout << mat[i][j];
            }
            cout << endl; 
        }
    }

    return 0;
}
