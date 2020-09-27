#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include "sellBFC.h"
#include "buyBFC.h"
#include "sellNS.h"
#include "buyNS.h"
#include "sell V.h"
#include "buyV.h"

#include <limits>
using namespace std;
const int ROW= 10;
const int COLUMN= 3;



 double money;//the amount of money that the user enters  
 	int curr;// a varible to choose between currencies
 	
 	
double BFC[][3] ={  // 2d array holding the selling and buying price
    {1.0,4.2000,4.0640},

    {1.0,5.5080,5.2790},
    
    {100,113.9700, 105.1100},

    {100,3.81,3.620},

    {1.0,4.7520,4.5420},
    
    {1.0,3.1010,2.9500},

    {1.0,3.1700,3.070 },

    {100,115.4900,101.3900},

    {1.0,4.173,4.0030},

    {1.0,2.8560,2.6430}
};


//-----------------------------------------------------


double NS[][3] ={  // 2d array holding the selling and buying price
    {1.0,4.30, 4.50},

    {1.0,5.60   , 5.70},
    
    {100, 115.20 , 117.50},

    {100, 4.10  , 4.50},

    {1.0,4.65, 4.74},
    
    {1.0,3.1010,2.9700},

    {1.0,3.1700,3.070 },

    {100,115.4900,102.3900},

    {1.0,4.173,4.2030},

    {1.0,2.900,2.6430}
};



//-----------------------------------------------------



double Vital[][3] ={  // 2d array holding the selling and buying price
    {1.0,4.2000,4.180},

    {1.0,5.175,5.130},
    
    {100,115.100, 104.1100},

    {100,4.6,4.20},

    {1.0,4.640,4.580},
    
    {1.0,3.000,3.015},

    {1.0,3.250,3.150 },

    {100,115.500,101.3900},

    {1.0,4.173,4.0030},

    {1.0,3.015,2.250}
};






//-----------------------------------------------------





	void displayBFC()  // display the 2d array
{
	string NameOfCurrency [ROW]={"1- US",

    "2- POUND",
    
    "3- SR",

    "4- YEN",

    "5- EURO",

    "6- SGD",

    "7- CAND",

    "8- UAE",

    "9- SFE",

    "10- NZD"
};

string  ColumnHeader[4] ={"CURRENCY","UNIT","BUY","SELL"};



cout<<"\n\nBFC Money Exchange Agency:\n\n";

cout<<"\n---------------------------------------\n";


		for (int i =0 ; i < 4 ; i++)
	{
	cout<<setw(12)<<left<<ColumnHeader[i] ;
	}
    cout<<endl ;
   for (int j=0 ; j <ROW ; j++ )
    {
   	  cout<<setw(15) << left <<NameOfCurrency [j]; 
			 
   	for (int s= 0 ; s < COLUMN ; s++  )
   	 {
   	    cout <<setw(10)<<left <<BFC[j][s];
	 }
	  	cout<<endl ;
   }
cout<<"\n---------------------------------------\n";
   return;
}




//-----------------------------------------------------






	void displayNS()  // display the 2d array
{
	string NameOfCurrency [ROW]={"1- US",

    "2- POUND",
    
    "3- SR",

    "4- YEN",

    "5- EURO",

    "6- SGD",

    "7- CAND",

    "8- UAE",

    "9- SFE",

    "10- NZD"
};

string  ColumnHeader[4] ={"CURRENCY","UNIT","BUY","SELL"};



cout<<"\n\nNS Money Exchange Agency:\n\n";
cout<<"\n---------------------------------------\n";

		for (int i =0 ; i < 4 ; i++)
	{
	cout<<setw(12)<<left<<ColumnHeader[i] ;
	}
    cout<<endl ;
   for (int j=0 ; j <ROW ; j++ )
    {
   	  cout<<setw(15) << left <<NameOfCurrency [j]; 
			 
   	for (int s= 0 ; s < COLUMN ; s++  )
   	 {
   	    cout <<setw(10)<<left <<NS[j][s];
	 }
	  	cout<<endl ;
   }
cout<<"\n---------------------------------------\n";
   return;
}






