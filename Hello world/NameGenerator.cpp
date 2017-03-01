#include "NameGenerator.h"

using namespace std;

std::string GenerateEnemyName()
{

	ifstream myfile("names.txt");

	string NameArray[50] = {};

	int randNum;
	randNum = rand() % 50 + 1;


	if (myfile.is_open())
	{
		int i = 0;
		while(myfile.eof() != true)
		{
			getline(myfile, NameArray[i]);
			i++;
		}
		
		myfile.close();
	}

	else cout << "Unable to open file";
		

	return NameArray[randNum];

}