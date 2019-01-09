#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
	char name[20];
	int acc;
	float balance;
	float n;
	public:
		void createacc()
		{
			cout<<"Enter Name Acc.No. and Balance:";
			cin>>name>>acc>>balance;
		}
		void show()
		{
			cout<<"\n Name=>"<<name;
			cout<<"\n Acc.No.=>"<<acc;
			cout<<"\n Balance=>"<<balance;
		}
		
		
		
		
		void curac()
		{
			cout<<" Enter the current balance: ";
			cin>>balance;
			cout<<"\n Enter the amout to deposit: ";
			cin>>n;
		}
		void cursh()
		{
			float t;
			t=n+balance;
			cout<<"\n Current Balance=> "<<balance;
			cout<<"\n Amount Deposited=> "<<n;
			cout<<"\n Balance remaining=> "<<t;
		}
		
		
		
		void with()
		{
			cout<<" Enter the current balance: ";
			cin>>balance;
			cout<<"\n Enter the amout to Withdraw: ";
			cin>>n;
		}
		void withget()
		{
			float t;
			t=balance-n;
			if(n<balance)
			{cout<<"\n Current Balance=> "<<balance;
			cout<<"\n Amount Deposited=> "<<n;
			cout<<"\n Balance remaining=> "<<t;
			}
			else
			cout<<"\n Limit to withdraw exceeds than your balance";
		}
 }; 
 main()
 {
 	int n;
	while(true)
	{
	printf("\n Press 1 For Create Account");
	printf("\n Press 2 For Deposits");
	printf("\n Press 3 For Wihdrawl");
	printf("\n Press 4 For EXIT");
	printf("\n Enter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: Bank ca;
 				ca.createacc();
 				ca.show();
 				break;
 		case 2: Bank curac;
		 		curac.curac();
		 		curac.cursh();
 				break;	
 		case 3: Bank with;
		 		with.with();
		 		with.withget();
		 		break;
		case 4: exit(0);
	}
 }
}

