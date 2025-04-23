#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

bool sortVal(const pair<char, int>&a, const pair<char, int>&b){
    return (a.second > b.second);
}
bool sortLet(const pair<char, int>&a, const pair<char, int>&b){
    return (a.first < b.first);
}

int main(){
    int t;
    string str;
    map<char, int>L;
    cin >> t;
    getline(cin, str);
    for(int i = 0; i < t; i++){
        getline(cin, str);
        int size = str.size();
        for(int j = 0; j < size; j++){
            char c = str[j];
            if(c >= 97 && c <= 122){ c -= 32; }
            L[c] += 1;
        }
    }
    vector<pair<char, int>>v;
    map<char, int>::iterator itr;
    for(itr = L.begin(); itr != L.end(); itr++){
        v.push_back(make_pair(itr->first, itr->second));
    }
    sort(v.begin(), v.end(), sortVal);
    vector<pair<char, int>>::iterator start;
    vector<pair<char, int>>::iterator end;
    int s = 0, e = 0;
    for(start = v.begin(); start != v.end(); start++){
        e = s;
        end = start; 
        while(end->second == start->second){ end++; e++; }
        sort(v.begin()+s, v.begin()+e, sortLet);
        s++;
    }
    for(int j = 0; j < v.size(); j++){
        if(v[j].first >= 65 && v[j].first <= 90){
            cout << v[j].first << " " << v[j].second << endl;
        }
    }

    return 0;
}

