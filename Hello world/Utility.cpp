#include "Utility.h"
#include <conio.h>

std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

double GetMilliseconds()
{
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	double ms = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count();
	begin = end;

	return ms / 1000000.0;
}


//	http://www.daniweb.com/software-development/cpp/code/216732
//	http://www.codingforums.com/archive/index.php/t-100973.html
char getKeyPress()
{
	char key = 127;
	key = _getch();
	return key;
}

void PlayNote(char a_letter)
{
	_beep(400 + (a_letter - 'A') * 10, 300);
}

