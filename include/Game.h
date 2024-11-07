#ifndef GAME_H
#define GAME_H

#include "Board.h"

class Game
{
public:
    Game();
    void start();
    void reset();
    bool isGameOver();

private:
    Board board;
};

#endif // GAME_H