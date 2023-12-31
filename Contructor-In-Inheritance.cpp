#include<iostream>
using namespace std;


class Person{
    protected:
        string name;
        int age;

    public:
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }; 
};

class Employee: public Person{
    private:
        string company;
        string profile;
        int experience;

    public:
        Employee(string name,int age,string company,string profile,int experience): Person(name,age){
            this->company=company;
            this->profile=profile;
            this->experience=experience;
        };

        void getInfo(){
            cout<<"name "<<this->name<<endl;
            cout<<"age "<<this->age<<endl;
            cout<<"company "<<this->company<<endl;
            cout<<"profile "<<this->profile<<endl;
            cout<<"experience "<<this->experience<<endl;
        };


};


int main(){

    Employee rishi("rishibakshi",19,"Google","full stack developer",2);
    Employee rajdeep("rajdeepSwami",19,"Google","full stack developer",2);

    rishi.getInfo();
    rajdeep.getInfo();

    return 0;
}
