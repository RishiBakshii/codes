#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutues;

    public:
        Time(int hours,int minutes){
            this->hours=hours;
            this->minutues=minutes;
        };
        
        // a+b
        // a+b+c+d
        Time operator+(const Time& other) const{
            int totalHours=hours+ other.hours;
            int totalMinutes=minutues+ other.minutues;

            return Time(totalHours,totalMinutes);
        };

        void display() const{
            cout<<this->hours;
            cout<<this->minutues;
        };
};

int main(){

    Time currentTime(5,5);
    Time futureTime(5,5);

    Time resultTime=currentTime+futureTime;

    resultTime.display();

    return 0;
}