//-----------------------------------------------------






	void displayVital()  // display the 2d array
{
	string NameOfCurrency [ROW]={"1- US",

    "2- POUND",
    
    "3- SR",

    "4- YEN",

    "5- EURO",

    "6- SGD",

    "7- CAND",

    "8- UAE",

    "9- SFE",

    "10- NZD"
};

string  ColumnHeader[4] ={"CURRENCY","UNIT","BUY","SELL"};



cout<<"\n\nVital Money Exchange Agency:\n\n";
cout<<"\n---------------------------------------\n";

		for (int i =0 ; i < 4 ; i++)
	{
	cout<<setw(12)<<left<<ColumnHeader[i] ;
	}
    cout<<endl ;
   for (int j=0 ; j <ROW ; j++ )
    {
   	  cout<<setw(15) << left <<NameOfCurrency [j]; 
			 
   	for (int s= 0 ; s < COLUMN ; s++  )
   	 {
   	    cout <<setw(10)<<left <<Vital[j][s];
	 }
	  	cout<<endl ;
   }
cout<<"\n---------------------------------------\n";
   return;
}




//-----------------------------------------------------




int DisplayAgencies ()
{

     
     int chooseAgency;

   do{
   	
   	cout<<"\n**WE HAVE THREE AGENCIES**\n\n";
    cout <<"1- BFC Agency\n";
    cout<<"-----------\n"
         <<"2- NS  Agency\n";
         cout<<"-----------\n"
         <<"3- Vital Agency\n\n";

    cout<<"choose which agency you want(1,2,3) ?   (*diffrent agency diffrent Exchange Rate*):\n";
     cin>>chooseAgency ;

       if(cin.fail())
        {
         cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"\n\t*****INVALID INPUT PLEASE ENTER (1) OR (2) OR (3) ******\n\n"<<endl;
  
         
        }
         
       
       else if(chooseAgency !=1&&chooseAgency!=2&&chooseAgency!=3)
	   {
	   	 cout<<"\n\n********INVALID INPUT*********\n\n";
	   }


     if (chooseAgency==1)
        	displayBFC(); // display

     else if (chooseAgency==2)
       	displayNS(); // dispay 

     else if (chooseAgency==3)
        displayVital(); // display
    
      
      
    }while(chooseAgency!=1&&chooseAgency!=2&&chooseAgency!=3); 

return chooseAgency;	
}



//----------------------------------------------------




	int ChooseOperation()  // choosing operation (from or to)
{
	 int choose ;
	 do
	 {
	 
	 cout<<"\n\nDO you want:" <<endl;
	 cout<<"1) Sell Ringgit: You are changing From RINGGIT to other Currencies\n\nOR\n"<<endl; 
	 cout<<"2) Buy Ringgit: You are changing From other Currencies To RINGGIT\n   "<<endl;
        cin>>choose;
        if(cin.fail())
        {
         cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"*****INVALID INPUT PLEASE ENTER (1) OR (2)******\n\n"<<endl;
         
         
         cout<<"\n\nDO you want:" <<endl;
	     cout<<"1) Sell Ringgit: You are changing From RINGGIT to other Currencies\n\nOR\n"<<endl; 
	     cout<<"2) Buy Ringgit: You are changing From other Currencies To RINGGIT\n   "<<endl;
         cin>>choose;
         
        }
        
         
        if(choose!=1 && choose!=2)
		{
			cout<<"\n******INVALID INPUT*****\n\n";
		}
        
     }while(choose!=1 && choose!=2);
        return choose;
}


//-----------------------------------------------------


int ChooseCurr()//function for choosing currency
{
	int curr;
	do
	{
	cout<<"\n\n======================================================\n";
	cout<<"\nchoose the currency's number from the table above :";
	

		cin>>curr;
		
		if(cin.fail())
        {
         cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"*****INVALID INPUT PLEASE ENTER BETWEEN (1) AND (10)******\n\n\n"<<endl;
        }
         
		else if(curr>10 || curr<1)
		{
			cout<<"\n\n\n**PLEASE CHOOSE FROM THE NUMBERS IN THE TABLE ABOVE**\n\n\n";
		}
        
    } while(curr>10 ||curr<1);
		return curr;
}


//-----------------------------------------------------


int MoneyAmount ()//function to take the amount of money from the user 
{
	int money;
	do{
		cout<<"\n\n==================================\n";

		cout<<"\n\nEnter The Amount of Money :  ";
		
		

		cin>>money;
		if(money<1)
		{
			cout<<"\n\t **PLEASE ENTER A POSITIVE VALUES**\n\n";
		}
	}while(money<1);
		return money;
}

