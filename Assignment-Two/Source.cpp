/* Developed by Vasantha Buddiga - Game to Find Gold - Fun Game*/
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
// Declaring Constant
const int TIMES = 8;
/* Declaring Functions */
void displayNum();
void displayLine();
void displayArrayWithQuestionMark();
void displayStar();
void displayRules();
void enterFiveTimesCheckForGold();
void dispalyGBOnGameBoard();


int main()
{
		
	system("color F0");
	char answer;
	
	// calling functions
	cout << setw(4);
	do
	{
	displayNum();
	displayLine();
	displayArrayWithQuestionMark();
	displayLine();
	displayStar();
	displayRules();
	displayStar();
	enterFiveTimesCheckForGold();
	cout << setw(6);
	displayNum();
	displayLine();
	dispalyGBOnGameBoard();
	displayLine();
	cout << "do you want to continue? ";
	cin >> answer;
	} while (answer == 'y' || answer =='Y');
	system("pause");
	return 0;

}
/* Creating Functions
Function1: Creating function to display numbers from 1 to 8 */
void displayNum()
{
	int num;
	for (num = 0; num < TIMES; num++)
	{
		cout << " " << setw(2) << num + 1;
	}
	cout << endl;
	return;
}

// Function2: Creating function to display line
void displayLine()
{
	int al;
	for (al = 0; al < TIMES; al++)
	{
		cout << "____";
	}
	cout << endl;
	return;
}
/* Function3 : Creating function of
multidimentional arrary which display ? mark */
void displayArrayWithQuestionMark()
{
	int row, col;

	for (row = 0; row < TIMES; row++)
	{
		cout << " " << (row + 1) << "|";

		for (col = 0; col < TIMES; col++)
		{
			cout << setw(3) << "?";
		}
		cout << endl;
	}
	return;
}
// Function4: Function which display star line
void displayStar()
{
	int al;
	for (al = 0; al < TIMES; al++)
	{
		cout << "****";
	}
	cout << endl;
	return;
}
// Function5 :Function about game rules
void displayRules()
{
	cout << "**" << "         " << "Find Gold!" << "         " << "**";
	cout << endl;
	cout << "**" << "     " << "You have 5 guesses," << "    " << "**";
	cout << endl;
	cout << "**" << "      " << "5 pieces of gold" << "      " << "**";
	cout << endl;
	cout << "**" << "        " << "and 1 bomb" << "          " << "**";
	cout << endl;
	cout << "**" << "        " << "Good Luck!" << "          " << "**";
	cout << endl;
	return;
}
// Function6 : Function about 5 iterations giving the player 5 turns
void enterFiveTimesCheckForGold()
{
	int i;
	int x, y;

	for (i = 0; i < 5; i++)
	{

		cout << " Enter x coordinate (1-8):";
		cin >> x;
		cout << endl;

		cout << " Enter y coordinate(1-8):";
		cin >> y;
		cout << endl;
	}

	return;
}
/* Function7 : At random places of game board
   5 times "G" for gold and 1 time "B" for  bomb */
void dispalyGBOnGameBoard()
{
	int row, col, arr[TIMES][TIMES];
	int goldCoin1x, goldCoin1y;
	int goldCoin2x, goldCoin2y;
	int goldCoin3x, goldCoin3y;
	int goldCoin4x, goldCoin4y;
	int goldCoin5x, goldCoin5y;
	int bomb1x, bomb1y;
	goldCoin1x = rand() % TIMES;
	goldCoin1y = rand() % TIMES;
	goldCoin2x = rand() % TIMES;
	goldCoin2y = rand() % TIMES;
	goldCoin3x = rand() % TIMES;
	goldCoin3y = rand() % TIMES;
	goldCoin4x = rand() % TIMES;
	goldCoin4y = rand() % TIMES;
	goldCoin5x = rand() % TIMES;
	goldCoin5y = rand() % TIMES;
	bomb1x = rand() % TIMES;
	bomb1y = rand() % TIMES;
	static int nCalls = 0;
	if (nCalls == 0)
		srand(unsigned(time(NULL)));
	nCalls++;
	for (row = 0; row < TIMES; row++)
	{
		cout << setw(4) << row + 1 << "|";
		for (col = 0; col < TIMES; col++)
		{
			int rnum;
			static int nCalls = 0;
			if (nCalls == 0)
				srand(unsigned(time(NULL)));
			nCalls++;
			rnum = (rand() % TIMES) + 1;
			arr[row][col] = rnum;
			cout << "  " << arr[row][col];
			/* char(71) is ASCII Code of "G"
				char(66) is ASCII code for "B"
			*/
			if (row == goldCoin1y && col == goldCoin1x)
			{
				cout << char(71);
			}
			if (row == goldCoin2y && col == goldCoin2x)
			{
				cout << char(71);
			}
			if (row == goldCoin3y && col == goldCoin3x)
			{
				cout << char(71);
			}
			if (row == goldCoin4y && col == goldCoin4x)
			{
				cout << char(71);
			}
			if (row == goldCoin5y && col == goldCoin5x)
			{
				cout << char(71);
			}
			if (row == bomb1y && col == bomb1x)
			{
				cout << char(66);
			}
		}
		cout << endl;
	}
}