#ifndef MINESWEEPERBOARD_INCLUDED
#define MINESWEEPERBOARD_INCLUDED

#include <SFML/Graphics.hpp>
#include "Cell.h"

class Board{
  private:
    int xpos;
    int ypos;
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

    void initCells();
    void setPosition(int x, int y);
    sf::Vector2i getCellDimensions() const;
    void draw(sf::RenderWindow& window) const;
    void clearEmptyArea(int x, int y);
};

#endif /*MINESWEEPERBOARD_INCLUDED*/