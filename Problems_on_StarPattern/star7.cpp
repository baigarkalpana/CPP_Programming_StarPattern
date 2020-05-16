/*
Author-Kalpana Baigar
Program to print following Star Pattern

****$
***$$
**$$$
*$$$$
$$$$$     
   
*/


#include <iostream>

using namespace std;

int main() 
{
   int n,i,j,k;

   n = 5;   

   for(i = 1; i <= n; i++)
   {
   	
      for(k=n-i;k>=1;k--)
	  {
	      cout<<"*";
	  
	  }
	  
	  for(j=1;j<=i;j++)
	  {
	  	cout<<"$";
	  }
	  cout<<"\n";
   }	
   	
   	
  return 0; 	
      
   }

