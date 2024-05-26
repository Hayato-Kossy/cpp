#include<iostream>
using namespace std;

int PrintChessboard(int h, int w){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if((i+j)%2 == 0){
                cout << "#";
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int main() {
    int h, w;
    while(true){
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        PrintChessboard(h,w);
    }
    return 0;
}