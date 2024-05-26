#include<iostream>
using namespace std;

int calculator() {
    int a, b;
    char op;

    while(true){
        cin >> a >> op >> b;
        if(op == '?') break;
        switch(op){
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
        }
    }

    return 0;
}

int main() {
    calculator();
    return 0;
}