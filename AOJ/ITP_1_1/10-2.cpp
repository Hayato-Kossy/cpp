#include<iostream>
using namespace std;

int solution(){
    int a, b;
    cin >> a >> b;
    int d, r;
    double f;

    d = a / b;
    r = a % b;
    f = (double)a / b;

    printf("%d %d %.5f\n", d, r, f);
    return 0;
}

int main() {
    solution();
    return 0;
}