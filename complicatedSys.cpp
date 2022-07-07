#include<iostream>
#include<cstdio>
#include <string>
#include<windows.h>
#include<ctime>
#include <limits>
using namespace std;

void clear();
void cls();
void title();

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

int main()
{
	system("mode 100");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	string username,password;
	int order, additional,menu;
	int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9=0, num10=0, num11=0, num12=0, num13=0, num14=0, num15=0,num_customers,sentinel=0,payment=0,input=0;
	double UnitPrice1= 25.00, UnitPrice2= 25.00,UnitPrice3= 35.00, UnitPrice4= 25.00, UnitPrice5= 30.00, UnitPrice6= 35.00,UnitPrice7= 35.00, UnitPrice8= 40.00, UnitPrice9= 50.00, UnitPrice10= 35.00, UnitPrice11= 13.00, UnitPrice12= 13.00, UnitPrice13= 30.00, UnitPrice14= 17.00, UnitPrice15= 15.00;
	double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0, AmountofSale6=0, AmountofSale7=0, AmountofSale8=0, AmountofSale9=0, AmountofSale10=0, AmountofSale11=0, AmountofSale12=0, AmountofSale13=0, AmountofSale14=0, AmountofSale15=0, total=0,pepay=999999999,change=0;
	
	title();
	for(int a=1;a<8;a++)
		{
			Sleep(300);
			SetConsoleTextAttribute(h, 10);
			cout << "...";
		}
	Sleep(2000);
	cls();
	do
	{
	   login:
	   SetConsoleTextAttribute(h, 14);
	   cout << "\n\t\t\t =================================================" << endl;
	   cout << "\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	   cout << "\n\t\t\t\t       Welcome to Burger Hub";
	   cout << "\n\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	   cout << "\n\t\t\t =================================================" << endl;
	   SetConsoleTextAttribute(h, 15);
	   cout << "\n\n\t\t\t\t      Please Login to Continue" << endl;	
	   cout << "\n\t\t\t\t      User Name: ";
	   cin >> username;
	   
	   if (username == "Jerwell" || username == "Savella" || username == "Esparaguerra") 
	   {
	   	  SetConsoleTextAttribute(h, 15);
	      cout << "\n\t\t\t\t      Password: ";
	      cin >> password;
	      cout<<endl;
	   if (password != "user") 
	   {
	      cls();
	      SetConsoleTextAttribute(h, 12);	
	      cout << "\n\t\t\t\tInvalid password. Try again." <<endl;
	      SetConsoleTextAttribute(h, 15);
	   }
	} 
	else 
	{
	   cls();
	   SetConsoleTextAttribute(h, 12);	
	   cout << "\n\t\t\t\tInvalid username. Try again." <<endl;
	   SetConsoleTextAttribute(h, 15);
	}
	
	if(password == "user")
	{
	cls();	
		
        orderniyo:
        Sleep(500);
        cls();
        SetConsoleTextAttribute(h, 10);
		cout<<"\n\n\t\t\t\t=====>>>>PICK YOUR ORDER<<<<=====\n\n";
		SetConsoleTextAttribute(h, 14);
 		cout<<"\t\t=====================================================================\n";
 		SetConsoleTextAttribute(h, 15);
 		cout<<"\t\t\t  PRODUCT NUMBER\tPRODUCT\t\t\tPRICE\n";
 		SetConsoleTextAttribute(h, 14);
		cout<<"\t\t=====================================================================\n";
		SetConsoleTextAttribute(h, 15);
        cout<<"\t\t\t         1\t    Hamburger\t\t\tPhp 25.00\n";
        cout<<"\t\t\t         2\t    Egg Sandwich\t\tPhp 25.00\n";
        cout<<"\t\t\t         3\t    Bacon and Cheese Burger\tPhp 35.00\n";
        cout<<"\t\t\t         4\t    Cheese Burger\t\tPhp 25.00\n";
        cout<<"\t\t\t         5\t    Double Cheese Burger\tPhp 30.00\n";
  		cout<<"\t\t\t         6\t    Crispy Chicken Sandwich\tPhp 35.00\n";
  		cout<<"\t\t\t         7\t    Spicy Chicken Sandwich\tPhp 35.00\n";
  		cout<<"\t\t\t         8\t    Onion Rings\t\t\tPhp 40.00\n";
  		cout<<"\t\t\t         9\t    Chicken Nuggets\t\tPhp 50.00\n";
  		cout<<"\t\t\t         10\t    French Fries\t\tPhp 35.00\n";
  		cout<<"\t\t\t         11\t    Royal\t\t\tPhp 13.00\n";
  		cout<<"\t\t\t         12\t    Sprite\t\t\tPhp 13.00\n";
  		cout<<"\t\t\t         13\t    Pineapple Juice\t\tPhp 30.00\n";
  		cout<<"\t\t\t         14\t    Coke\t\t\tPhp 17.00\n";
  		cout<<"\t\t\t         15\t    Water\t\t\tPhp 15.00\n";
  		SetConsoleTextAttribute(h, 14);
		cout<<"\t\t=====================================================================\n";
		cout<<"\t\t=====================================================================\n";
			
		selectingorder:
		SetConsoleTextAttribute(h, 15);
    	cout<<"\n\n\t\tSelect your order: ";
    	cin>>order;
    	if(order == 1)
		{
			a:
    		cout<<"\t\tHow many Hamburger would you like to order: ";
            cin>>num1;
            if(num1==0){
            	goto a;
			}
            AmountofSale1 = UnitPrice1 * num1;
		}
		else if(order == 2)
		{
			b:
			cout<<"\t\tHow many Egg Sandwich would you like to order: ";
     		cin>>num2;
     		 if(num2==0){
            	goto b;
			}
            AmountofSale2= UnitPrice2 * num2;
		}
		else if(order == 3)
		{
			c:
			cout<<"\t\tHow many Bacon and Cheese Burger would you like to order: ";
            cin>>num3;
			if(num3==0){
            	goto c;
			}              
            AmountofSale3= UnitPrice3 * num3;
		}
		else if(order == 4)
		{
			d:
			cout<<"\t\tHow many Cheese Burger would you like to order: ";
            cin>>num4;
            if(num4==0){
            	goto d;
			}
            AmountofSale4= UnitPrice4 * num4;
		}
		else if(order == 5)
		{
			e:
			cout<<"\t\tHow many Double Cheese Burger would you like to order: ";
            cin>>num5;
			if(num5==0){
            	goto e;
			}              
            AmountofSale5= UnitPrice5 * num5;
		}
		else if(order == 6)
		{
			f:
			cout<<"\t\tHow many Crispy Chicken Sandwich would you like to order: ";
            cin>>num6;
			if(num6==0){
            	goto f;
			}              
            AmountofSale6= UnitPrice6 * num6;
		}
		else if(order == 7)
		{
			g:
			cout<<"\t\tHow many Spicy Chicken Sandwich would you like to order: ";
            cin>>num7;
			if(num7==0){
            	goto g;
			}              
            AmountofSale7= UnitPrice7 * num7;
		}
		else if(order == 8)
		{
			h:
			cout<<"\t\tHow many Onion Rings would you like to order: ";
            cin>>num8;
			if(num8==0){
            	goto h;
			}              
            AmountofSale8= UnitPrice8 * num8;
		}
		else if(order == 9)
		{
			i:
			cout<<"\t\tHow many Chicken Nuggets would you like to order: ";
            cin>>num9;
			if(num9==0){
            	goto i;
			}              
            AmountofSale9= UnitPrice9 * num9;
		}
		else if(order == 10)
		{
			j:
			cout<<"\t\tHow many French Fries would you like to order: ";
            cin>>num10;
			if(num10==0){
            	goto j;
			}              
            AmountofSale10= UnitPrice10 * num10;
		}
		else if(order == 11)
		{
			k:
			cout<<"\t\tHow many Royal would you like to order: ";
            cin>>num11;
			if(num11==0){
            	goto k;
			}              
            AmountofSale11= UnitPrice11 * num11;
		}
		else if(order == 12)
		{
			l:
			cout<<"\t\tHow many Sprite would you like to order: ";
            cin>>num12;
			if(num12==0){
            	goto l;
			}              
            AmountofSale12= UnitPrice12 * num12;
		}
		else if(order == 13)
		{
			m:
			cout<<"\t\tHow many Pineapple juice would you like to order: ";
            cin>>num13;
			if(num13==0){
            	goto m;
			}              
            AmountofSale13= UnitPrice13 * num13;
		}
		else if(order == 14)
		{
			n:
			cout<<"\t\tHow many Coke would you like to order: ";
            cin>>num14;
			if(num14==0){
            	goto n;
			}              
            AmountofSale14= UnitPrice14 * num14;
		}
		else if(order == 15)
		{
			o:
			cout<<"\t\tHow many Water would you like to order: ";
            cin>>num15;
			if(num15==0){
            	goto o;
			}              
            AmountofSale15= UnitPrice15 * num15;
		}
		else {
			SetConsoleTextAttribute(h, 12);	
			cout<<"\n\t\t\t\t\tPlease Enter a Valid Number!";
			clear();
	        goto orderniyo;
		}
		
		add:	
		SetConsoleTextAttribute(h, 15);
		cout<<"\t\tDo you want to add more? [ 0 ] no [ 1 ] yes: ";
		cin >> additional;
   		if(additional==1)
  		{
  			goto orderniyo;
 	    }
 	    else if(additional==0){
        cout<<fixed;
  		cout.precision(2);
 		
 		SetConsoleTextAttribute(h, 14);
        cout<<"\n\n\n\t\tYou have ordered\n";
        SetConsoleTextAttribute(h, 15);
        cout<<"\t\tProduct Name\t\tQuantity\tPrice\t\tTotal\n";
        if (num1 != 0)
        {
            cout<<"\t\tHamburger\t\t    "<<num1<<"\t\tPhp "<<UnitPrice1<<"\tPhp "<<AmountofSale1<<"\n";
        }
        if (num2 != 0)
        {
            cout<<"\t\tEgg Sandwich\t\t    "<<num2<<"\t\tPhp "<<UnitPrice2<<"\tPhp "<<AmountofSale2<<"\n";
        }
        if (num3 != 0)
        {
            cout<<"\t\tBacon and Cheese Burger\t    "<<num3<<"\t\tPhp "<<UnitPrice3<<"\tPhp "<<AmountofSale3<<"\n";
        }
        if (num4 != 0)
        {
            cout<<"\t\tCheese Burger\t\t    "<<num4<<"\t\tPhp "<<UnitPrice4<<"\tPhp "<<AmountofSale4<<"\n";
        }
        if (num5 != 0)
        {
            cout<<"\t\tDouble Cheese Burger\t    "<<num5<<"\t\tPhp "<<UnitPrice5<<"\tPhp "<<AmountofSale5<<"\n";
        }
        if (num6 != 0)
        {
            cout<<"\t\tCrispy Chicken Sandwich     "<<num6<<"\t\tPhp "<<UnitPrice6<<"\tPhp "<<AmountofSale6<<"\n";
        }
        if (num7 != 0)
        {
            cout<<"\t\tSpicy Chicken Sandwich\t    "<<num7<<"\t\tPhp "<<UnitPrice7<<"\tPhp "<<AmountofSale7<<"\n";
        }
        if (num8 != 0)
        {
            cout<<"\t\tOnion Rings\t\t    "<<num8<<"\t\tPhp "<<UnitPrice8<<"\tPhp "<<AmountofSale8<<"\n";
        }
        if (num9 != 0)
        {
            cout<<"\t\tChicken Nuggets\t\t    "<<num9<<"\t\tPhp "<<UnitPrice9<<"\tPhp "<<AmountofSale9<<"\n";
        }
        if (num10 != 0)
        {
            cout<<"\t\tFrench Fries\t\t    "<<num10<<"\t\tPhp "<<UnitPrice10<<"\tPhp "<<AmountofSale10<<"\n";
        }
        if (num11 != 0)
        {
            cout<<"\t\tRoyal\t\t\t    "<<num11<<"\t\tPhp "<<UnitPrice11<<"\tPhp "<<AmountofSale11<<"\n";
        }
        if (num12 != 0)
        {
            cout<<"\t\tSprite\t\t\t    "<<num12<<"\t\tPhp "<<UnitPrice12<<"\tPhp "<<AmountofSale12<<"\n";
        }
        if (num13 != 0)
        {
            cout<<"\t\tPineapple Juice\t\t    "<<num13<<"\t\tPhp "<<UnitPrice13<<"\tPhp "<<AmountofSale13<<"\n";
        }
        if (num14 != 0)
        {
            cout<<"\t\tCoke\t\t\t    "<<num14<<"\t\tPhp "<<UnitPrice14<<"\tPhp "<<AmountofSale14<<"\n";
        }
        if (num15 != 0)
        {
            cout<<"\t\tWater\t\t\t    "<<num15<<"\t\tPhp "<<UnitPrice15<<"\tPhp "<<AmountofSale15<<"\n";
        }
  
        
        cout<<"\t\t------------------------------------------------------------------";
        total=0;
        total=total+AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4+AmountofSale5+AmountofSale6+AmountofSale7+AmountofSale8+AmountofSale9+AmountofSale10+AmountofSale11+AmountofSale12+AmountofSale13+AmountofSale14+AmountofSale15;
        SetConsoleTextAttribute(h, 10);
        cout<<"\n\t\tTotal:\t\t\t\t\t\t\t"<<"Php "<<total;
        }
        else
		{
			clear();
	        goto add;
		}

		SetConsoleTextAttribute(h, 15);
		cout<<"\n\n\n\t\t\t\t\tGENERATING BILL ";
   		for(int a=1;a<8;a++)
		{
			Sleep(300);
			cout << "...";
		}
   		cout<<"\n\t\t";
   		system("PAUSE");
   		
   		do
        {
       	   bill:
       	   Sleep(500);	
           cls();
           SetConsoleTextAttribute(h, 14);
           cout<<"\n\t\t       *******************************************************\n";
           cout<<"\t\t       %%%%%%%%%%%%%%%%%%        Bill        %%%%%%%%%%%%%%%%%\n";
           cout<<"\t\t       *******************************************************\n";
        
            SetConsoleTextAttribute(h, 15);
            cout<<"\n\n\tTotal : "<<total;
            cout<<"\n\tEnter Received Cash : ";
            cin >> pepay;
           if (pepay < total)
           {
  	            SetConsoleTextAttribute(h, 12);
                cout<<"\n\t\t\tYou have insufficient money\n";
                clear();
               goto bill;
           }
        } 
        while (pepay < total);
        change = pepay - total;
        cout<<"\tYour change is : "<<change<<"\n\n\n\n\t\t";
   		
   		system("PAUSE");
   				
			cls();
			SetConsoleTextAttribute(h,14);
			cout<<"\t\t\t\t\t   ------------         \n";
			cout<<"\t\t\t\t\t /%%%%%%%%%%%%%%\\      \n";
			cout<<"\t\t\t\t\t/%%%%%%%%%%%%%%%%\\     \n";
			SetConsoleTextAttribute(h,12);
			cout<<"\t\t\t\t\t\\wwwwwwwwwwwwwwww/    \n";
			SetConsoleTextAttribute(h,10);
			cout<<"\t\t\t\t\t <%%%%%%%%%%%%%%>     \n";
			SetConsoleTextAttribute(h,4);
			cout<<"\t\t\t\t\t (%%%%%%%%%%%%%%)     \n";
			SetConsoleTextAttribute(h,14);
			cout<<"\t\t\t\t\t/%%%%%%%%%%%%%%%%\\    \n";
			cout<<"\t\t\t\t\t\\%%%%%%%%%%%%%%%%/    \n";
			cout<<"\t\t\t\t\t \\%%%%%%%%%%%%%%/       \n";
			cout<<"\t\t\t\t\t   ------------         \n";
			
			SetConsoleTextAttribute(h,15);
			cout<<"\t\t\t------------------------------------------------\n";
			cout<<"\t\t\t\t\t    BURGER HUB"<<endl;
			cout<<"\t\t\t    938 AURORA BLVD, CUBAO, QUEZON CITY 1109"<<endl;
			cout<<"\t\t\t\t\tCONTACT NO. 09293450139"<<endl;
			cout<<"\n\t\t\t\t\t   ORDER NO.18"<<endl;
			cout<<"\n\t\t\t\tCASHIER: Borbs"<<endl;
			std::cout <<"\t\t\t\t"<< currentDateTime() << std::endl;
    		getchar();
			if (num1 != 0)
           {
                cout<<"\t\t\t\t"<<num1<<"  "<<"HAMBURGER\t\t\t"<<AmountofSale1<<"\n";
           }
           if (num2 != 0)
           {
                cout<<"\t\t\t\t"<<num2<<"  "<<"EGG SANDWICH\t\t\t"<<AmountofSale2<<"\n";
           }
           if (num3 != 0)
           {
                cout<<"\t\t\t\t"<<num3<<"  "<<"BACON AND CHEESE BURGER\t"<<AmountofSale3<<"\n";
           }
           if (num4 != 0)
           {
                cout<<"\t\t\t\t"<<num4<<"  "<<"CHEESE BURGER\t\t"<<AmountofSale4<<"\n";
           }
           if (num5 != 0)
           {
                cout<<"\t\t\t\t"<<num5<<"  "<<"DOUBLE CHEESE BURGER\t\t"<<AmountofSale5<<"\n";
           }
           if (num6 != 0)
           {
                cout<<"\t\t\t\t"<<num6<<"  "<<"CRISPY CHICKEN SANDWICH\t"<<AmountofSale6<<"\n";
           }
           if (num7 != 0)
           {
                cout<<"\t\t\t\t"<<num7<<"  "<<"SPICY CHICKEN SANDWICH\t"<<AmountofSale7<<"\n";
           }
           if (num8 != 0)
           {
                cout<<"\t\t\t\t"<<num8<<"  "<<"ONION RINGS\t\t\t"<<AmountofSale8<<"\n";
           }
           if (num9 != 0)
           {
                cout<<"\t\t\t\t"<<num9<<"  "<<"CHICKEN NUGGETS\t\t"<<AmountofSale9<<"\n";
           }
           if (num10 != 0)
           {
                cout<<"\t\t\t\t"<<num10<<"  "<<"FRENCH FRIES\t\t\t"<<AmountofSale10<<"\n";
           }
           if (num11 != 0)
           {
                cout<<"\t\t\t\t"<<num11<<"  "<<"ROYAL\t\t\t"<<AmountofSale11<<"\n";
           }
           if (num12 != 0)
           {
                cout<<"\t\t\t\t"<<num12<<"  "<<"SPRITE\t\t\t"<<AmountofSale12<<"\n";
           }
           if (num13 != 0)
           {
                cout<<"\t\t\t\t"<<num13<<"  "<<"PINEAPPLE JUICE\t\t"<<AmountofSale13<<"\n";
           }
           if (num14 != 0)
           {
                cout<<"\t\t\t\t"<<num14<<"  "<<"COKE\t\t\t\t"<<AmountofSale14<<"\n";
           }
           if (num15 != 0)
           {
                cout<<"\t\t\t\t"<<num15<<"  "<<"WATER\t\t\t"<<AmountofSale15<<"\n";
           }
        cout<<"\t\t\t\t\t\t\t\t_____\n";
        cout<<"\t\t\t\t\t          TOTAL........."<<total<<endl;
        cout<<"\t\t\t\t\t          CASH.........."<<pepay<<endl;
        cout<<"\t\t\t\t\t          CHANGE........"<<change<<endl;
        cout<<"\n\t\t\t------------------------------------------------"<<endl;
		cout<<"\n\t\t\t\t   THIS RECEIPT SHALL BE VALID"<<endl;
		cout<<"\n\t\t\t\tFOR FIVE(5) YEARS FROM THE DATE OF"<<endl;
        cout<<"\n\t\t\t\t\tTHE PERMIT TO USE"<<endl;
        
        system("PAUSE");  
        cls();
        title();
        SetConsoleTextAttribute(h, 14);
        cout<<"\n\t\t===================================================================";
	    cout<<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	    cout << "\n\t\t\t\t      Thank You See You Again!";
	    cout<<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
        cout<<"\n\t\t==================================================================="<<endl;
        SetConsoleTextAttribute(h, 15);
		
		return 0;			
		}
		}

	while (password != "user");		
    return 0;		
}

