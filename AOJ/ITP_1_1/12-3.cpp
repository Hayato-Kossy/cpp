#include<iostream>
using namespace std;

int main(){
    int n, b, f, r, v;
    int houses[4][3][10] = {0};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> b >> f >> r >> v;
        houses[b-1][f-1][r-1] += v;
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<10; k++){
                cout << " " << houses[i][j][k];
            }
            cout << endl;
        }
        if(i != 3) cout << "####################" << endl;
    }
    return 0;
}