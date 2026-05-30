CXX = g++
CXXFLAGS = -Wall -std=c++14

EXEC = program.exe

SRC = main.cc src/ZadKcpp.cc src/Zadania.cc

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)