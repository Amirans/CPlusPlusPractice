#pragma once
#include <iostream>
#include "problem.h"

/**
 * Displays the Binary representation of an Integer and returns number of 1s and 0s.
 */


class binaryRep : public problem
{
public:

	void display() override;
	void solve() override;

private:

};

void binaryRep::display()
{
	std::cout << "Displays the Binary representation of an Integer and Returns the number of 1s and 0s" << std::endl;
}

void binaryRep::solve()
{
	int inputNumber = 0;
	std::cout << "Enter an Integer: ";
	std::cin >> inputNumber;

	/* Calculate the Mask */
	const int maskSize = CHAR_BIT * sizeof(unsigned) - 1;
	const int mask = 1 << maskSize;

	int onesNum = 0, zerosNum = 0;

	std::cout << "Binary Representation : ";
	for (int i = 0; i < maskSize + 1; i++)
	{
		if (inputNumber & mask)
		{
			std::cout << 1;
			onesNum++;
		}
		else
		{
			std::cout << 0;
			zerosNum++;
		}

		inputNumber <<= 1;
	}

	std::cout << std::endl << "1s :" << onesNum << " | 0s:" << zerosNum;
}
