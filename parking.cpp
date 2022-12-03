//SMALL PROJECT
//PARKING MANAGEMENT SYSTEM USING C++


//Declaration of the Header file
#include<iostream>
//#include<conio.h>
using namespace std;

// Declaration of global variables
int nor=0, nob=0, noc=0, amount=200, count=0,b;
int ch;

//global funcions
int menu();
void bus();
void car();
void riksha();
void show_details();
void delete_all();

//main function
int main()
{
	do{

//	clrscr();
		switch(menu())
		{
		case 1: bus();
				break;
		case 2: car();
				break;
		case 3: riksha();
				break;
		case 4: show_details();
				break;
		case 5: delete_all();
				break;
		//default: cout<<"SELECTED WRONG CHOICE!!!"<<endl;
		}
    cout<<"TO ADD MORE VEHICLE DETAILS PLEASE ENTER 0 OR ANY NUMBER TO EXIT"<<endl;
	cout<<"ENETR YOUR CHOICE=";
	cin>>b;
	}while(b==0);
	cout<<"THANK YOU PLEASE VISIT AGAIN"<<endl;
	//getch();
	return 0 ;
}

int menu()
{
cout<<"**************************************"<<endl;
cout<<"PRESS 1 FOR BUS CHARGES IS 100 INR"<<endl;
cout<<"PRESS 2 FOR CAR CHARGES IS 70 INR"<<endl;
cout<<"PRESS 3 FOR RIKSHA CHARGES IS 30 INR"<<endl;
cout<<"PRESS 4 TO SEE THE ENTERED RECORDS"<<endl;
cout<<"PRESS 5 TO DELETE ALL THE RECORDS"<<endl;
cout<<"PRESS 6 TO EXIT"<<endl;
cout<<"**************************************"<<endl;
cout<<"PLEASE ENTER YOUR CHOICE=";
cin>>ch;
return ch;
}

void bus()
{
	nob++;
	amount=amount+100;
	count++;
}
void car()
{
	noc++;
	amount=amount+70;
	count++;	
}
void riksha()
{
	nor++;
	amount=amount+30;
	count++;
}

void show_details()
{
	cout<<"**********************************"<<endl;
	cout<<"TOTAL NUMBER OF BUSES ="<<nob<<endl;
	cout<<"TOTAL NUMBER OF CAR ="<<noc<<endl;
	cout<<"TOTAL NUMBER OF RIKSHA ="<<nor<<endl;
	cout<<"TOTAL NUMBER OF VEHICALS ="<<count<<endl;
	cout<<"TOTAL COLLECTION OF PARKING AMOUNT="<<amount<<endl;
	cout<<"**********************************"<<endl;		
}
void delete_all()
{
	nob=noc=nor=0;
	amount=0;
	count=0;
	
}


