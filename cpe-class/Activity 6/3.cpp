#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
    const int ARRAY_SIZE = 20;
    srand(time(0)); 
    

    string Brady[ARRAY_SIZE] = {"Savella", "Abigail", "Mark", "Joshua", "Rob", "Eddie", "Nick", "Ben", "Loid", "Franky", 
                                "Ian", "Caburong", "Lea", "Elliot", "Nial", "Kian", "Anya", "Bill", "Yor", "Forger"};

    for (int i=1; i < ARRAY_SIZE; i++) {
        int index = rand() % ARRAY_SIZE;

        string temp = Brady[i];
        Brady[i] = Brady[index];
        Brady[index] = temp;
    }

    for (int i=0; i < ARRAY_SIZE; i++) {
        cout << Brady[i] << endl;
    }
    return 0;

}