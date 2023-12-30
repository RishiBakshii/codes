#include<iostream>
using namespace std;


int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid= s + (e-s)/2;
    
    while(s<=e){
        if(arr[mid]==key){
            return mid;
            break;
        }
        
        else if(arr[mid]>key){
            e=mid-1;
        }
        
        else{
            s=mid+1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return -1;
    
    }

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    
    int arr[]={20,40,70,80,110,170};
    int n=sizeof(arr)/sizeof(int);
    int key=110;
    
    int result=binarySearch(arr,n,key);
    int linearResult=linearSearch(arr,n,key);
    
    cout<<linearResult;
    
    return 0;
    
}
