
void game2(){
	gameLobby:
	cout<<"Select enter shape."<<endl;
	cout<<"1. Flowers"<<endl;
	cout<<"2. Hearts"<<endl;
	cout<<"3. Diamonds"<<endl;
	cout<<"4. Spades"<<endl;
	cout<<"5. EXIT"<<endl;
	cout<<"Enter Option. (then press enter) :";
	
	int option;
	cin>>option;
	cout<<endl;
	int n;
	
	switch(option){
		case 2:
			n = generateRandom();
			queryCard(n);
			if((n % 4) == 0)cout<<"Correct"<<endl<<endl;
			else cout<<"Incorrect"<<endl<<endl;
			goto gameLobby;
		case 1:
			n = generateRandom();
			queryCard(n);
			if((n % 4) == 1)cout<<"Correct"<<endl<<endl;
			else cout<<"Incorrect"<<endl<<endl;
			goto gameLobby;
		case 3:
			n = generateRandom();
			queryCard(n);
			if((n % 4) == 2)cout<<"Correct"<<endl<<endl;
			else cout<<"Incorrect"<<endl<<endl;
			goto gameLobby;
		case 4:
			n = generateRandom();
			queryCard(n);
			if((n % 4) == 3)cout<<"Correct"<<endl<<endl;
			else cout<<"Incorrect"<<endl<<endl;
			goto gameLobby;
		case 5:
			break;
		default:
			cout<<"Exceeded the options"<<endl<<endl;
			goto gameLobby;
	}
}

