#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    string brand="ford";
    void honk(){
        cout<<"tut tut!"<<"\n";
}
};
class car:public vehicle{ 
    public:
    string model="mustang";
};
int main(){
    car myCar;
    myCar.honk();
    cout<<myCar.brand+" "+myCar.model;
    return 0;
}















