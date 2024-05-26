#include<iostream>
using namespace std;

int solution(){
    int a, b, c;
    int ans = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b ; i++){
        if (c % i == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}

int main(){
    solution();
    return 0;
}