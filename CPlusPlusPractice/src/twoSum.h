#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include "problem.h"

class twoSum : public problem
{
public:

	void display() override;

	void solve() override;

private:

	std::vector<unsigned int> givenVector = { 5,9,21,32 };

	std::vector<int> findIndices(const unsigned int& targetNumber);

};

void twoSum::display()
{
	std::cout << "Return the Indices of two numbers in an Array whose sum is equal to a given target (e.g Target 14 is [0,1])?" << std::endl;
	std::cout << "Given array: [";

	for (auto i : givenVector)
	{
		std::cout << i << ",";
	}

	std::cout<< "]" <<std::endl;
}

void twoSum::solve()
{
	unsigned int inputNumber = 0;

	std::cout << "Enter Target: ";
	std::cin >> inputNumber;

	std::vector<int> indicesResult = findIndices(inputNumber);

	std::cout << "Result Indices: ";

	if (indicesResult.size() == 0)
	{
		std::cout << "Unable to find two numbers whose sum adds up to " << inputNumber;
		return;
	}

	for (auto i : indicesResult)
	{
		std::cout << i << ",";
	}
}

std::vector<int> twoSum::findIndices(const unsigned int& targetNumber)
{
	std::vector<int> result;

	std::unordered_map<int, int> hashTable;

	for (size_t i = 0; i < givenVector.size(); i++)
	{
		std::unordered_map<int, int>::iterator it = hashTable.find(givenVector[i]);

		if (it != hashTable.end())
		{
			result.push_back(it->second);
			result.push_back(i);
		}
		else
		{
			hashTable[targetNumber - givenVector[i]] = i;
		}
	}

	return result;
}