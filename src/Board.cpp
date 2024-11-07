#include "Board.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Board::Board()
{
    init();
}

void Board::init()
{
    grid = std::vector<std::vector<int>>(4, std::vector<int>(4, 0));
    addNewTile();
    addNewTile();
}

void Board::move(int direction)
{
    // 移动逻辑实现
}

bool Board::gameOver()
{
    // 判断是否游戏结束
    return false;
}

void Board::display()
{
    // 显示棋盘
    for (const auto &row : grid)
    {
        for (const auto &tile : row)
        {
            std::cout << tile << "\t";
        }
        std::cout << std::endl;
    }
}

void Board::combineTiles(int direction)
{
    // 组合方块逻辑
}

void Board::addNewTile()
{
    // 随机添加一个新方块
}
