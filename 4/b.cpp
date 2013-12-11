#include "b.hpp"

B::B() : x(0) {
}

void B::increment() {
	x++;
}

void B::decrement() {
	x--;
}

int B::get() {
	return x;
}

