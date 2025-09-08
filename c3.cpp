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
#include<iostream>
using namespace std;
class outer{
    public:
    class inner{
        public:
        void display(){
            cout<<"inner class"<<endl;

        }
    };
};

int main()
{
 outer::inner c2;
 c2.display();
    return 0;


}