#include<iostream>
using namespace std;

void reverse(int nums[], int n){
    for(int i=0; i<n/2; i++){
        int tmp = nums[i];
        nums[i] = nums[n-i-1];
        nums[n-i-1] = tmp;
    }
}

int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    reverse(nums, n);
    for(int i=0; i<n; i++){
        if (i == n - 1) {
            cout << nums[i] << endl;
        }else{
            cout << nums[i] << " ";
        }
    }
    return 0;
}