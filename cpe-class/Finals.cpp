#include<iostream>
#include<conio.h>
using namespace std;

// JERWELL SAVELLA
// PCEIT-29-201P
// ORDERING SYSTEM

    class finalExam{
        // GLOBAL VARIABLES
        char gotostart ;
        int choice = 0,pchoice,pchoice1, quantity;// time=40;
        int pay = 0;
        int change = 0;
        
        public:
            void Main(){
                goodnightCoffee();
            } 

                
        private:

            //ASK USER IF THEY WANTED TO CONTINUE THE TRANSACTION
            void askCustomer(){
                cout << "\nTotal Amount: " << choice << endl;
                cout<<"\nWould you like to order anything else? (Y)/(N):";
                cin>>gotostart;
                if(gotostart=='Y' || gotostart=='y'){
                    goodnightCoffee();
                }
                else if (gotostart == 'N' || gotostart=='n'){
                    customerPayment();
                }
                
            }

            //COMPUTES THE PAYMENT FROM THE CUSTOMER
            void customerPayment(){
                do{
                    bill:
                        cout<<"\n\n\tTotal : "<<choice;
                        cout<<"\n\tEnter Received Cash : ";
                            cin >> pay;
                        if (pay < choice){
                                cout << "\n\tYou have insufficient money\n";
                            goto bill;
                        }
                        } 
                        while (pay < choice);
                        change = pay - choice;
                        cout << "\tYour change is : " << change << "\n";
                        cout << "\n\tThank you";
                return;
            }
            
            
            //MAIN FUNCTION 
            void goodnightCoffee(){
                char name[12], burger1[]="Big Mac" ,burger2[]="Medium Mac" ,burger3[]="Small Mac" ,burger4[]="Micro Mac", 
                        dessert1[]="Cheese Cake",dessert2[]="Cinnamon Rolls",dessert3[]="BlueBerry Cheesecake", dessert4[]="Cupcakes";
                char coffee1[]="Americano", coffee2[]="Cappuccino", coffee3[]="Mocha Latte", coffee4[]="Macchiato Latte";
                
                
                beginning:
                system("CLS");
                cout << " =================================== " << endl;
                cout << "\t Goodnight CoffeeShop \t\t\t" << endl;
                cout << " =================================== " << endl;
                cout<<"Please Enter Your Name: ";
                cin.getline(name, 20);
                cout << endl;
                cout <<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

                cout<<"\t ----------Menu----------\n\n";

                cout<<"1) Burgers\n";
                cout<<"2) Desserts\n";
                cout<<"3) Coffee\n";
                cout<<"\nEnter Menu : ";
                cin>>choice;

                cout<<"\n\t ---------Variety--------\n\n";

                //BURGER
                if(choice==1){   
                cout << endl;
                cout <<"1 "<<  burger1  <<"\t PHP. 100"<<"\n";
                cout <<"2 "<<  burger2  <<"\t PHP. 120"<<"\n";
                cout <<"3 "<<  burger3  <<"\t PHP. 150"<<"\n";
                cout <<"4 "<<  burger4  <<"\t PHP. 200"<<"\n";
                cout <<"\nChoose Variety: ";
                cin >> pchoice1;
                if (pchoice1>=1 && pchoice1<=4){
                cout<<"\nPlease Enter Quantity: ";
                cin>>quantity;
                switch(pchoice1){
                    case 1: choice = 100*quantity;
                    break;
                    case 2: choice = 120*quantity;
                    break;
                    case 3: choice = 150*quantity;
                    break;
                    case 4: choice = 200*quantity;
                    break;
                }

                system("CLS");
                 switch (pchoice1){
                    case 1:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << burger1;
                    askCustomer();
                    break;
                    case 2:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << burger2;
                    askCustomer();
                    break;
                    case 3:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << burger3;
                    askCustomer();
                    break;
                    case 4:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << burger4;
                    askCustomer();
                    break;
                }
                
         }
    }

                //DESSERTS
                else if(choice==2){   
                cout << endl;
                cout <<"1 "<<  dessert1  <<"\t\t PHP. 180"<<"\n";
                cout <<"2 "<<  dessert2  <<"\t PHP. 150"<<"\n";
                cout <<"3 "<<  dessert3  <<"\t PHP. 160"<<"\n";
                cout <<"4 "<<  dessert4  <<"\t\t PHP. 130"<<"\n";
                cout <<"\nChoose Variety: ";
                cin >> pchoice1;
                if (pchoice1>=1 && pchoice1<=4){
                cout<<"\nPlease Enter Quantity: ";
                cin>>quantity;
                switch(pchoice1){
                    case 1: choice = 180*quantity;
                    break;
                    case 2: choice = 150*quantity;
                    break;
                    case 3: choice = 160*quantity;
                    break;
                    case 4: choice = 130*quantity;
                    break;
                }

                system("CLS");
                 switch (pchoice1){
                    case 1:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << dessert1;
                    askCustomer();
                    break;
                    case 2:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << dessert2;
                    askCustomer();
                    break;
                    case 3:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << dessert3;
                    askCustomer();
                    break;
                    case 4:
                    cout << "\t\t--------Your Order---------\n";
                    cout << ""<< quantity << " " << dessert4;
                    askCustomer();
                    break;
                 }

        }
    }   
                //COFFEE
                else if(choice==3){
                cout << endl;
                cout <<"1 "<<  coffee1  <<"\t\t PHP. 120"<<"\n";
                cout <<"2 "<<  coffee2  <<"\t\t PHP. 150"<<"\n";
                cout <<"3 "<<  coffee3  <<"\t\t PHP. 170"<<"\n";
                cout <<"4 "<<  coffee4  <<"\t PHP. 200"<<"\n";
                cout <<"\nChoose Variety: ";
                cin >> pchoice1;
                if (pchoice1>=1 && pchoice1<=4){
                    cout<<"\nPlease Enter Quantity: ";
                    cin>>quantity;
                switch(pchoice1){
                    case 1: choice = 120*quantity;
                    break;
                    case 2: choice = 150*quantity;
                    break;
                    case 3: choice = 170*quantity;
                    break;
                    case 4: choice = 200*quantity;
                    break;
                }

                system("CLS");
                    switch (pchoice1){
                        case 1:
                        cout << "\t\t--------Your Order---------\n";
                        cout << ""<< quantity << " " << coffee1;
                        askCustomer();
                        break;
                        case 2:
                        cout << "\t\t--------Your Order---------\n";
                        cout << ""<< quantity << " " << coffee2;
                        askCustomer();
                        break;
                        case 3:
                        cout << "\t\t--------Your Order---------\n";
                        cout << ""<< quantity << " " << coffee3;
                        askCustomer();
                        break;
                        case 4:
                        cout << "\t\t--------Your Order---------\n";
                        cout << ""<< quantity << " " << coffee4;
                        askCustomer();
                        break;
                    }
                        
        }
    }

     getch();
            }

 };
    int main (){
        finalExam coffeeShop;
        coffeeShop.Main();
    }

