#include<iostream>
#include<cmath>

using namespace std;

// 5. Average speed = Distance traveled / Time taken (S=D/T)

int main () {
    double dist_trav, time_tkn;
    double Avrg_spd; 

    cout << "Enter Distanced traveled: ";
    cin >> dist_trav;

    cout << "Enter Time taken: ";
    cin >> time_tkn;


    Avrg_spd = (dist_trav / time_tkn); 
    cout << "The Average Speed is: " << Avrg_spd << endl; 

return 0;

}