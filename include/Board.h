#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board
{
public:
    Board();
    void init();
    void move(int direction); // 方向: 上, 下, 左, 右
    bool gameOver();
    void display();

private:
    std::vector<std::vector<int>> grid;
    void combineTiles(int direction);
    void addNewTile();
};

#endif // BOARD_H