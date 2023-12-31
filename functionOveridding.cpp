#include<iostream>
using namespace std;


class Animal{
    private:
        string name;
    
    public:
        Animal(string name){
            this->name=name;
        };

        virtual void tellSound() const = 0;
};

class Dog: public Animal{
    public:
     Dog(string name) : Animal(name) {}
        void tellSound() const override {
            cout<<"Woof!";
        };
};

class Cat: public Animal{
    public:
    Cat(string name) : Animal(name) {}
        void tellSound() const override{
            cout<<"Meow!";
        };
};

int main(){

    Dog dog1("gabru");
    dog1.tellSound();

    Cat cat1("happy happy");
    cat1.tellSound();

    return 0;
}
