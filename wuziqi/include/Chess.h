//
// Created by jiyangz on 2022/8/18.
//

#ifndef CPP_PROJECTS_CHESS_H
#define CPP_PROJECTS_CHESS_H

// 表示落子位置
struct ChessPos {
    int row;
    int col;
};

typedef enum {
    CHESS_WHITE = -1, // 白子
    CHESS_BLACK = 1, // 黑子
    CHESS_EMPTY = 0
} chess_kind_T;

class Chess {
    void init();

    bool clickBoard(int x, int y, ChessPos *pos); // 有效点击返回真，无效点击返回假
    void chessDown(ChessPos *pos, chess_kind_T kind); // 落子位置 & 落子种类
    int getGradeSize(); // 获取棋盘大小


};


#endif //CPP_PROJECTS_CHESS_H
