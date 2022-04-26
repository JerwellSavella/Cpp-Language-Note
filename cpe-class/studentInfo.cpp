#include <iostream>
using namespace std;


int main() { 
	string name, yr, sched, section;
	//input
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter year: ";
	cin>>yr;
	cout<<"Enter the schedule: ";
	cin>>sched;
	cout<<"Enter section: ";
	cin>>section;
	
	//output
	cout<<"Name: " <<name;
	cout<<"\nYear: " <<yr <<" year";
	cout<<"\nSchedule: " <<sched;
	cout<<"\nSection: " <<section;


    return 0;
}