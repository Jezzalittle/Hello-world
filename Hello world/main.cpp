
// main.cpp

#include <string>
#include <iostream>
#include <ctime>
#include "Utility.h"
#include "Player.h"
#include "Enemy.h"
#include "BubbleSort.h"



using namespace std;

class Player;
class Enemy;


void HelloWorld()
{
	bool start = false;
	
	// this is the way to tell the consle to print text
	std::cout << "Press the ENTER key \n";

	//if there is no text there then start = true
	if (cin.get() == '\n')
	{
		start = true;
	}


	if (start)
	{
		for (int i = 0; i < 10; i++)
		{
			string text = " Hello World and Welcome to AIE\n";
			std::cout << i << text << std::endl;
		}
		system("pause");
	}
	
}

void graphCalaculator()
{
	float y = 0.0f;
	float x = 0.0f;
	float power = 0.0f;
	float yIntersept = 0.0f;

		cout << "X = " << endl;
		cin >> x;

		cout << "Power = " << endl;
		cin >> power;

		cout << "Y-intersept = " << endl;
		cin >> yIntersept;

		char choice = 0;
		while (true)
		{
			y = (std::powf(x, power)) + yIntersept;

			cout << "\n\nY = " << y << endl << endl << endl;
			cout << "press Q to quit" << endl;
			cout << "\nChange x : " << endl;
		
		
			//asks for int	
			choice = cin.get();

			if (choice == 'q' || choice == 'Q')
			{
				break;
			}
	

			cin >> x;

		
			std::cin.ignore(INT_MAX, '\n');
			std::cin.clear();
		
		}



}

void SwapNumbers()
{
	float a, b;

	cout << "A ";
	cin >> a;

	cout << "B ";
	cin >> b;

	cout << "\nA = " << a << endl;
	cout << "B = " << b << endl;

	cout << "\nSWAP!" << endl;

	float temp = a;
	a = b;
	b = temp;



	cout << "\nA = " << a << endl;
	cout << "B = " << b << endl;
}

