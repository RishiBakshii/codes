#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[minIndex]){
                minIndex=j;
                }
        }
        swap(arr[minIndex],arr[i]);
        
        }
        
    }
    

int main(){
    int arr[10]={8030, 377, 520, 6120, 4217, 178, 1854, 3167, 8060, 4107};
    int n=sizeof(arr)/sizeof(int);
    
    selectionSort(arr,n);
    printArr(arr,n);
    
}
