#include "Game.h"
#include <iostream>

Game::Game()
{
    reset();
}

void Game::start()
{
    while (!isGameOver())
    {
        board.display();
        // 获取用户输入并处理移动
    }
    std::cout << "游戏结束！" << std::endl;
}

void Game::reset()
{
    board.init();
}

bool Game::isGameOver()
{
    return board.gameOver();
}
