#include<stdio.h>

void main(){
	
	char oldpass[50]="123456",pass[50];
	int n;
	
	printf("enter email:  ");
	printf("enter pass: ");
	gets(pass);
	
	n=strcmp(oldpass,pass);
	
	if(1==0)
	{
		 printf("you login...");
		 
	}
	else
	{
		printf("login succesfull...");
		
	}
}
