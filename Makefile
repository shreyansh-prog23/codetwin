CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra

codetwin: src/main.cpp
	$(CXX) $(CXXFLAGS) -o codetwin src/main.cpp

clean:
	rm -f codetwin

.PHONY: clean
