#include<iostream>
using namespace std;


int main(){

    int num1,num2;

    cin>>num1>>num2;

    try{
        if(num2==0){
            throw runtime_error("Divide by 0 error");
        }
        else{
            cout<<num1/num2<<endl;
        }
    }
    catch(const runtime_error& e){
        cout<<"Error! "<<e.what()<<endl;
    }

    cout<<"Program continues";

    return 0;
}
