#include<iostream>
using namespace std;



int main()
{

   	int  N = 6;
	int  Arr[] = {2, 3, 4, 5, 1, 12};
    int  count =  1;
    int  result = 0;
   
    for(int i=0;i<N;i++)
   {

   	  for(int j=i;j<N;j++)
   	      {
   	      	count=1;
   		      for(int k=i;k<=j;k++)
   		   		 
				   {
   		   			count = count * Arr[k];
   					cout<<Arr[k]<<" ";
      	     	   }
					   cout<<" ---->"<<count;
	   				   cout<<endl;
					   
					   if(result<count)
	       				{
	       			     	result=count;
	                   	}
          }
    }
	cout<<result<<" Max Product of Subarray";
	
}
