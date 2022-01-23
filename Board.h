#ifndef MINESWEEPERBOARD_INCLUDED
#define MINESWEEPERBOARD_INCLUDED

#include <SFML/Graphics.hpp>
#include "Cell.h"

class Board{
  private:
    int width;
    int height;
    int pixelWidth;
    int pixelHeight;
    Cell** boardArray;
  public:
    Board() = delete;
    Board(const Board&) = delete;
    Board(int width, int height, int pixelWidth, int pixelHeight);
    ~Board();

    void clearCells(int x, int y);
};

#endif /*MINESWEEPERBOARD_INCLUDED*/