#include <iostream>
using namespace std;
int linear(int arr[],int size, int target){
        for(int i=0; i<size;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
}
int main(){
    int array[10]={45, 12, 78, 3, 91, 56, 24, 67, 8, 39};
    int size=10;
    int target=4;
    cout<<linear(array,size,target);
}