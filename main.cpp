#include<iostream>
using namespace std;

int sum(int x[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += x[i];
    }
    return s;
}

int sum3(int x, int y, int z){
    return x+y+z;
}

int diff(int x, int y){
    return x-y;
}

int product4(int x, int y,int z, int w){
    return x*y*z*w;
}

int product3(int x, int y, int z){
    return x*y*z;
}

int main(){
    int a= 89, b=5, c=1;
    cout << sum3(a, b, c);
    cout << "Hello world!\n";
}