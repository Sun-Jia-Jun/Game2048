#include "InputHandler.h"
#include <iostream>

char InputHandler::getInput()
{
    char input;
    std::cout << "请输入移动方向 (w: 上, s: 下, a: 左, d: 右): ";
    std::cin >> input;
    return input;
}
