#include <iostream>
using namespace std;

int main(){

    int start_hour, start_minute, finish_hour, finish_minute;
    int start, finish, time, hour, minute;
    cin >> start_hour >> start_minute >> finish_hour >> finish_minute;

    start = (start_hour * 60) + start_minute;
    finish = (finish_hour * 60) + finish_minute;
    time = finish - start;

    if(time > 0){
        hour = time / 60;
        minute = time % 60;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    }
    else if(time <= 0){
        time = 24 * 60 + time;
        hour = time / 60;
        minute = time % 60;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    }

    return 0;
}

/* 1047 - Game Time with Minutes
https://www.beecrowd.com.br/judge/en/problems/view/1047 */