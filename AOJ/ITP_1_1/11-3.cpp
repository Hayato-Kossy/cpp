#include<iostream>
using namespace std;

int PrintFrame(int h, int w){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i == 0 || i == h-1 || j == 0 || j == w-1){
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
        PrintFrame(h,w);
    }
    return 0;
}