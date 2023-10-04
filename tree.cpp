#include<iostream>
#include<cmath>
using namespace std;
float height(float base_distance, float angle);
main(){
    float base_distance, angle, result ;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>base_distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    result=height(base_distance, angle);
    cout<<"The height of the tree is: "<<result<<" feet";
}
float height(float base_distance, float angle)
{
    float length_of_tree=base_distance*tan(angle/57.2958);
    return length_of_tree;
}