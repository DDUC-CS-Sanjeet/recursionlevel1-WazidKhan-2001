#include <iostream>
using namespace std;
int gcdR(int a , int b)
{
	if(b!=0)
	 return gcdR(b,a%b);
	else
	 return a;
}

int gcd_Iteration( int a,int b )
{
	while(a!=b)
	{
	   if(a>b)
	    a=a-b;
       else
       b=b-a;
	}
	return a;
}
int factR(int x)
{   if (x>=1)
      return x*factR(x-1);
    else
      return 1;
	
}
int fact_Iteration(int x)
{   int f=1;
	for(int i=1;i<=x;i++)
	{
    	f=f*i;
	}
	return f;
	
}
int power_Iteration( int x, int y)
{   int num=1;
	  for(int i=1;i<=y;i++)
	{
		num=num*x;
	}
	return num;
}
int powerR( int x, int y)
{
	if (y!=0)
	return (x*powerR(x,y-1));
	else
	return 1;
}
void fib_Iteration(int x)
     {
	     int t1=0, t2=1, nextterm=0;
         cout<<"Fibonacci series: ";
         for(int i=1; i<=x; ++i)
             { 
	           if(i==1)
                 { 
	               cout<<t1;
                   continue;
               	} 
            	else if(i==2)
	             {
	            	 cout<<t2;
	                 continue;
               	}
              else
                {
                 nextterm=t1+t2;
                 t1=t2;
	             t2=nextterm;
	             cout<<nextterm;
	             }
     }  
	return;
}
int fibR(int x)
{
	if(x<=1)
	 return x;
	return fibR(x-1)+fibR(x-2); 

}
int main()
{
	int choice;
    cout<<"1.Euclid's algorithm for gcd of two numbers."<<endl;
	cout<<"2.factorial of a given number."<<endl;
	cout<<"3.A number num1 raised to power another number num2."<<endl;
	cout<<"4.First num terms of Fibonacci sequence."<<endl;
	cin>>choice;

		switch(choice)
		{
			case 1:
				{       cout<<"Euclid's algorithm for gcd of two numbers."<<endl;
				        cout<<"Enter Two Numbers"<<endl;
						int n1,n2;
						cin>>n1>>n2;
						cout<<"GCD Of "<<n1<<" and "<<n2<<"using Recursion is "<<gcdR(n1,n2)<<endl;
	                    cout<<"GCD Of "<<n1<<" and "<<n2<<"using iteration is "<<gcd_Iteration(n1,n2);
					    break;
				}
		    case 2:
		    	{
		    	        int n1 ;
                     	cout<<"Enter The NUmber To Find Its Factorial ";
                     	cin>>n1;
	                    cout<<"Factorial of Number "<<n1<<" using Recursion "<<" Is "<<factR(n1)<<endl;	
						cout<<"Factorial of Number "<<n1<<" using Iteration "<<" Is "<<fact_Iteration(n1);  
				        break;
				}
			case 3:
			    {
			            int Pow,base;
                        cout<<"Enter Power ";
                        cin>>Pow;
                        cout<<"Enter base ";
                        cin>>base;
                        cout<<base <<" To Power "<<Pow<<" using Iteration is "<<power_Iteration(base, Pow)<<endl;
                        cout<<base <<" To Power "<<Pow<<" using Recursion is "<<powerR(base, Pow);
                        break;
				}
			case 4:
			    {      int n1;
				       cout<<"Enter the number of terms ";
                       cin>>n1;
					   fib_Iteration(n1); 
					   
                        cout<<"\n Fibonacci series using Recursion  ";
                         for(int i=0;i<n1;i++)
                          {  
						     cout<<fibR(i)<<" " <<endl;
                        }
                        break;
	         	}
    	}
   return 0;
}
