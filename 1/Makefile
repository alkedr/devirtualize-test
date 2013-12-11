SOURCES := test.cpp
CXXFLAGS := -nostartfiles
EXECUTABLES := test-gcc-O0 test-gcc-O1 test-gcc-O2 test-gcc-O3 test-gcc-Os test-clang-O0 test-clang-O1 test-clang-O2 test-clang-O3 test-clang-Os

.SUFFIXES:

test: $(EXECUTABLES)

clean:
	rm -Rf $(EXECUTABLES)


test-gcc%: $(SOURCES) Makefile
	g++ $* $(CXXFLAGS) $(SOURCES) -o $@

test-clang%: $(SOURCES) Makefile
	clang++ $* $(CXXFLAGS) $(SOURCES) -o $@

