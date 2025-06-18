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

int product4(int x, int y,int z, int w){//exactly what it says in the name
    return x*y*z*w;
}

int product3(int x, int y, int z){
    return x*y*z;
}

int main(){
    int t[3] = {5, 1, 9};
    cout << sum(t, 3);
    cout << "Hello world!\n";
}