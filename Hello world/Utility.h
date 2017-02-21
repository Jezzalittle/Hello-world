#pragma once

#include <chrono>
#include <conio.h>
#include <iostream>



//gets milliseconds between this call to the function and the previous call to the function.
//make sure you only call this once every "loop"
extern std::chrono::steady_clock::time_point begin;
double GetMilliseconds();

struct V2
{
	float x;
	float y;
};

void PlayNote(char a_letter);
char getKeyPress();

