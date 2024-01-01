#include<iostream>
using namespace std;

template <typename t>
class Add{
    private:
        t a;
        t b;

    public:
        Add(t a,t b){
            this->a=a;
            this->b=b;
        }

        void addition(){
            cout<<this->a+this->b;
        };
};

int main(){

    Add<float> sample(5.5,5.5);

    sample.addition();

    return 0;
}
