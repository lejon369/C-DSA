//volume of sphere formulas v=4/3PIr^3


#include<iostream>
using namespace std;

int main (){
    float r, v;
    const float PI = 3.14159; // Define the value of PI

    cout << "Enter the radius of the sphere: ";
    cin >> r;

    // Calculate the volume of the sphere using the formula V = (4/3) * PI * r^3
    v = (4.0 / 3.0) * PI * r * r * r;

    cout << "The volume of the sphere with radius " << r << " is: " << v << endl;

    return 0;
}