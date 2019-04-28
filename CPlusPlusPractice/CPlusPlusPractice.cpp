#include "pch.h"
#include <iostream>
#include "src/binaryRep.h"
int main()
{

	problem* newProblem = new binaryRep();
	newProblem->display();

	newProblem->solve();

	delete newProblem;

}