bool HitOrStandBlackJack(int score)
{
	int randNum = rand() % 100 + 1;

	int hitChance = ((1 - (score / 21.0f)) * 100);

	if (randNum < hitChance)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void BlackJack()
{
	string answer = "a";
	int score = 0;
	bool stand = false;
	int dealerScore = 0;
	bool dealerStand = false;
	int chanceToHitAgian;

	//###############
	//#Player's turn#
	//###############
	while (stand == false && score < 21)
	{
		cout << endl << "Your Turn" << endl << endl << "Stand or Hit" << endl;
		getline(cin, answer);
		// if the input was "hit" get two random cards between 0 and 11 and print them out to consle
		if (answer == "hit" || answer == "Hit")
		{
			int i = rand() % 11;
			cout << endl << "1st card: "<< i << endl;
			int j = rand() % 11;
			cout << endl << "2nd card: " << j << endl;
			score = score + i + j;

			cout << endl << score << endl;
		}
		

		// if input was stand then exit the while loop
		if (answer == "stand" || answer == "Stand")
		{
			stand = true;
		}

		// if score was greater then 21 then lose
		if (score > 21)
		{
			cout << endl << "Your Score: " << score << endl;
			cout << endl << "You Lose" << endl << endl;
			return;
		}
	}

	//##############
	//#daler's turn#
	//##############

	while (dealerStand == false)
	{

		//give the dealer 2 random cards and print them to consle

		cout << endl << "Dealer's Turn" << endl;

		int x = rand() % 11 + 1;
		cout << endl << "1st card: " << x << endl;

		int z = rand() % 11;
		cout << endl << "2nd card: " << z << endl;

		//print the total dealers score

		dealerScore = dealerScore + x + z;
		cout << endl << "Dealer's Score: " << dealerScore;

		//if dealer score is greater then 21 exit loop

		if (dealerScore > 21)
		{
			dealerStand = true;
		}

	


		//if the dealer's score is less then the player's score and if the dealer score is greater then 11 else exit loop
		if(dealerScore < score)
		{ 
			if (HitOrStandBlackJack(dealerScore) == false)
			{
				dealerStand = true;
			}
		}

	}

	


		if (dealerScore < score || dealerScore > 21)
		{
			cout << endl << "Your Score: " << dealerScore << endl;
			cout << endl << "Dealer's Score: " << dealerScore << endl << endl;
			cout << endl << "You Win" << endl << endl;
		}

		else if (dealerScore > score)
		{
			cout << endl << "Your Score: " << dealerScore << endl;
			cout << endl << "Dealer's Score: " << dealerScore << endl << endl;
			cout << endl << "You Lose" << endl << endl;
		}
		else if (dealerScore == score)
		{
			cout << endl << "Your Score: " << dealerScore << endl;
			cout << endl << "Dealer's Score: " << dealerScore << endl << endl;
			cout << endl << "It's A Draw" << endl << endl;
		}
	




}

bool TicTacToeGameWinCheck(string map[][3], int amoutOfTurns)
{
	for (int i = 0; i < 3; i++)
	{
		if (map[i][0] == map[i][1] && map[i][1] == map[i][2])
		{
			if (map[i][0] == "X")
			{
				cout << "\n\nPlayer 1 Wins";
				return true;
			}
			if (map[i][0] == "O")
			{
				cout << "\n\nPlayer 2 Wins";
				return true;
			}
		}
		if (map[0][i] == map[1][i] && map[1][i] == map[2][i])
		{
			if (map[0][i] == "X")
			{
				cout << "\n\nPlayer 1 Wins";
				return true;
			}
			if (map[0][i] == "O")
			{
				cout << "\n\nPlayer 2 Wins";
				return true;
			}
		}
	}

	if (map[0][0] == map[1][1] && map[1][1] == map[2][2] || map[2][0] == map[1][1] && map[0][2] == map[1][1])
	{
		if (map[1][1] == "X")
		{
			cout << "\n\nPlayer 1 Wins!";
			return true;
		}
		if (map[1][1] == "O")
		{
			cout << "\n\nPlayer 2 Wins!";
			return true;
		}
	}

	if (amoutOfTurns == 9)
	{
		cout << "\n\n Its A Draw!";
		return true;
	}
}

void printTicTacToe(string maps[][3])
{

	cout << maps[0][0] << "|" << maps[0][1] << "|" << maps[0][2]  << endl;
	cout << "-----" <<  endl;
	cout << maps[1][0] << "|" << maps[1][1] << "|" << maps[1][2] << endl;
	cout << "-----" << endl;
	cout << maps[2][0] << "|" << maps[2][1] << "|" << maps[2][2] <<  endl;

}

void TicTacToe()
{
	bool gameStart = false;
	
	int playerTurn = 1;

	int turnCount = 0;

	string map[3][3];
	while (true)
	{
	

		if (gameStart == false)
		{

			cout << "\n\nHow To Play:" << endl << "\nTL: Top Left \nTM: Top Middle \nTR: Top Right \nML: Middle Left \nMM: Middle Middle \nMR: Middle Right \nBL: Bottom Left\nBM: Bottom Middle\nBR: Bottom Right\n\n(Put on CapsLock) \n\nPress Enter To Start";



			for (int x = 0; x < 3; x++)
			{
				for (int y = 0; y < 3; y++)
				{
					map[x][y] = " ";
				}
			}



			if (cin.get() == '\n')
			{
				gameStart = true;
			}

		}

		if (gameStart == true)
		{



			if (TicTacToeGameWinCheck(map, turnCount) == true)
			{
				break;
			}

			while (playerTurn == 1)
			{
				string choice;

				cout << "Player 1's Turn" << endl << endl;

				printTicTacToe(map);

				cout << "\nPick a Position" << endl;

				getline(std::cin, choice);

				if (choice == "TL")
				{
					if (map[0][0] != "X" || map[0][0] != "O")
						map[0][0] = "X";
				}
				if (choice == "TM")
				{
					if (map[0][1] != "X" || map[0][1] != "O")
						map[0][1] = "X";
				}
				if (choice == "TR")
				{
					if (map[0][2] != "X" || map[0][2] != "O")
						map[0][2] = "X";
				}
				if (choice == "ML")
				{
					if (map[1][0] != "X" || map[1][0] != "O")
						map[1][0] = "X";
				}
				if (choice == "MM")
				{
					if (map[1][1] != "X" || map[1][1] != "O")
						map[1][1] = "X";
				}
				if (choice == "MR")
				{
					if (map[1][2] != "X" || map[1][2] != "O")
						map[1][2] = "X";
				}
				if (choice == "BL")
				{
					if (map[2][0] != "X" || map[2][0] != "O")
						map[2][0] = "X";
				}
				if (choice == "BM")
				{
					if (map[2][1] != "X" || map[2][1] != "O")
						map[2][1] = "X";
				}
				if (choice == "BR")
				{
					if (map[2][2] != "X" || map[2][2] != "O")
						map[2][2] = "X";
				}

				playerTurn = 2;
				turnCount++;
			}


			if (TicTacToeGameWinCheck(map, turnCount) == true)
			{
				break;
			}

			while (playerTurn == 2)
			{
				string choice = " ";
				cout << "Player 2's Turn" << endl << endl;

				printTicTacToe(map);

				cout << "\nPick a Position" << endl;
				getline(std::cin, choice);

				if (choice == "TL")
				{
					if (map[0][0] != "X" || map[0][0] != "O")
						map[0][0] = "O";
				}
				if (choice == "TM")
				{
					if (map[0][1] != "X" || map[0][1] != "O")
						map[0][1] = "O";
				}
				if (choice == "TR")
				{
					if (map[0][2] != "X" || map[0][2] != "O")
						map[0][2] = "O";
				}
				if (choice == "ML")
				{
					if (map[1][0] != "X" || map[1][0] != "O")
						map[1][0] = "O";
				}
				if (choice == "MM")
				{
					if (map[1][1] != "X" || map[1][1] != "O")
						map[1][1] = "O";
				}
				if (choice == "MR")
				{
					if (map[1][2] != "X" || map[1][2] != "O")
						map[1][2] = "O";
				}
				if (choice == "BL")
				{
					if (map[2][0] != "X" || map[2][0] != "O")
						map[2][0] = "O";
				}
				if (choice == "BM")
				{
					if (map[2][1] != "X" || map[2][1] != "O")
						map[2][1] = "O";
				}
				if (choice == "BR")
				{
					if (map[2][2] != "X" || map[2][2] != "O")
						map[2][2] = "O";
				}

				playerTurn = 1;
				turnCount++;
			}
			
		}
	}

}

void eulasProblem()
{
	int sum = 0;

	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			sum += 3;
		}
		if (i % 5 == 0)
		{
			sum += 5;
		}

	}

	cout << endl << endl << sum << endl << endl;
	
}

