/*
   Author:Kalpan Baigar
   Program to print following star pattern
     
        	 
	  *****
	  ****
	  ***
	  **
	  *
	  
*/


#include<iostream>


using namespace std;


class Number
{
   public:
           void display(int );	      
   	      
   	
};


void Number::display(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
    {
	  for(j=i;j<=n;j++)
	  {
	  	
		cout<<"*";
	   
	    
	  }
		
	  cout<<"\n";	   
			   
	}   	  
}
       


int main()
{

	int no;
	cout<<"enter size:";
	cin>>no;
	
    Number obj;
    obj.display(no);
	
	return 0;
}
