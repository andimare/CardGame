#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include "globalFunction.cpp"
#include "cardQuery.cpp"
#include "level_1.cpp"
#include "level_2.cpp"
#include "level_3.cpp"
using namespace std;

void game(){
	
	int option;
	
	level:
	cout<<"Select level."<<endl;
	cout<<"1. Easy"<<endl;
	cout<<"2. Medium"<<endl;
	cout<<"3. Hard"<<endl;
	cout<<"4. EXIT"<<endl;
	cout<<"Enter Option. (then press enter) :";
	cin>>option;
	cout<<endl;
	
	switch(option){
		case 1:
			game1();
			goto level;
		case 2:
			game2();
			goto level;
		case 3:
			game3();
			goto level;
		case 4:
			break;
		default:
			cout<<"Level Non-existant."<<endl<<endl;
			goto level;
	}
}

int main(){
	int card;
	int num;
		
	cout<<"Welcome to my Card Guess Game"<<endl<<endl;
	
	mainLobby:
	cout<<"Select :"<<endl;
	cout<<"1. Print out all the cards"<<endl;
	cout<<"2. Start Game"<<endl;
	cout<<"3. EXIT"<<endl;
	cout<<"Enter Option. (then press enter) :";
	cin>>card;
	cout<<endl;
	
	switch(card){
		case 1:
			printAllCards();
			cout<<endl;
			goto mainLobby;
		case 2:
			game();
			goto mainLobby;
			case 3:
				break;
		default:
			cout<<"Option is out of limit."<<endl;
			goto mainLobby;
	}
}
