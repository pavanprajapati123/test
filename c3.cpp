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
int main(){
class myclass{
    public:
    void mymethod();
}
};
void myclass :: mymethod(){
    cout<<"hello world";
}
int main(){
    myclass myobj;
    myobj.mymethod();
    return 0;
}
