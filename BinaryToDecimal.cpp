#include <iostream>
using namespace std;
int DtoB(int DecNum){
    int ans=0 , pow=1;
    while(DecNum>0){
        int rem=DecNum%2;
        DecNum=DecNum/2;
        ans=ans+ (rem*pow);
        pow=pow*10;
    }
    return ans;
}
int BtoD(int BinNum){
    int pow=1;
    int ans=0;
    while(BinNum>0){
        int rem=BinNum%10;
        BinNum=BinNum/10;
        ans=ans+(rem*pow);
        pow=pow*2;
    }
    return ans;

}
int main(){
    // cout<<DtoB(4);
    cout<<BtoD(10110);
}