int generateRandom(){
	//generating the random number
	srand((unsigned)time(0));	
	int n = (int)(((float)rand()/RAND_MAX)*10000000);
	
	return 1 + (n % 54);
}

