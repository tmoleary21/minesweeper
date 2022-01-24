#ifndef MINESWEEPERBOARD_INCLUDED
#define MINESWEEPERBOARD_INCLUDED

#include <SFML/Graphics.hpp>
#include "Cell.h"

class Board{
  private:
    int xpos; //Position of top right corner of game board (mine field)
    int ypos;
    int width; //Width/Height of game board in cells
    int height;
    int pixelWidth; //Width/Height of game board in pixels
    int pixelHeight;

    int cellWidth; //Width/Height of each individual cell
    int cellHeight; //TODO: These should always be the same value (squares). Should eliminate need for both
    Cell** boardArray;

    void initCellDimensions(); //initialize cell width/height. Also initializes border if necessary (not complete)

  public:
    Board() = delete;
    Board(const Board&) = delete;
    Board(int width, int height, int pixelWidth, int pixelHeight);
    ~Board();

    void initCells();
    void setPosition(int x, int y);
    sf::Vector2i getCellDimensions() const;
    void draw(sf::RenderWindow& window) const;
    void checkCell(int x, int y);
    void clearEmptyArea(int x, int y);
};

#endif /*MINESWEEPERBOARD_INCLUDED*/