#include <iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int array[10]={45, 12, 78, 3, 91, 56, 24, 67, 8, 39};
    int size=10;
    reverseArray(array,size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}