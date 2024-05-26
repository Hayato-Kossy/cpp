#include<iostream>
using namespace std;

int Watch(){
    int S, h, m, s;
    cin >> S;
    h = S / 3600;
    m = S % 3600 / 60;
    s = S % 60;

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
int main(){
    Watch();
    return 0;
}