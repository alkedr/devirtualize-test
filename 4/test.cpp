#include "b.hpp"

extern "C" {

int printf(const char * format, ...);
void exit(int status);

void _start() {
	B b;
	b.increment();
	b.increment();
	b.decrement();
	printf("%d\n", b.get());
	exit(0);
}

}
