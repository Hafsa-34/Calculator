#include<iostream>
using namespace std;
int options(int num1, int num2, int opt)         //funtion1 cout&switch
{
	cout<<"\n\t\t\tPress: ";
	cout<<"\n\n\t\t\t\t1. For Addition"<<endl;
	cout<<"\t\t\t\t2. For Subtraction"<<endl;
	cout<<"\t\t\t\t3. For Division"<<endl;
	cout<<"\t\t\t\t4. For Multiplication"<<endl;
    cout<<"\t\t\t\t5. For checking even/odd numbers       "; 
	cin>>opt;
	switch(opt)
	{
		case 1:
		cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2; 
		cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
		break;
        case 2:
		cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;  
		cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
		break;
		case 3:
		cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;  
		cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
		break;
		case 4: 
		cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2; 
		cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
		break;
		case 5:
		cout<<"Enter number: ";
        cin>>num1; 
		if(num1%2==0)
		{
			cout<<num1<<" is even"<<endl;
		}
		else
		{
			cout<<num1<<" is odd"<<endl;
		}
		break;
		default:
			cout<<"Invalid option"<<endl;
   }
}
int option2(char a, int num1, int num2, int opt, int i=1)                //function2 while loop
{
	while (i!='N')
	{
	cout<<"\n\nDo you want to continue using this calculator (Y/N)? ";
	cin>>a;
	if(a=='Y' || a=='y')
	{
	options(num1,num2,opt);	
	}
	else if(a=='N'|| a=='n')
	{
		return 0;
	}
	else 
	{
		cout<<"Invalid option"<<endl;
	}
	i++;
}
}
int main()                                                         //main function 
{
	int num, num1, num2, opt, i=1;
	char a;
	cout<<"Welcome to my calculator - Hafsa Sarfraz"<<endl;
    options(num1,num2,opt);                                       //function1 call
    option2(a,num1,num2,opt,i=1);                                //function2 call
}

