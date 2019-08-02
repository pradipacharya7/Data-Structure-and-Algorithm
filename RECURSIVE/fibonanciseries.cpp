	#include <iostream>
	#include<conio.h>
	using namespace std;
			
		int fibo(int num)
			{
			    if (num == 0)
			    return 0;
				else if (num == 1)
			    return 1;
			    else return(fibo(num-1) + fibo(num-2));
			}
			
		int main()
			{
			    int num;
			    int result;
				cout<<"Enter the nth number in fibonacci series: ";
			    cin>>num;
			    if (num < 0)
			    {
			        cout<<"Fibonacci of negative number is not possible.\n";
			        exit(0);
			    }
			    else
			    for(int i=0;i<num;i++)
			    {
			    	cout<<"\t"<<fibo(i);
				}
			    return 0;
			    getche();
			}