void title(){

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int i;
	SetConsoleTextAttribute(h,14);
	cout<<"\n\n\n\n";
	cout<<"\t\t    ********    **    **   ********    ******     *******   ******** \n";
 	cout<<"\t\t   /**    **   /**   /**  /**    **  /**    **   /**       /**    ** \n";
 	cout<<"\t\t   /*********  /**   /**  /********  /**   ****  /******   /******** \n";
 	SetConsoleTextAttribute(h,12);
 	cout<<"\t\t   /**     **  /**   /**  /**  /**   /**    **   /**       /**  /**  \n";
 	cout<<"\t\t   /*********  //******   /**  //**  //******    /*******  /**  //** \n";
 	cout<<"\t\t   /////////    //////    //    //    //////     ///////   //    //\n\n\n";
 
	SetConsoleTextAttribute(h,14);
	cout<<"\t\t          ------------       \n";
	cout<<"\t\t        /%%%%%%%%%%%%%%\\      \n";
	cout<<"\t\t       /%%%%%%%%%%%%%%%%\\     ";
	SetConsoleTextAttribute(h,14);
	cout<<"**    **   **    **   ********\n";
	SetConsoleTextAttribute(h,12);
	cout<<"\t\t       \\wwwwwwwwwwwwwwww/    ";
	SetConsoleTextAttribute(h,14);
	cout<<"/**   /**  /**   /**  /**    **          \n";
	SetConsoleTextAttribute(h,10);
	cout<<"\t\t        <%%%%%%%%%%%%%%>     ";
	SetConsoleTextAttribute(h, 14);
	cout<<"/********  /**   /**  /*********      \n";
	SetConsoleTextAttribute(h,4);
	cout<<"\t\t        (%%%%%%%%%%%%%%)     ";
	SetConsoleTextAttribute(h,12);
	cout<<"/**   /**  /**   /**  /**     **          \n";
	SetConsoleTextAttribute(h,14);
	cout<<"\t\t       /%%%%%%%%%%%%%%%%\\    ";
	SetConsoleTextAttribute(h, 12);
	cout<<"/**   /**  //******   /*********    \n";
	SetConsoleTextAttribute(h, 14);
	cout<<"\t\t       \\%%%%%%%%%%%%%%%%/    ";
	SetConsoleTextAttribute(h, 12);
	cout<<"//    //    //////    /////////  \n";
	SetConsoleTextAttribute(h, 14);
	cout<<"\t\t        \\%%%%%%%%%%%%%%/        \n";
	cout<<"\t\t          ------------         \n\n";
	cout<<"\t\t\t\t      ";
}

void clear(){
	cin.clear();
	cin.ignore(100,'\n');
}
void cls(){
	system("cls");
}	