//------------------------------------------------------------
double CalcForSellBFC();
double CalcForSellNS();
double CalcForSellVital();     // extern file 
double CalcForBuyBFC();
double CalcForBuyNS();
double CalcForBuyVital();
//-------------------------------------------------------------
double CalcForBFC()
{
	int choose;
	double amount;
   	choose=ChooseOperation();//FUNCTION CALL
   	curr=ChooseCurr();//FUNCTION CALL
    money=MoneyAmount ();//FUNCTION CALL
    
    if(choose==1)
		{
		  amount=CalcSellBFC(); //FUNCTION CALL
			
		}
		
		else
		{
			amount=CalcBuyBFC(); //FUNCTION CALL
		}
		
		return amount;
}

//--------------------------------------------



double CalcForNS()
{
	int choose;
	
	double amount;
	
   	choose=ChooseOperation();//FUNCTION CALL
   	curr=ChooseCurr();//FUNCTION CALL
    money=MoneyAmount ();//FUNCTION CALL
    
    if(choose==1)
		{
		  amount=CalcSellNS(); //FUNCTION CALL
			
		}
		
		else
		{
			amount=CalcBuyNS(); //FUNCTION CALL
		}
		
		return amount;
}


//---------------------------------------------------


double CalcForVital()
{
	int choose;
	
	double amount;
	
   	choose=ChooseOperation();//FUNCTION CALL
   	curr=ChooseCurr();//FUNCTION CALL
    money=MoneyAmount ();//FUNCTION CALL
    
    if(choose==1)
		{
		  amount=CalcSellVital(); //FUNCTION CALL
			
		}
		
		else
		{
			amount=CalcBuyVital(); //FUNCTION CALL
		}
		
		return amount;
}

//--------------------------------------------


 	

  
	void display()  // display the 2d array
{
	string NameOfCurrency [ROW]={"1- US",

    "2- POUND",
    
    "3- SR",

    "4- YEN",

    "5- EURO",

    "6- SGD",

    "7- CAND",

    "8- UAE",

    "9- SFE",

    "10- NZD"
};

string  ColumnHeader[4] ={"CURRENCY","UNIT","BUY","SELL"};


		for (int i =0 ; i < 4 ; i++)
	{
	cout<<setw(12)<<left<<ColumnHeader[i] ;
	}
    cout<<endl ;
   for (int j=0 ; j <ROW ; j++ )
    {
   	  cout<<setw(15) << left <<NameOfCurrency [j]; 
			 
   	for (int s= 0 ; s < COLUMN ; s++  )
   	 {
   	    cout <<setw(10)<<left <<BFC[j][s];
	 }
	  	cout<<endl ;
   }

   return;
}
 
	
	

