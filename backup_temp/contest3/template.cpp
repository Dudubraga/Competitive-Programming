#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

vector<vector<int>>tab(8);
void knights(){
    for(int i = 0; i < 8*8; i++){
        if(i-(8*2)-1 >= 0){
            tab[i].pb(i-(8*2)-1); tab[i-(8*2)-1].pb(i);
            tab[i].pb(i-(8*2)+1); tab[i-(8*2)+1].pb(i);
        }
        if(i-(8*1)-2 >= 0){
            tab[i].pb(i-(8*1)-2); tab[i-(8*1)-2].pb(i);
            tab[i].pb(i-(8*1)+2); tab[i-(8*1)+2].pb(i);
        }
        if(i+(8*2)+1 <= 64){
            tab[i].pb(i+(8*2)-1); tab[i+(8*2)-1].pb(i);
            tab[i].pb(i+(8*2)+1); tab[i+(8*2)+1].pb(i);
        }
        if(i+(8*1)-2 <= 64){
            tab[i].pb(i+(8*1)-2); tab[i+(8*1)-2].pb(i);
            tab[i].pb(i+(8*1)+2); tab[i+(8*1)+2].pb(i);
        }
    }
}

int main(){ _
    knights();
    string start, end;
    // while(cin >> start >> end){
    //     int x0 = start[0]-'a'+1; int y0 = start[1]-'0'; 
    //     int x1 = end[0]-'a'+1; int y1 = end[1]-'0'; 
    // }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < tab[i].size(); j++){
            cout << tab[i][j] << " ";
        } cout << endl;
    }

    return 0;
}
