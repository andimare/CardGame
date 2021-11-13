
using namespace std;

bool checkingPosition(int choice, int card){
	if(posNumber(card) == choice)return true;
	else return false;
}

void game3(){
	gameLobby:
	cout<<"Select enter corresponding number."<<endl;
	cout<<"From 1 - 13 (1 - ace, 11 - jack, 12 - queen, 13 - king)"<<endl;
	cout<<"0. EXIT"<<endl;
	cout<<"Enter Option. (then press enter) :";
	
	int option;
	cin>>option;
	cout<<endl;
	int n;
	
	switch(option){
		case 0:
			break;
		default:
			if(option > 0 && option <14){	
				n = generateRandom();
				queryCard(n);
				if(checkingPosition(option, n))cout<<"Correct"<<endl<<endl;
				else cout<<"Incorrect"<<endl<<endl;
				goto gameLobby;
			}else{
				cout<<"Exceeded the options"<<endl<<endl;
				goto gameLobby;	
			}
	}
}

