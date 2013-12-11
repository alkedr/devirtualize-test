#pragma once

class A {
public:
	virtual ~A();

	virtual void increment() = 0;
	virtual void decrement() = 0;
	virtual int get() = 0;
};

