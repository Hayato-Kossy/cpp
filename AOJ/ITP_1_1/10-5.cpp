#include<iostream>
using namespace std;

int MinAndMaxAndSum(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int min = x;
    int max = x;
    long long sum = x;
    for(int i = 1; i < n; i++){
        cin >> x;
        if(x < min) min = x;
        if(x > max) max = x;
        sum += x;
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}

int main() {
    MinAndMaxAndSum();
    return 0;
}