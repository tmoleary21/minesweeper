CXX=g++

CXXFLAGS=-std=c++17 -Wall -Wextra -Wpedantic -Werror -Wfatal-errors -Winit-self -Wshadow -Wlogical-op -Wcomment -Wctor-dtor-privacy -Wold-style-cast -D_GLIBCXX_DEBUG -fno-diagnostics-show-option

minesweeper: main.o
	$(CXX) $(CXXFLAGS) main.o -o $@ -lsfml-graphics -lsfml-window -lsfml-system 

main.o: main.cc 
	$(CXX) $(CXXFLAGS) -c main.cc

clean:
	rm -f *.o minesweeper