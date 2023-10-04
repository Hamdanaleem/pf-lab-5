#include<iostream>
#include<cmath>
using namespace std;
float a, b, c;
void real_roots(float disc);
void equal_roots(float disc);
void imaginary_roots(float disc);

main(){
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of a: ";
    cin>>c;
    float disc=(b*b)-(4*a*c);
    if(disc>0)
    {real_roots(disc);}
    if(disc==0)
    {equal_roots(disc);}
    if(disc<0)
    {imaginary_roots(disc);}

}
void real_roots(float disc)
{
    float one_root, second_root;
    one_root=(-b+sqrt(disc))/(2*a);
    second_root=(-b-sqrt(disc))/(2*a);
    cout<<"Solution: x = "<<one_root<<" and x = "<<second_root;
}
void equal_roots(float disc)
{
    float root;
    root=-b/(2*a);
   
    cout<<"Solution: x = "<<root;
}
void imaginary_roots(float disc)
{
    float one_root1, one_root2, second_root1, second_root2;
    one_root1=-b/(2*a);
    one_root2=sqrt(-disc)/(2*a);
    second_root1=-b/(2*a);
    second_root2=sqrt(-disc)/(2*a);
    cout<<"Solution: x = "<<one_root1<<" + "<<one_root2<<"i and x = "<<second_root1<<" - "<<second_root2<<"i";
}