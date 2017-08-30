#pragma once

namespace TETRIS
{
    const int BLOCK_SIZE = 25.0F;
    const int BLOCK_HALF = BLOCK_SIZE / 2.F;
    const int DEGREE = -90.0F;

    const int MAX_COLS = 10;
    const int MAX_ROWS = 22;

    const int LEFT_LIMIT = 0;
    const int RIGHT_LIMIT = MAX_COLS - 1;
    const int BOTTOM_LIMIT = 0;
    const int TOP_LIMIT = MAX_ROWS - 1;

    const int COLOR_RED = 0;
    const int COLOR_PINK = 1;
    const int COLOR_YELLOW = 2;
    const int COLOR_ORANGE = 3;
    const int COLOR_BLUE = 4;
    const int COLOR_GREEN = 5;
    const int COLOR_SKYBLUE = 6;

    const int RQ_CONTINUE = 800;
    const int RQ_RESTART = 801;
    const int RQ_GAMEOVER = 999;

    namespace DIR 
    { 
        const int LEFT = -1;
        const int BOTTOM = 0;
        const int RIGHT = 1;
    }
}