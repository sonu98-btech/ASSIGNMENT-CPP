#include<iostream>
using namespace std;
int main()
{
    float cpperdozen,spperdozen;
    cout<<"Enter the cost price of banana of per dozen : ";
    cin>>cpperdozen;
    cout<<"Enter the selling price of banana of per dozen : ";
    cin>>spperdozen;
    float cp_per_piece, sp_per_piece;
    cp_per_piece = cpperdozen/12;
    sp_per_piece = spperdozen/12;
    float cp =cp_per_piece*25;
    float sp =sp_per_piece*25;
    cout<<" cost price of 25 bananas is : "<<cp<<endl;
    cout<<" selling price of 25 banana is : "<<sp<<endl;
    if(sp>cp){
        cout<<" profit earned of  "<<sp-cp<<" rupees"<<endl;
    }
    else if(sp>cp){
        cout<<"loss accur of "<<cp-sp<<" rupees"<<endl;
    }
    else 
    cout<<" no loss no profit";
    return 0;


}