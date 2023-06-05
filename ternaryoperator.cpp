#include<iostream>
using namespace std;
int main()
{
   int marks;
   cout<<"Enter Marks:";
   cin>>marks;

   if(marks>33){
    cout<<"Pass"<<endl;
   }
   else{
    cout<<"fail"<<endl;
   }


    //ternary Operator
   marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;

   return 0;
}