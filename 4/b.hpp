#pragma once

#include "a.hpp"

class B : public A {
public:
	B();
	virtual void increment();
	virtual void decrement();
	virtual int get();
private:
	int x;
};

