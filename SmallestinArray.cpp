#include <iostream>
using namespace std;
int main(){
    int array[10]={45, 12, 78, 3, 91, 56, 24, 67, 8, 39};
    int smallest=array[0];
    for(int i=0;i<10;i++){
        if(array[i]<smallest){
            smallest=array[i];
        }
    }
    cout<<smallest;
}