#include<iostream>
using namespace std;

int PrintRectangle(int h, int w){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << "#";
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
        PrintRectangle(h,w);
    }
    return 0;
}