#pragma once

class problem
{
public:

	virtual void display() = 0;
	virtual void solve() = 0;
	virtual ~problem() = 0;

private:

};
problem::~problem() {}
