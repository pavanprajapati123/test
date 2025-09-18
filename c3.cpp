// #include<iostream>
// using namespace std;
// class test{
//     public:
//     int val;
//     void show (){
//         cout <<"\nvalue is "<<val;

//     }
// };
// int main(){
//     test t1,t2;
//     t1.val=20;
//     t2.val=50;
//     t1.show();
//     t2.show();
//   return 0;
// #include<iostream>
// using namespace std;
// class outer{
//     public:
//     class inner{
//         public:
//         void display(){
//             cout<<"inner class"<<endl;

//         }
//     };
// };

#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    car(){
        brand ="unknown";
        model="unknown";
    }
    car (string b,string m){
        brand=b;
        model=m;
    }
};



int main(){
    car car1;
    car car2("BMW","X5");
   car car3("ford","mustang");
    cout<<"car1:"<<car1.brand<<" "<<car1.model<<"\n";
    cout<<"car2:"<<car2.brand<<" "<<car1.model<<"\n";
    cout<<"car2:"<<car2.brand<<" "<<car1.model<<"\n";
    return 0;
}
