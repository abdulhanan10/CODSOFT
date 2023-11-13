//TASK: 01
//Guessing Game 

#include<iostream>   //include necessary header files
#include<ctime>
#include<iomanip>
using namespace std;

class GuessGame {   //define a GuessGame class
private:
	float num;   //private data member to store the number
public:
	GuessGame() :num(0) { }   //default constructor to initialize num to 0
	GuessGame(float n)   //parameterized constructor to set num
	{
		num = n;
	}
	void setNum(float n)   //setter function to set the value of num
	{
		num = n;
	}
	float getNum()   //getter function to retrieve the value of num
	{
		return num;
	}
	void guessTheNumber(float n1, float n2)   //function to play the guessing game
	{
		while (n2 != -1)
		{
			num = n1;
			n1 = rand();   //generate a random number
			cout << "//--Enter the guessing number: ";
			cin >> n2;
			setNum(n2);

			if (n2 == n1)
			{
				cout << "//---You've guessed the correct number, which is: " << getNum() << endl;
			}
			else if (n2 > n1)
			{
				cout << "//---You've guessed the number " << getNum() << " which is too high---//" << endl;
			}
			else
			{
				cout << "//---You've guessed the number " << getNum() << " which is too low---//" << endl;
			}

			if (n2 == -1)
			{
				system("cls");
				cout << setw(70) << "| --- G U E S S I N G -- N U M B E R -- G A M E --- |" << endl;
				cout << endl;
				cout << endl;
				cout << setw(70) << "//---Thank You for Playing! --- G U E S S I N G -- N U M B E R -- G A M E---//" << endl;
			}
		}
	}
};

int main()
{
	GuessGame obj;   //create an instance of the GuessGame class
	float number1 = 0, number2 = 0;

	cout << setw(70) << "| --- G U E S S I N G -- N U M B E R -- G A M E --- |" << endl;
	cout << endl;
	cout << endl;

	obj.guessTheNumber(number1, number2);   //play the guessing game

	cout << endl;

	return 0;
}