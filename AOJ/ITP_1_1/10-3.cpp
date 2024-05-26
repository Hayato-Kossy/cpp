#include<iostream>
using namespace std;

int circle(){
    double r;
    cin >> r;
    double area = r * r * 3.141592653589;
    double circumference = 2 * r * 3.141592653589;
    printf("%.6f %.6f\n", area, circumference);
    return 0;
}

int main() {
    circle();
    return 0;
}   