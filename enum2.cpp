#include<iostream>
using namespace std;
int main()
{
	
	enum Marvellous_Batches{PPA=0,LB=1,LSP=2,Python=3};
	int Fees[]={15000,16000,17000,18000};
	float Duration[]={3.5,4.0,3.5,4.5};
	int choice=0;
	
	
	cout<<"Select the batch:\n";
	cin>>choice;
	
	
	switch(choice)
	{
		case PPA:
				cout<<"Thank you selection PPA\n";
				cout<<"Duration is:"<<Duration[PPA]<<"\n";
				cout<<"Fees are:"<<Fees[PPA]<<"\n";
				break;
				
		case LB:
				cout<<"Thank you selection LB\n";
				cout<<"Duration is:"<<Duration[LB]<<"\n";
				cout<<"Fees are:"<<Fees[LB]<<"\n";
				break;
		case LSP:
				cout<<"Thank you selection LSP\n";
				cout<<"Duration is:"<<Duration[LSP]<<"\n";
				cout<<"Fees are:"<<Fees[LSP]<<"\n";
				break;
		befault:
				cout<<"Invalid batch";
				
	}
	
	cout<<"";
	
	return 0;
	}
	