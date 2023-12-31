#include<iostream>
using namespace std;


class Point{
    private:
        int x;
        int y;
    
    friend void accessPrivate(Point point);

    public:
        Point(int x,int y){
            this->x=x;
            this->y=y;
        }
};

void accessPrivate(Point point){
    cout<<point.x;
    cout<<point.y;
}


int main(){


    Point a(5,10);
    Point b(20,35);

    accessPrivate(a);


    return 0;
}
