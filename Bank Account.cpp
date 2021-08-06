/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<ctime>
using namespace std;
class A
{
	public:
		char name,type;
		int accnum,w,d;
		float bal;
	public:
		void initial()
		{
			char name[]= "Sejal";
			char type[]= "savings";
			accnum=25367819486;
			bal=5000;
		}
		void print()
		{
			cout<<"accnum="<<"25367819486"<<endl;
			cout<<"name="<<"Aakanksha and Sejal"<<endl;
			cout<<"type="<<"savings"<<endl;
		}
		void deposit()
		{
			cout<<"balance="<<bal<<endl;
			cout<<"enter the amount to be deposited=";
			cin>>d;
			bal=bal+d;
			cout<<"bal after deposition="<<bal<<endl;
		}
		void withdraw()
		{
			cout<<"enter the withdrawl amount=";
			cin>>w;
			if(w>bal)
            cout<<"\nInsuficient balance";
            else
            {
			bal=bal-w;
		    cout<<"bal after withdrawl="<<bal<<endl;
			cout<<"net bal="<<bal<<endl;
		    }
			time_t tt; 
			struct tm * ti;
			time (&tt); 
			ti = localtime(&tt); 
			cout << "\nDate and time of Withdrawl = "  << asctime(ti);
			cout<<"Have a good day!"<<endl;
		}
};
int main()
{
	A O;
	O.initial();
	O.print();
	O.deposit();
	O.withdraw();
	return 0;
}
