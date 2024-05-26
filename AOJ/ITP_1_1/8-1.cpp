#include<iostream>
using namespace std;

int SmallorLargeorEqual(){
    int a, b;
    cin >> a >> b;
    if(a == b){
        cout << "a == b" << endl;
    }else{
        (a < b) ? cout << "a < b" << endl : cout << "a > b" << endl;
    }
    return 0;
}

int main(){
    SmallorLargeorEqual();
    return 0;
}