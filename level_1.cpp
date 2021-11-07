
void game1(){
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

