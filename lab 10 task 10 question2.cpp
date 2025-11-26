#include<iostream>
using namespace std;
int main()
{   
     int userguess;
     int attempts;
     int secretnumber;
	cout<<"number guessing game"<<endl;
	cout<<"i am thinking about number between 1 and 20."<<endl;
	cout<<"can you guess what is it"<<endl;
	do{
		cout<<"\n enter your guess(1-20):";
		cin>>userguess;
		attempts++;
		if(userguess<1||userguess>20){
			cout<<"please enter a number between 1 and 20!"<<endl;
		}
		else if(userguess<secretnumber){
			cout<<"too low"<<endl;
		}
		else if(userguess<secretnumber){
			cout<<"too high"<<endl;
		}
		else{
			cout<<"\n congratulation you guessed it"<<endl;
			cout<<"the secretnumber was:"<<secretnumber<<endl;
			cout<<"you find it in"<<attempts<<"attempts!"<<endl;
		}
	}while(userguess!=secretnumber);
	return 0;
}
