#include<iostream>
using namespace std;

class Factorial{
    private:
        int number;
    
    public:
        Factorial(int number){
            
            if(number<=0){
                throw invalid_argument("Factorial cant be calcualted for number a negative or 0 number");
            }

            this->number=number;
        };

        int calculate(){
            int fact=1;

            for(int i=number;i>=1;i--){
                fact*=i;
            }
            return fact;
        };

};

int main(){


    try{
        Factorial number(0);
        int result=number.calculate();
        cout<<result;
    }
    catch(const invalid_argument& e){
        cout<<"Error!: "<<e.what();
    }
    

    return 0;
}
