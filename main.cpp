#include<iostream>
using namespace std;

int sum(int x[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += x[i];
    }
    return s;
}

int diff(int x, int y){
    return x-y;
}

int main(){
    cout << "Hello world!\n";
}