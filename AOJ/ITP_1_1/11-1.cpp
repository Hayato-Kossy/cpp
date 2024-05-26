#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i*j <= 9) {
                cout << " ";
            }
            cout << i * j;
            if (j != 9) {
                cout << " ";
            }
        }
        cout << endl; 
    }
    return 0;
}