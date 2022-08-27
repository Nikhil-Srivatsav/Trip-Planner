/*
	So here is my project in this i just tried an way toshow how travelling trips decide and make trips 
	how they give packages suitable for someone depending on his choice
	I have tried my best to explain each and every feature
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define gst(room) ((18*room)/100)    //I have macros defines here
using namespace std;

int display();
void login(int);
void destination();
void bill(int,int,int);
//void rating();


class A
{
public:
int display()
{
	int choice,helpchoice;																			//strating phase of project 
	mainhome:
	cout<<"\t\t\t\t*Welcome to trip planner services*\n";
	cout<<"\t\t\t*Here you will get a list of tour n travel destinations*\n";
	cout<<"\t\t\t\t*What ever be your destionation*\n";
	cout<<"\t\t\t*We are here to help you out making your journey memorable*\n\n\n";
	cout<<"\t-------------------------------------------------------------------------\n";		// asking users choice as per his wish
	cout<<"Enter 1 if you are using our services for first time:\n";
	cout<<"Enter 2 If u wish to log in your account:\n";
	cout<<"Enter 3 If u wish to go t help corner:\n";
		cout<<"Press 1/2/3 as per your choice\n";
	cout<<"Enter your choice:";
	cin>>choice;
	if(choice==1)
	return choice;

else if(choice==2)
{
cout<<"\n\n\n*-------------------*------------------*\n";
cout<<"***Welcome back Thanks for using again***\n";
cout<<"Enter your Email id and password\n";
return choice;
}
else
{
	cout<<"\n\n\n\t\t\t\tWelcome to help Section\n";
	cout<<"I am here to help you out regard any queries\n";
	cout<<"This a trip planninng project.Here you will be getting a complete detail about places you can visit with family and friends\n";
	cout<<"Vacations can be boredom if spentb inside house come to us we will plan a trip for you\n";
	cout<<"Hey so I am your local assist if you still have any query feel free to call:---9650661837\n"; 
	cout<<"Reach out to us mail:-sknikhil2000@gmail.com\n";
	cout<<"Press any *NUMERIC* key to go to booking section or press 0 to exit:";				//asking wether he wants to continue or terminate
	cin>>helpchoice;
	cout<<endl;
	if(helpchoice==0)
	{
	cout<<" ";
	choice=helpchoice;
	return choice;
	}
	else
	{
	cout<<"\t\t\t\tTaking you back to home page\n";			//taking back to home page main page
	getch();
	system("cls");
	choice=helpchoice;
	return choice;
	}
}
}
void login(A ob1)
{
char password[100], userid[100], ch;
int i, j;
system("cls");
cout<<"\n\n\n\t\t\t\tWelcome to login portal\n\n";
cout<<"\nPlease enter your Email id:";
cin>>userid;
cout<<"Please fill up your Password:";
for(i = 0;i < 100;i++)
{
ch = getch();
if(ch == 13)
break;
password[i] = ch;
ch = '*' ;
cout<<ch;
}
cout<<endl;
}

void destination()
{
	int days,choice1,members,choice3,c;
	label1:
	system("cls");
	cout<<"\nEnter what type of place you want to visit:\n1.Cold places of north\t\t\t2.Or Beauty of south\n"; 		//asking where he wants to visit	
	cin>>choice1;
	switch(choice1)
	{
		system("cls");
		case 1:
		{
			system("cls");
			cout<<"\n\t\t\t\t------Welcome to the snow world------";
			cout<<"\nLike all other parts of the world, snowfall in India is synonymous with bewitching sceneries,often seen in wallpapers and calendars.";
			cout<<"\nBut if you really want to experience the same, the best snow season in India is during the winter months of December to February\n";
			cout<<"November and March are beautiful too, but the snow is not as dense as around New Year.";
			cout<<"\nCome join the fun at the best snowfall places in India that are awesome destinations for an exciting family trip,and some adventure with friends.";
			cout<<"\nCheck out our list of top snow places in India.\n";
			cout<<"\nEnter in which hotel would you like to stay\n";
			cout<<"\nDisplaying Hotels:\n";
			label2:
			cout<<"1.krishna resort \t\t 2.Dreamplace resort \t\t 3.Pine n peak resort\n";
			cout<<endl;
			cout<<"Press 1/2/3 as per your choice";
			cout<<"\nEnter your choice:";
			cin>>choice3;
			switch(choice3)
			{
			 case 1:		//telling him about the place a synopsis of place 
			 	{
			 		system("cls");
			 		cout<<"\n\n\n\t\tSo you want to stay at krishna resort.This is in Gulmarg\n";
					cout<<"\n\nTaking you to the Hotel details\n";
			 		cout<<"\nPine trees and sloping roofs covered in snow paint a pretty picture.\nAlso,huge skiing scapes give enough fodder to the adventure freaks to visit this,";
					cout<<"\nTwo of the best places to enjoy snowfall in India.\n";
					cout<<"Average Temperature: 3 Degrees Celsius\n";
					cout<<"Key Attractions: Club Park – the oldest park of Pahalgam; the beautiful Aru Village; Lidder Valley-the camping site; Betaab Valley;";
					cout<<"\nand the beautiful landscapes of Apharwat Peak\n";
					cout<<"Winter Activities And Adventure Sports: Ride in the cable car,Enjoy golf at the Golf Course; and ski to your heart’s content at Krishna Resort.\n";
					cout<<"Nearest Airport: Srinagar Airport, which is 1 hour 40 mins’ drive away from gulmarg. And, over 2 hours’ drive from Pahalgam.\n";
					cout<<"Nearest Railway Station: Jammu Railway Station which is 9 hours and 20 mins’ drive from Gulmarg and 7 hours 30 mins’ drive from Pahalgam.\n";
					cout<<"Must Try Food or Cuisine: Kashmiri Cuisine\n";
					cout<<"Best Time: October to February\n";
					cout<<"\n\nPress a key to book rooms";
					getch();
					cout<<endl;
					cout<<"\nIf member less than 3 we allow single room  \tIf members more than 3 you neeed to have double room\n";
					cout<<"\nCharges for single room Rs.750 \t\t\t Charges for double room Rs.1350";
					cout<<endl;
			 		cout<<"\n\nEnter for how many people you want room:";
			 		cin>>members;
			 		cout<<"For how many days you will have your trip:";
					cin>>days;
					if(members<=2)
					{
					c=750;
					}
					else
					c=1350;
					bill(members,days,c);
			 		break;
				 }
				case 2:
					{
					system("cls");
					cout<<"\n\t\tSo you want to stay at Dreamplace resort.This is in Sonmarg\n";
					cout<<"\n\nTaking you to the Hotel details:\n";
					cout<<"\nThe beautiful town looks breathtaking covered in a snow blanket. Sceneries are awe-inspiring if you take the road route to Sonamarg,";
					cout<<"\nwhich encompasses slopes, valleys,meadows and more.\n";
					cout<<"This definitely makes for it being popular amongst the top places for snowfall in India.\n";
					cout<<"Average Temperature: 0 Degrees Celsius\n";
					cout<<"Key Attractions: The tranquil Gangabal Lake; Yusmarg – a famous picnic spot; Baltal Valley; and the Kheer Bhawani Temple\n";
					cout<<"Winter Activities And Adventure Sports: Visit the Zojila Pass and Thajiwas Glacier; hike through the Satsaran Pass;";
					cout<<"\nwalk through the royal garden of Chasmah-e-shahi\n";
					cout<<"Nearest Airport: Srinagar International Airport, which is 2 hours 20 mins’ drive away\n";
					cout<<"Nearest Railway Station: Srinagar Railway Station which is a 2 hours’ drive from Sonamarg\n";
					cout<<"Must Try Food or Cuisine: Syoon Olav\n";
					cout<<"Best Time: February to May\n";
					cout<<"\nPress a key to book rooms";
					
					getch();
					cout<<endl;
					cout<<"\nIf member less than 3 we allow single room  \tIf members more than 3 you neeed to have double room\n";
					cout<<"\nCharges for single room Rs.850 \t\t\t Charges for double room Rs.1450\n";
					cout<<endl;
			 		cout<<"\n\nEnter for how many people you want room:";
			 		cin>>members;
			 		cout<<"For how many days you will have your trip:";
					cin>>days;
					if(members<=2)
					{
					c=850;
					}
					else
					c=1450;
					bill(members,days,c);
					break;
					}
					
					case 3:
					{
					system("cls");
					cout<<"\n\t\tSo you want to stay at Pine n peak resort.This is in Srinagar........\n";
					cout<<"\nTaking you to the Hotel details\n";
					cout<<"\nThe beautiful town looks breathtaking covered in a snow blanket. Sceneries are awe-inspiring if you take the road route to Srinagar,\n";
					cout<<"which encompasses slopes, valleys,meadows and more.";
					cout<<"\nThis definitely makes for it being popular amongst the top places for snowfall in India.\n";
					cout<<"Average Temperature: 0 Degrees Celsius\n";
					cout<<"Key Attractions: The tranquil Gangabal Lake; Yusmarg – a famous picnic spot; Baltal Valley; and the Kheer Bhawani Temple\n";
					cout<<"Winter Activities And Adventure Sports: Visit the Zojila Pass and Thajiwas Glacier; hike through the Satsaran Pass";
					cout<"\nwalk through the royal garden of Chasmah-e-shahi\n";
					cout<<"Nearest Airport: Srinagar International Airport, which is 2 hours 20 mins’ drive away";
					cout<<"Nearest Railway Station: Srinagar Railway Station which is a 2 hours’ drive from Sonamarg\n";
					cout<<"Must Try Food or Cuisine: Syoon Olav\n";
					cout<<"Best Time: February to May\n";
					cout<<"Press a key to book rooms";
					
					getch();
					cout<<endl;
					cout<<"\nIf member less than 3 we allow single room  \tIf members more than 3 you neeed to have double room\n";
					cout<<"\nCharges for single room Rs.950 \t\t\t Charges for double room Rs.1550\n";
					cout<<endl;
			 		cout<<"\n\nEnter for how many people you want room:";
			 		cin>>members;
			 		cout<<"For how many days you will have your trip:";
					cin>>days;
					if(members<=2)
					{
					c=950;
					}
					else
					c=1550;
					bill(members,days,c);
					break;
					}
					
					
					
				default:
					{
						cout<<"\nEntered choice is not available Taking you to the choice corner again\n";
						cout<<"Enter your choice\n";
						goto label2;
						system("cls");
						break;
					}
			}
			break;
	    }
	    case 2:
	    	{
	    	system("cls");
	    	cout<<"\n\t\t\t\t------Welcome to the Temperate climates------\n";
			cout<<"\t\t\t\tThey are generally defined as environments with moderate rainfall spread across the year.";
			cout<<"\n\t\t\t  Portion of the year with sporadic drought.Mild to warm summers and cool to cold winters world.\n";
			cout<<"\nEnter in which hotel would you like to stay\n";
			cout<<"\nDisplaying Hotels:\n";
			label3:
			cout<<"1.The Park Calangute resort\t\t\t 2.Lemon Tree Amarante Beach\t\t 3.Paradise island n spa\n";
				cout<<"\nPress 1/2/3 as per your choice";
			cout<<"\nEnter your choice:";
			cin>>choice3;
			switch(choice3)
			{
				case 1:
					{
					system("cls");
					cout<<"\n\t\t\t\t\tSo you want to stay at The Park Calangute Resort.This is in GOA.";
					cout<<"\nTaking you to the Hotel details\n";
					cout<<"\nThe Park Calangute is a breathtakingly beautiful luxury beach resorts in Goa.";
					cout<<"\nIt is known for its posh decor and superior settings, besides captivating sceneries created by the beachside.\n";
					cout<<"Be it their sky bar or the magnificent purple pool, The Pak has everything built for a memorable vacation.\n";
					cout<<"What’s Special: A relaxing massage at the Aura Spa, range of cocktails at the Sky Bar and Peace Bar, and romantic cabanas next to the purple pool.\n";
					cout<<"\nPress a key to book rooms";
					getch();
					cout<<endl;
					cout<<"\nIf member less than 3 we allow single room  \tIf members more than 3 you neeed to have double room\n";
					cout<<"\nCharges for single room Rs.1000 \t\t\t Charges for double room Rs.2000";
					cout<<endl;
			 		cout<<"\nEnter for how many people you want room:";
			 		cin>>members;
			 		cout<<"For how many days you will have your trip:";
					cin>>days;
					if(members<=2)
					{
					c=1000;
					}
					else
					c=2000;
					bill(members,days,c);
					break;
					}
				case 2:
					{
					system("cls");
					cout<<"\n\t\t\t\t\tSo you want to stay at Lemon Tree Amarante Beach Resort.This is in NORTH GOA.";
					cout<<"\nTaking you to the Hotel details\n";
					cout<<"\nLemon Tree Amarante Beach resort is a unique 4-star resort with plush design and spacious rooms.";
					cout<<"\nWith a multiple type of resorts built to cater to all types of tourists, the Lemon Tree has something for every one.";
					cout<<"\nIt is located in close proximity to the most happening beaches in North Goa and offers adventurous activities like ";
					cout<<"\njet skiing banana boats, parasailing and more.\n";
					cout<<"Whats Special:1.Rejuvenating Balinese massage offered by the Fresco spa\t\t\t2.gorgeous swimming pool\t 3.Breathtaking sunset cruise with candlelight dinner.\n";
					cout<<"\nPress a key to book rooms";
					getch();
					cout<<endl;
					cout<<"\nIf member less than 3 we allow single room  \tIf members more than 3 you neeed to have double room\n";
					cout<<"\nCharges for single room Rs.1100 \t Charges for double room Rs.2100";
					cout<<endl;
			 		cout<<"\nEnter for how many people you want room:";
			 		cin>>members;
			 		cout<<"For how many days you will have your trip:";
					cin>>days;
					if(members<=2)
					{
					c=1100;
					}
					else
					c=2100;
					bill(members,days,c);
					break;
					}
					case 3:
					{
					system("cls");
					cout<<"\n\t\t\t\t\tSo you want to stay at Paradise island Resort n spa.This is in NORTH GOA......";
					cout<<"\nTaking you to the Hotel details\n";
					cout<<"\nParadise island Resort resort is a unique 4-star resort with plush design and spacious rooms.";
					cout<<"\nWith a multiple type of resorts built to cater to all types of tourists, the Lemon Tree has something for every one.";
					cout<<"\nIt is located in close proximity to the most happening beaches in North Goa and offers adventurous activities like,";
					cout<<" \njet skiing banana boats,\t\t\t parasailing and much more worth to visit.\n";
					cout<<"Whats Special:1.Rejuvenating Balinese massage offered by the Fresco spa\t\t\t2.gorgeous swimming pool\t 3.Breathtaking sunset cruise with candlelight dinner.\n";
					cout<<"\nPress a key to book rooms";
					getch();
					cout<<endl;
					cout<<"\nIf member less than 3 we allow single room  \tIf members more than 3 you neeed to have double room\n";
					cout<<"\nCharges for single room Rs.1200 \t Charges for double room Rs.2200";
					cout<<endl;
			 		cout<<"\nEnter for how many people you want room:";
			 		cin>>members;
			 		cout<<"For how many days you will have your trip:";
					cin>>days;
					if(members<=2)
					{
					c=1200;
					}
					else
					c=2200;
					bill(members,days,c);
					break;
					}
					
					
					
				default:
					{
						cout<<"\nEntered choice is not available Taking you to the choice corner again\n";
						cout<<"Enter your choice\n";
						goto label3;
						system("cls");
						break;
					}
			}
			break;
			}
			default:
				{
				cout<<"\nEntered choice is not available Taking you to the choice corner again\n";
				cout<<"Enter your choice\n";
	     		goto label1;
	     		system("cls");
				break;
				}
	}
}

void bill(int members,int days,int room)
{	
	system("cls");
	double charges1;
	int rating,c=0,c1=0,i,j,k;
	char ch,username[20],number[10],aadhar[12];
	cout<<"Enter your name:";
	cin>>username;
	cout<<endl;
	label4:
	cout<<"\nEnter your mobile number:";
	for(i=0;i<10;i++)
	{
	cin>>ch;
	if(ch == 13)
	break;
	number[i] = ch;

		c++;
	}
	number[i] = '\0';
//	cout<<endl;
	if(c==10)
	cout<<" "<<endl;
	else
	{
	cout<<"Entered mobile number is not correct\n";
	goto label4;
    }
	label5:
	cout<<"Enter your Aadhar number:";
	for(k=0;k<12;k++)
	{
	cin>>ch;
	if(ch == 13)
	break;
	aadhar[k] = ch;
	c1++;
	}
	aadhar[k] = '\0';
	if(c1==12)
	cout<<" "<<endl;
	else
	{
	cout<<"Entered Aadhar  number is not correct";
	goto label5;
    }
	if(members<=2)
	{
	cout<<"\nRoom suitable for you single room cost:Rs"<<room<<" "<<"per day\n";
	charges1=(days*(room+gst(room)));
	cout<<endl;
	cout<<"*-Please press Any key to display bill-*\n";
	getch();
	cout<<endl;
	cout<<"\n-----\t\t\t\t\tFinal bill:\t\t\t\t-----\n\n";
	cout<<"username:"<<username<<endl;
	cout<<"Phone number:";
	for(j = 0;j < i;j++)
	{
	cout<<number[j];
	}
	cout<<endl;
	cout<<"Aadhar number:";
	for(j = 0;j < k;j++)
	{
	cout<<aadhar[j];
	}
	cout<<endl;
	cout<<"Amount to be paid:"<<charges1;
	cout<<endl;
	cout<<"\n\n\nI am here to help you out regard any queries\n";
	cout<<"Hey so I am NIKHIL\n";
	cout<<"If you still have any query feel free to call:---9650661837\n"; 
	cout<<"Reach out to us mail:-sknikhil2000@gmail.com\n";
	cout<<endl;
	cout<<"\n\nPlease rate our services How helpful we were to make your journey happy";
	cout<<"\nYour reviews matters a lot to us....";
	cout<<"\nThanks for visiting site";
	cout<<"\nHave a great journey and tour";	
	cout<<"\nVacations can be boredom if spent inside house come to us we will plan a trip for you.\n";
	cout<<"Feel Free to call us anytime";
	}
	else
	{
	cout<<"\nRoom suitable for you double room cost:Rs"<<room<<" "<<"perday\n";
    charges1=(days*(room+gst(room)));
	cout<<"please press Any key to display bill\n\n\n";
	getch();
	cout<<endl;
	system("cls");
	cout<<"\n\t\t\t\t---------Final bill:---------\n\n\n";
	cout<<"Username:"<<username<<endl;
	cout<<"Phone number:"<<number<<endl;
	cout<<"Aadhar number:"<<aadhar<<endl;
	cout<<"\nAmount to be paid:"<<charges1;
	cout<<endl;
	cout<<"\n\n\nI am here to help you out regard any queries\n";
	cout<<"Hey so I am NIKHIL\n";
	cout<<"If you still have any query feel free to call me:---9650661837\n"; 
	cout<<"Reach out to us mail:-sknikhil2000@gmail.com\n";
	cout<<endl;
	cout<<"\n\nPlease rate our services How helpful we were to make your journey happy";
	cout<<"\nYour reviews matters a lot to us....";
	cout<<"\nThanks for visiting site";
	cout<<"\nHave a great journey and tour";	
	cout<<"\nVacations can be boredom if spent inside house come to us we will plan a trip for you.\n";
	cout<<"Feel Free to call us anytime";
	cout<<endl;
	}
}
/*void rating()
{
int rate=0;
cout<<"Give us rating 1 to 5:-";
cin>>rate;
cout<<"\nThank you for rating us:-"<<rate;
}*/
};

int main()
{
A ob;
int choice,rating=0;
choice=ob.display();
if(choice==0)
	{
	cout<<"Thanks for visiting site";
	cout<<"\n\n\nI am here to help you out regard any queries\n";
	cout<<"Hey so I am NIKHIL\n";
	cout<<"If you still have any query feel free to call me:---9650661837\n"; 
	cout<<"Reach out to us mail:-sknikhil2000@gmail.com\n";
	cout<<endl;
	cout<<"\n\nPlease rate our services How helpful we were to make your journey happy";
	cout<<"\nYour reviews matters a lot to us....";
	cout<<"\nThanks for visiting site";
	cout<<"\nHave a great journey and tour";	
	cout<<"\nVacations can be boredom if spent inside house come to us we will plan a trip for you.\n";
	cout<<"Feel Free to call us anytime";
	cout<<"\n\n\nGive us rating 1 to 5:-";
	cin>>rating;
	cout<<"\nThank you for rating us:-"<<rating;
	exit(1);
}
else
{
system("cls");
ob.display();
ob.login(ob);
ob.destination();	
//ob.rating();
}
return 0;
}
