#include<iostream>
using namespace std;

int solition(int a, int b){
    (a < b) ? cout << a << " " << b << endl : cout << b << " " << a << endl;
    return 0;
}

int main(){
    int a, b;
    while(true){
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        solition(a, b);
    }
    return 0;
}