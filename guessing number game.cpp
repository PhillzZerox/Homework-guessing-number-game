#include<iostream>
#include<time.h>
using namespace std ;
int main()
{
	srand(time(NULL));
	int random =1+rand()%10;
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
	int number, round = 0;
	do{
		cout << "Enter number : ";
		cin >>number;
		round++;
		if (number < random) cout << "The secret number is higher" << endl;
		else if (number > random) cout << "The secret number is lower" << endl;

	}while( number != random);

	cout << "Congratulations!" << endl;
	cout << "The secret number is " << random << endl;
	cout << "You made "<< round << " guesses" << endl;
	system("pause");
	return 0 ;
}