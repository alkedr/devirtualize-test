class A {
public:
	virtual ~A() {
	}

	virtual void increment() = 0;
	virtual void decrement() = 0;
	virtual int get() = 0;
};

class B : public A {
public:
	B() : x(0) {
	}
	virtual void increment() {
		x++;
	}
	virtual void decrement() {
		x--;
	}
	virtual int get() {
		return x;
	}
private:
	int x;
};


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
