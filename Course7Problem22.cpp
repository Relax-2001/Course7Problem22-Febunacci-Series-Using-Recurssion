#include <iostream>
#include <iomanip>
using namespace std;


void PrintFebonacciUsingRecursive(short Number  , short Prev1 , short Prev2)
{
	short FebNumber = 0;

	if (Number > 0)
	{
		FebNumber = Prev1 + Prev2;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "  ";

		PrintFebonacciUsingRecursive(Number - 1 ,Prev1 , Prev2);
	}
	
}


int main()
{


	PrintFebonacciUsingRecursive(10  , 0 , 1);

	return 0;
}