void Search(int *update_ptr) //function for the Admin TO update values
{ 
   int curr;                 // PASSING POINTER 
   

   
   if(*update_ptr==2)
   {
   	  do{
		 cout<<"\n\n==================================\n";
   	  cout<<"\nChoose currency :\n ";
   	  cin>>curr;
   	  
   	  if(cin.fail())
        {
         cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        	cout<<"\n\t**PLEASE CHOOSE FROM THE NUMBERS IN THE TABLE ABOVE**\n\n\n";
  
         
        }
         
         
   	 else if(curr>10 ||curr<1)
		 {
		 	cout<<"\n\t**PLEASE CHOOSE FROM THE NUMBERS IN THE TABLE ABOVE**\n\n\n";
		 }
		 
      }while(curr>10 ||curr<1);
      
      
      
   	  switch(curr)
   	  {
   	  	        case 1:
   	  	        	
   	  	        	cout<<"Enter the new value for the buying price: ";
   	  	        	cin>>BFC[0][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 2:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[1][1];
   	  	        	cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 3:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[2][1];
   	  	        	cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 4:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[3][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 5:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[4][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 6:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[5][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 7:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[6][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 8:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[7][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 9:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[8][1];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
				    break;
				case 10:
					cout<<"Enter the new value for Buying  price: ";
   	  	        	cin>>BFC[9][1];
   	  	        	cout<<"\n**********Value Updated***********\n\n"<<endl;break;
	  }
   }
    
   
   else
   {
   	cout<<"\n\n==================================\n";
   	 cout<<"Choose currency from the table above : ";
   	  cin>>curr;
   	  
   	  switch(curr)
   	  {
   	  	        case 1:
   	  	        	
   	  	        		cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[0][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 2:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[1][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 3:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[2][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 4:
					cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[3][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 5:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[4][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 6:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[5][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 7:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[6][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 8:
						cout<<"Enter the new value for the selling price: ";;
   	  	        	cin>>BFC[7][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
					break;
				case 9:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[8][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
				    break;
				case 10:
						cout<<"Enter the new value for the selling price: ";
   	  	        	cin>>BFC[9][2];
   	  	        		cout<<"\n**********Value Updated***********\n\n"<<endl;break;
   	  	        		
	  }
    
   }
   
   return;
   
} 

//--------------------------------------------


int main ()
{
	int user,Agency,i,update,*update_ptr;
	double amount;
	string username;
	string password;
	char choice;
	
do{
	 cout<<"       ****##**WELCOME TO IIUM MONEY EXCHANGER**##****\n"<<endl;

	cout<<"    --------------------            ----------------------"<<endl;
	cout<<"      | 1)CUSTOMER |                     | 2)ADMIN |"<<endl;
	cout<<"    --------------------            ----------------------\n\n"<<endl;
    cout<<"If you're a CUSTOMER please choose 1 but if you're an ADMIN please choose 2."<<endl;
    
	
	cin>>user;
    cin.ignore();
     
        if(cin.fail())
        {
         cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"\n\t*****INVALID INPUT PLEASE ENTER (1) OR (2)******\n\n\n"<<endl;
  
         
        }
    
   else if(user!=2 && user!=1)
	{
		cout<<"\n***************INVALID INPUT**************\n\n\n\n\n";
	}
    
}while(user!=2 && user!=1);


    if( user==2)
	
	{
		
	  cout << "\n";
			cout << "@###########################################@"<<endl;
			cout << "@^^^ Welcome ADMIN OF BFC EXCHANE AGENCY ^^^@" << std::endl;
			cout << "@###########################################@"<<endl;
			cout << "\n";
			
	do // Admin login 
	{
		cout << "Username : ";
		getline(cin, username);
  
		if (username == "A") 
		{
			cout << "Password : ";
			getline(cin, password);
		}
    
	    if (password != "12345") 
		{
			cout << "\n";
			cout << "@#######################@"<<endl;
			cout << "@^^^ Access Denied!! ^^^@" << std::endl;
			cout << "@#######################@"<<endl;
			cout << "\n";
		 }
   
		else 
		{
			cout << "\n";
			cout << "@########################@"<<endl;
			cout << "@^^^ Access Granted!! ^^^@"<<endl;
			cout << "@########################@"<<endl;
			cout << "\n";
			
		}
		
	}while (password != "12345");
	
	
	do
	{cout << "\n";
			cout << "@###########################################@"<<endl;
			cout << "@^^^ Welcome ADMIN OF BFC EXCHANE AGENCY ^^^@" << std::endl;
			cout << "@###########################################@"<<endl;
			cout << "\n";
	
		
		cout<<endl<<endl;  // there is A MISTAKE HERE
		display();
		do
   {
       cout<<" \n\n\nUpdate Selling price (1)"
       <<"*********** Update Buying price (2):"<<endl;
       cin>>update;
        if(cin.fail())
        {
         cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"*****INVALID INPUT PLEASE ENTER (1) OR (2)******\n\n\n"<<endl;
  
         
        }
         
       
       else if(update!=1&&update!=2)
	   {
	   	 cout<<"\n\n********INVALID INPUT*********\n\n\n\n\n";
	   }
	   
	   update_ptr=&update; //ASSINING THE ADDRESS OF update TO A POINTER
       
   } while(update!=1&&update!=2);
   
   
	 Search(update_ptr) ;  //PASSING A POINTER
	 

	
	cout<<"\nEnter 1 If You Don't Want To Countinue' Or ANY Number To Countinue With The Program : ";
	cin>>i;
    
    
  }while (i!= 1);

}



else{

	
	
	do{
	
	Agency=DisplayAgencies();
	switch(Agency)
	{
		
		case 1:amount=CalcForBFC();break;
		case 2:amount=CalcForNS();break;
		case 3:amount=CalcForVital();   break;     
	}
	cout<<"\n\n==================================\n";
	cout<<"\n\n***MONEY AFTER CHANGING*** "<<endl<<endl
	<<"       "<<amount<<endl<<endl;
		cout<<"\nEnter 1 If You Don't Want To Countinue' Or ANY Number To Countinue With The Program : ";
	cin>>i;
    
    
}while (i!= 1);

  	cout<<"\n\n\n    --------------------"<<endl;
	cout<<"    |****THANK YOU**** |"<<endl;
	cout<<"    --------------------\n\n"<<endl;
}
	return 0;
}
	

