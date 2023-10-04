#include<iostream>
#include<cmath>
using namespace std;
main(){
    float number_1, number_2;
    cout<<"Enter the base number: ";
    cin>>number_1;
    cout<<"Enter the exponent: ";
    cin>>number_2;
    cout<<number_1<<" raised to the power "<<number_2<<" is: "<<pow(number_1,number_2);
}