using namespace std;

int posNumber(int n){
	return 1 + ((n-1) / 4);
}

void specialCard(int posCard, string value){
	if(posCard < 5){
		cout<<"Ace "<<value<<endl;
	}
	else if(posCard < 45 && posCard > 40){
		cout<<"Jack "<<value<<endl;
	}
	else if(posCard < 49 && posCard > 44){
		cout<<"Queen "<<value<<endl;
	}
	else if(posCard < 53 && posCard > 48){
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
					if(i > 40 || i < 5){
						specialCard(i, str + str2);
					}else{
						cout<<pos<<" "<<str + str2<<endl;
					}
				}else{
					string str2 = " Diamonds";
					int pos = posNumber(i);
					if(i > 40 || i < 5){
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
					if(i > 40 || i < 5){
						specialCard(i, str + str2);
					}else{
						cout<<pos<<" "<<str + str2<<endl;
					}
				}else{
					string str2 = " Flowers";
					int pos = posNumber(i);
					if(i > 40 || i < 5){
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

