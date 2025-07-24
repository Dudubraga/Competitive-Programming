#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    string a, b;
	while(getline(cin, a) && getline(cin, b)){
		vector<int>vA(26, 0);
		vector<int>vB(26, 0);
		for(int i = 0; i < a.size(); i++){
			vA[a[i] - 'a']++;
		}
		for(int i = 0; i < b.size(); i++){
			vB[b[i] - 'a']++;
		}
		for(int i = 0; i < 26; i++){
			if(vA[i] > 0 && vB[i] > 0){
				int t = min(vA[i], vB[i]);
				for(int j = 0; j < t; j++){
					char c = i+'a';
					cout << c;
				}
			}
		} cout << endl;
	}

    return 0;
}