void marioBeep()
{
	_beep(330, 100); _sleep(100);
	_beep(330, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(330, 100); _sleep(300);
	_beep(392, 100); _sleep(700);
	_beep(196, 100); _sleep(700);
	_beep(262, 300); _sleep(300);
	_beep(196, 300); _sleep(300);
	_beep(164, 300); _sleep(300);
	_beep(220, 300); _sleep(100);
	_beep(246, 100); _sleep(300);
	_beep(233, 200);
	_beep(220, 100); _sleep(300);
	_beep(196, 100); _sleep(150);
	_beep(330, 100); _sleep(150);
	_beep(392, 100); _sleep(150);
	_beep(440, 100); _sleep(300);
	_beep(349, 100); _sleep(100);
	_beep(392, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(100);
	_beep(247, 100); _sleep(500);
	_beep(262, 300); _sleep(300);
	_beep(196, 300); _sleep(300);
	_beep(164, 300); _sleep(300);
	_beep(220, 300); _sleep(100);
	_beep(246, 100); _sleep(300);
	_beep(233, 200);
	_beep(220, 100); _sleep(300);
	_beep(196, 100); _sleep(150);
	_beep(330, 100); _sleep(150);
	_beep(392, 100); _sleep(150);
	_beep(440, 100); _sleep(300);
	_beep(349, 100); _sleep(100);
	_beep(392, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(100);
	_beep(247, 100); _sleep(900);
	_beep(392, 100); _sleep(100);
	_beep(370, 100); _sleep(100);
	_beep(349, 100); _sleep(100);
	_beep(311, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(207, 100); _sleep(100);
	_beep(220, 100); _sleep(100);
	_beep(262, 100); _sleep(300);
	_beep(220, 100); _sleep(100);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(500);
	_beep(392, 100); _sleep(100);
	_beep(370, 100); _sleep(100);
	_beep(349, 100); _sleep(100);
	_beep(311, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(523, 100); _sleep(300);
	_beep(523, 100); _sleep(100);
	_beep(523, 100); _sleep(1100);
	_beep(392, 100); _sleep(100);
	_beep(370, 100); _sleep(100);
	_beep(349, 100); _sleep(100);
	_beep(311, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(207, 100); _sleep(100);
	_beep(220, 100); _sleep(100);
	_beep(262, 100); _sleep(300);
	_beep(220, 100); _sleep(100);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(500);
	_beep(311, 300); _sleep(300);
	_beep(296, 300); _sleep(300);
	_beep(262, 300); _sleep(1300);
	_beep(262, 100); _sleep(100);
	_beep(262, 100); _sleep(300);
	_beep(262, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(300);
	_beep(330, 200); _sleep(50);
	_beep(262, 200); _sleep(50);
	_beep(220, 200); _sleep(50);
	_beep(196, 100); _sleep(700);
	_beep(262, 100); _sleep(100);
	_beep(262, 100); _sleep(300);
	_beep(262, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(100);
	_beep(330, 100); _sleep(700);
	_beep(440, 100); _sleep(300);
	_beep(392, 100); _sleep(500);
	_beep(262, 100); _sleep(100);
	_beep(262, 100); _sleep(300);
	_beep(262, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(294, 100); _sleep(300);
	_beep(330, 200); _sleep(50);
	_beep(262, 200); _sleep(50);
	_beep(220, 200); _sleep(50);
	_beep(196, 100); _sleep(700);
	/*Intro*/
	_beep(330, 100); _sleep(100);
	_beep(330, 100); _sleep(300);
	_beep(330, 100); _sleep(300);
	_beep(262, 100); _sleep(100);
	_beep(330, 100); _sleep(300);
	_beep(392, 100); _sleep(700);
	_beep(196, 100); _sleep(700);
	_beep(196, 100); _sleep(125);
	_beep(262, 100); _sleep(125);
	_beep(330, 100); _sleep(125);
	_beep(392, 100); _sleep(125);
	_beep(523, 100); _sleep(125);
	_beep(660, 100); _sleep(125);
	_beep(784, 100); _sleep(575);
	_beep(660, 100); _sleep(575);
	_beep(207, 100); _sleep(125);
	_beep(262, 100); _sleep(125);
	_beep(311, 100); _sleep(125);
	_beep(415, 100); _sleep(125);
	_beep(523, 100); _sleep(125);
	_beep(622, 100); _sleep(125);
	_beep(830, 100); _sleep(575);
	_beep(622, 100); _sleep(575);
	_beep(233, 100); _sleep(125);
	_beep(294, 100); _sleep(125);
	_beep(349, 100); _sleep(125);
	_beep(466, 100); _sleep(125);
	_beep(587, 100); _sleep(125);
	_beep(698, 100); _sleep(125);
	_beep(932, 100); _sleep(575);
	_beep(932, 100); _sleep(125);
	_beep(932, 100); _sleep(125);
	_beep(932, 100); _sleep(125);
	_beep(1046, 675);
}
/*
##########################
##ask ian about pointers##
##########################
*/








void battleArena()
{
	
	Player p1;
	
	bool endGame = false;

	//const int amountOfEnemys;

	cout << "Player's 1 name \n";

	getline(cin, p1.name);

	cout << "\nHow Many Enemies\n";
	char temp;
	cin >> temp;
	Enemy* enemies = NULL;
	int amountOfEnemys = (int)temp;
	enemies = new Enemy[amountOfEnemys];


	int* arr = NULL;
	arr = new int[amountOfEnemys];

	for (int i = 0; i < amountOfEnemys; i++)
	{
		arr[i] = enemies[i].health;
	}

	BubbleSort(arr, amountOfEnemys);
	


	while (endGame == false)
	{
		p1.PrintInfo();
		
	}


	
	

}



void main()
{
	//seed random based on program start time
	srand( time(NULL) );


	
	cout << "1: Hello World" << endl << "2: Swap Numbers" << endl << "3: Black Jack" << endl << "4: Graph Calculator" << endl << "5: TicTacToe" << endl << "6: Eulas Problem" << endl << "7: Mario In Beeps\n8: Random Maze\n9: Exit\n" ;

		int choice = 0;

		cin >> choice;

		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	
			switch (choice)
			{
			case 1:
			HelloWorld();
			break;

			case 2:
			SwapNumbers();
			break;


			case 3:
			BlackJack();
			break;


			case 4:
			graphCalaculator();
			break;


			case 5:
			TicTacToe();
			break;

			case 6:
			eulasProblem();
			break;

			case 7:
			marioBeep();
			break;

			case 8:
			battleArena();
			break;

			case 9:
			return;
			break;

			}

		
		main();
}

