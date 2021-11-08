int generateRandom(){
	srand(time(0));
	
	int n = rand();
	
	return 1 + (n % 54);
}

