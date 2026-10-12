CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra

codetwin: src/main.cpp src/tokenizer.cpp src/tokenizer.h
	$(CXX) $(CXXFLAGS) -o codetwin src/main.cpp src/tokenizer.cpp

test_tokenizer: tests/test_tokenizer.cpp src/tokenizer.cpp src/tokenizer.h
	$(CXX) $(CXXFLAGS) -o test_tokenizer tests/test_tokenizer.cpp src/tokenizer.cpp

test: test_tokenizer
	./test_tokenizer

clean:
	rm -f codetwin test_tokenizer

.PHONY: clean test
