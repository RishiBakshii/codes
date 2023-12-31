#include<iostream>
using namespace std;


bool checkPrime(int n){
    for(int i=2;i<n;i++){

        if(n%i==0){
            return false;
            break;
        }
    }

    return true;
}

int main(){
    
    int n=10;
    bool result=checkPrime(n);

    if(result){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    };

    return 0;
}
