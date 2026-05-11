#include <iostream>
using namespace std;
// int sumdigit(int digit){
//     int sum=0;
// while(digit>0){
//     sum= sum+ (digit%10);
//     digit=digit/10;
// }
//     return sum;
// }


int  fibbonachi(int n){
    int x=0;
    int y=1;
    int z;

    if(n == 0) return x;
    if(n == 1) return y;
    for(int i=2;i<=n;i++){
        z=x+y;
        x=y;
        y=z;
    }

    return z;
}

int main(){
    // cout<<sumdigit(0);
    cout<<fibbonachi(6);
}