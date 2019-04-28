#include "pch.h"
#include <iostream>
#include "src/twoSum.h"
int main()
{

	problem* newProblem = new twoSum();
	newProblem->display();

	newProblem->solve();

	delete newProblem;

}