#include<iostream>
int recursive(int n){
    if(n == 0) return 0;
    return n + recursive(n - 1);
}

int cubic(int n){
    return n * n * n;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << cubic(n) << std::endl;
}