#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int posNumber(int n){
	return 1 + ((n-1) / 4);
}

void specialCard(int posCard, string value){
	if(posCard < 5){
		cout<<"Ace "<<value<<endl;
	}
	else if(posCard < 49 && posCard > 44){
		cout<<"Jack "<<value<<endl;
	}
	else if(posCard < 53 && posCard > 48){
		cout<<"Queen "<<value<<endl;
	}
	else if(posCard < 53 && posCard >52){
		cout<<"King "<<value<<endl;
	}
}

void queryCard(int pos){
	int i = pos;
		if(i > 52){
			if(i == 53){
				string str = "Black Joker";
				cout<<str<<endl;
			}
			else if(i == 54){
				string str = "Colored Joker";
				cout<<str<<endl;
			}else{
				cout<<"Error occured";
			}
		}else{
			if((i % 2) == 0){
				string str = " Red";
				if((i % 4) == 0){
					string str2 = " Hearts";
					int pos = posNumber(i);
					if(i > 44 || i < 5){
						specialCard(i, str + str2);
					}else{
						cout<<pos<<" "<<str + str2<<endl;
					}
				}else{
					string str2 = " Diamonds";
					int pos = posNumber(i);
					if(i > 44 || i < 5){
						specialCard(i, str + str2);
					}else{
						cout<<pos<<" "<<str + str2<<endl;
					}
				}
			}else{
				string str = " Black";
				if((i % 4) == 3){
				 	string str2 = " Spades";
					int pos = posNumber(i);
					if(i > 44 || i < 5){
						specialCard(i, str + str2);
					}else{
						cout<<pos<<" "<<str + str2<<endl;
					}
				}else{
					string str2 = " Flowers";
					int pos = posNumber(i);
					if(i > 44 || i < 5){
						specialCard(i, str + str2);
					}else{
						cout<<pos<<" "<<str + str2<<endl;
					}
				}
			}
		}
}

void printAllCards(){
	for(int i = 1;i < 55;i++){
		cout<<i<<"   ";
		queryCard(i);
	}
}

int generateRandom(){
	srand(time(0));
	
	int n = rand();
	
	return 1+ (n % 54);
}

void game(){
	gameLobby:
	cout<<"Select enter color."<<endl;
	cout<<"1. Red"<<endl;
	cout<<"2. Black"<<endl;
	cout<<"3. exit"<<endl;
	
	int option;
	cin>>option;
	int n;
	
	switch(option){
		case 1:
			n = generateRandom();
			queryCard(n);
			if((n % 2) == 0)cout<<"Correct"<<endl;
			else cout<<"Incorrect"<<endl;
			goto gameLobby;
		case 2:
			n = generateRandom();
			queryCard(n);
			if((n % 2) == 1)cout<<"Correct"<<endl;
			else cout<<"Incorrect"<<endl;
			goto gameLobby;
		case 3:
			break;
		default:
			cout<<"Exceeded the options"<<endl;
			goto gameLobby;
	}
}

int main(){
	int card;
	int num;
	
	mainLobby:
		
	cout<<"Welcome to my Card Guess Game"<<endl;
	cout<<endl;
	cout<<"Select :"<<endl;
	cout<<"1. Print out all the cards"<<endl;
	cout<<"2. Start Game"<<endl;
	cout<<"3. EXIT"<<endl;
	cout<<"Enter no. (then press enter) :";
	cin>>card;
	
	switch(card){
		case 1:
			printAllCards();
			goto mainLobby;
		case 2:
			game();
			goto mainLobby;
			case 3:
				break;
		default:
			cout<<"exceeded the limit."<<endl;
			goto mainLobby;
	}
	
	
	
}
