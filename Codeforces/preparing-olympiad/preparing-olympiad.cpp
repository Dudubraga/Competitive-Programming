/* Problem statement: https://codeforces.com/problemset/problem/550/B */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, l, r, x, possible = 0;

typedef struct olympiad{
    vector<int>questions;
    bool isEmpty;
    int sum, min, max;
} Olympiad;

void preparing(vector<int>q, Olympiad local, int i){
    if(i == n+1){ return; }
    if(i == n && local.sum >= l && local.sum <= r && (local.max-local.min) >= x){
        possible++;
    }
    preparing(q, local, i+1);
    if(local.isEmpty){
        local.min = q[i];
        local.isEmpty = 0;
    }
    if(q[i] != 0){ local.max = q[i]; }
    local.sum += q[i];
    local.questions.push_back(q[i]);
    preparing(q, local, i+1);
}

int main(){
    cin >> n >> l >> r >> x;
    vector<int>questions;
    for(int i = 0; i < n; i++){
        int j; cin >> j;
        questions.push_back(j);
    }
    sort(questions.begin(), questions.end());
    questions.push_back(0);
    Olympiad q;
    q.isEmpty = 1;
    q.sum = 0; 
    q.min = 1000000000; 
    q.max = 0;
    preparing(questions, q, 0);
    
    cout << possible << endl;

    return 0;
}

