#include "b.hpp"

extern "C" {

int printf(const char * format, ...);
void exit(int status);

void _start() {
	A * a = new B;
	a->increment();
	a->increment();
	a->decrement();
	printf("%d\n", a->get());
	exit(0);
}

}
