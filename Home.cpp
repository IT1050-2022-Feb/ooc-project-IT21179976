#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#include"Home.h"

Home::Home(){
	    	propertyID=0;
			strcpy(propertyType," ");
			strcpy(province," ");
			strcpy(town," ");
			price=0;
			strcpy(status," ");
			rooms=0;
		}
		
Home::Home(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10],int rm):Property(pID,pType,prv,twn,p,s){
			rooms=rm;
			
			cout<<"\n\nProperty ID: "<<pID<<" Home object created";
		}
		
void Home::setDetails(){
}
void Home::updateDetails(){
}
void Home::removeDetails(){
}
void Home::displayDetails(){
}
Home::~Home(){
			cout<<"\n\nProperty ID: "<<propertyID<<" Home object deleted";
		}
