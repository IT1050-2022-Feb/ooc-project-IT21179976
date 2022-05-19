#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"

class Home:public Property{
	private:
		int rooms;
	public:
	    Home();
		Home(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10],int rm);
		void setDetails();
		void updateDetails();
		void removeDetails();
		void displayDetails();
		~Home();	
};

