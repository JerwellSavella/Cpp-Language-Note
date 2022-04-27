#include<iostream>
using namespace std;

// 4. Volume of a Sphere ((4/3) πr³)

int main() {
    int rad,vol;
        cout<<"Enter Radius of Sphere : ";
        cin>>rad;
        vol=(4*3.14*rad*rad*rad)/3;
        cout<<"Volume of Sphere = "<<vol;

    return 0;
}


