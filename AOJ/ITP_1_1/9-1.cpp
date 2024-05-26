#include<iostream>
using namespace std;

int main(){
    int count = 1;
    while(true){
        int X;
        cin >> X;
        if (X == 0) break;
        cout << "Case "<< count << ": " << X << endl;
        count++;
    }
    return 0;
}