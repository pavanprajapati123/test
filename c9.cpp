#include<iostream>>
using namespace std;
class cars
{
public:
    void startengine(){
        cout<<"engine started "<<endl;

    }
};
class driver
{
public:
    void drive(cars &car){
        car.startengine();
        cout<<"driving the car"<<endl;
    }
};
class driver
{
public:
    void drive(cars &car){
        car.startengine();
        cout<<"driving the car"<<endl;
    }
    };
int main(){
    cars mycar;
    driver d;
    d.drive(mycar);
    
}
inline int add(int a, int b){
    return a+b;
}
int main()
{
    cout<<"sum "<<add(3, 6)<<endl;
    return 0;
}
class myclass {
    int x;
    float y;
    
};
class myclass{
    myclass(){
        x=0;
}
};
int main(){
    myclass obj;
    return 0;
}


