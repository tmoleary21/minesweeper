CXX=g++

CXXFLAGS=-std=c++17 -Wall -Wextra -Wpedantic -Werror -Wfatal-errors -Winit-self -Wshadow -Wlogical-op -Wcomment -Wctor-dtor-privacy -Wold-style-cast -D_GLIBCXX_DEBUG -fno-diagnostics-show-option

LSFMLFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

minesweeper: main.o Board.o Cell.o
	$(CXX) $(CXXFLAGS) main.o Board.o Cell.o -o $@ $(LSFMLFLAGS)

executable: main.o Board.o Cell.o
	$(CXX) $(CXXFLAGS) main.o Board.o Cell.o -o minesweeper.exe $(LSFMLFLAGS)

main.o: main.cc 
	$(CXX) $(CXXFLAGS) -c main.cc

Board.o: Board.cc Board.h
	$(CXX) $(CXXFLAGS) -c Board.h Board.cc

Cell.o: Cell.cc Cell.h
	$(CXX) $(CXXFLAGS) -c Cell.h Cell.cc

clean:
	rm -f *.o minesweeper