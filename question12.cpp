#include <iostream>

using namespace std;

int main() {
     int age;
     cout<<" Enter the age of person : "<<endl;
     cin>>age;
     if(age<12){
     cout<<" person is child ";
     }
     else if(age>=12&&age<=18)
     {
     cout<<" person is teenager ";
     }
     else if( age>18&&age<60)
     {
     cout<<" Person is  adult";}
     else
     cout<<"Person is  senior ";
     
    return 0;
}
