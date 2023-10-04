#include<iostream>
using namespace std;
void addition(int number_1, int number_2);
main(){
    int number_1, number_2;
    cout<<"Enter number01: ";
    cin>>number_1;
    cout<<"Enter number02: ";
    cin>>number_2;
    addition(number_1, number_2);
}
void addition(int number_1, int number_2)
{
    cout<<"Sum: "<<number_1+number_2;
}