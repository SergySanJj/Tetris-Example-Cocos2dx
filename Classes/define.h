#pragma once

namespace TETRIS
{
    static const auto BLOCK_SIZE = 25.0F;
    static const auto BLOCK_HALF = BLOCK_SIZE / 2.F;
    static const auto DEGREE = -90.0F;

    static const auto MAX_COLS = 10;
    static const auto MAX_ROWS = 22;

    static const auto LEFT_LIMIT = 0;
    static const auto RIGHT_LIMIT = MAX_COLS - 1;
    static const auto BOTTOM_LIMIT = 0;
    static const auto TOP_LIMIT = MAX_ROWS - 1;

    static const auto COLOR_RED = 0;
    static const auto COLOR_PINK = 1;
    static const auto COLOR_YELLOW = 2;
    static const auto COLOR_ORANGE = 3;
    static const auto COLOR_BLUE = 4;
    static const auto COLOR_GREEN = 5;
    static const auto COLOR_SKYBLUE = 6;

    const int RQ_START = 800;
    const int RQ_RESTART = 801;
    const int RQ_GAMEOVER = 999;

    namespace DIR 
    { 
        static const auto LEFT = -1;
        static const auto BOTTOM = 0;
        static const auto RIGHT = 1;
    }
}