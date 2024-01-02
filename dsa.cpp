#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> & arr, int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void bubbleSort(vector<int> & arr , int n){

    for(int i=1;i<n;i++){

        bool isSwapped=false;

        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                isSwapped=true;
            }
        }

        if(!isSwapped){
            break;
        }
    }

}

void selectionSort(vector<int> & arr, int n){
    
    for(int i=0;i<n-1;i++){

        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        swap(arr[i],arr[minIndex]);
    }
}

void insertionSort(vector<int> & arr, int n){

    for(int i=1;i<n;i++){

        int temp=arr[i];
        int j;

        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            };
        }

        arr[j+1]=temp;
    };
}

void calculateTrace(int arr[][100], int n){
    int trace=0;
    for(int i=0;i<n;i++){
        trace+=arr[i][i];
    };

    cout<<trace;
}

int main(){

    vector<int> vecArray={5,4,3,2,1};
    bubbleSort(vecArray,vecArray.size());
    selectionSort(vecArray,vecArray.size());
    insertionSort(vecArray,vecArray.size());
    // printArray(vecArray,vecArray.size());

    // trace
    int aa[100][100]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    calculateTrace(aa,4);



    return 0;
}
