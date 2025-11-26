#include<iostream>
using namespace std;
int main()
{
	int choice;
	double num1,num2,result;
	do{
	cout<<"menu:"<<endl;
	cout<<"1.add"<<endl;
	cout<<"2.subtract"<<endl;
	cout<<"3.multiply"<<endl;
	cout<<"4.divide"<<endl;
	cout<<"5.exit"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"enter two numbers:";
			cin>>num1>>num2;
			result =num1+num2;
			cout<<"result:"<<num1<<"+"<<num2<<"="<<result<<endl;
			break;
		case 2:
			cout<<"enter two numbers:";
			cin>>num1>>num2;
			result =num1-num2;
			cout<<"result:"<<num1<<"-"<<num2<<"="<<result<<endl;
			break;
		case 3:
			cout<<"enter two numbers:";
			cin>>num1>>num2;
			result =num1+num2;
			cout<<"result:"<<num1<<"*"<<num2<<"="<<result<<endl;
			break;
		case 4:
			cout<<"enter two numbers:";
			cin>>num1>>num2;
			result =num1/num2;
			cout<<"result:"<<num1<<"/"<<num2<<"="<<result<<endl;
			break;
		case 5:
			cout<<"exit"<<endl;
			break;
		default:
			cout<<"invalid case"<<endl;
	}
   }while(choice!=5);
        return 0;
}
