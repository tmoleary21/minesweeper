#include "Board.h"
#include "Cell.h"

Board::Board(int w, int h, int pw, int ph){
    xpos = 0;
    ypos = 0;
    width = w;
    height = h;
    pixelWidth = pw;
    pixelHeight = ph;
    boardArray = new Cell*[height];
    for(int i = 0; i < height; i++){
        boardArray[i] = new Cell[width];
    }
    initCells();
}

Board::~Board(){
    for(int i = 0; i < height; i++){
            delete[] boardArray[i];
    }
    delete[] boardArray;
}

void Board::initCells(){
    sf::Vector2i cellDims = getCellDimensions();
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            boardArray[i][j].setPosition(j*cellDims.x+xpos, i*cellDims.y+ypos);
            boardArray[i][j].setSize(cellDims.x, cellDims.y);
        }
    }
}

void Board::setPosition(int x, int y){
    xpos = x;
    ypos = y;
    initCells();
}

sf::Vector2i Board::getCellDimensions() const{
    int cellWidth = pixelWidth / width;
    int cellHeight = pixelHeight / height;
    if(cellWidth < cellHeight){
        //TODO: Top and bottom border on board
        cellHeight = cellWidth;
    }
    else{
        //TODO: Right and left border on board
        cellWidth = cellHeight;
    }
    return sf::Vector2i(cellWidth, cellHeight);
}

void Board::draw(sf::RenderWindow& window) const{
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            boardArray[i][j].draw(window);
        }
    }
}

//When clicking an empty cell with value 0
void Board::clearEmptyArea(int /*x*/, int /*y*/){
    
}