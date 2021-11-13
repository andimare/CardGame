
void game1(){
	gameLobby:
	cout<<"Select color.(then Enter)"<<endl;
	cout<<"1. Red"<<endl;
	cout<<"2. Black"<<endl;
	cout<<"3. exit"<<endl;
	cout<<"Enter Option. (then press enter) :";
	
	int option;
	cin>>option;
	cout<<endl;
	int n;
	
	switch(option){
		case 1:
			n = generateRandom();
			queryCard(n);
			if((n % 2) == 0)cout<<"Correct"<<endl<<endl;
			else cout<<"Incorrect"<<endl<<endl;
			goto gameLobby;
		case 2:
			n = generateRandom();
			queryCard(n);
			if((n % 2) == 1)cout<<"Correct"<<endl<<endl;
			else cout<<"Incorrect"<<endl<<endl;
			goto gameLobby;
		case 3:
			break;
		default:
			cout<<"Exceeded the options"<<endl<<endl;
			goto gameLobby;
	}
}

