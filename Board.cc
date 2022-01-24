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
    initCellDimensions();
    initCells();
}

Board::~Board(){
    for(int i = 0; i < height; i++){
            delete[] boardArray[i];
    }
    delete[] boardArray;
}

void Board::initCells(){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            boardArray[i][j].setPosition(j*cellWidth+xpos, i*cellHeight+ypos);
            boardArray[i][j].setSize(cellWidth, cellHeight);
        }
    }
}

void Board::setPosition(int x, int y){
    xpos = x;
    ypos = y;
    initCells();
}

void Board::initCellDimensions(){
    cellWidth = pixelWidth / width;
    cellHeight = pixelHeight / height;
    if(cellWidth < cellHeight){
        //TODO: Top and bottom border on board
        cellHeight = cellWidth;
    }
    else{
        //TODO: Right and left border on board
        cellWidth = cellHeight;
    }
}

sf::Vector2i Board::getCellDimensions() const{
    return sf::Vector2i(cellWidth, cellHeight);
}

void Board::draw(sf::RenderWindow& window) const{
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            boardArray[i][j].draw(window);
        }
    }
}

void checkCell(int x, int y){
    
}

//When clicking an empty cell with value 0
void Board::clearEmptyArea(int /*x*/, int /*y*/){
    
}