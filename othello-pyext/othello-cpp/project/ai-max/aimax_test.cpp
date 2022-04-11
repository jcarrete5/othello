#include "aimax.h"
#include "board.h"

#include "gtest/gtest.h"

using namespace othello;

TEST(AIMax, Simple) {
    othello::GameBoard board;
    std::cout << board << std::endl;
    Position move;

    move = othello::AIMax::best_move_<BLACK>(board, 3);
    board.place_piece(BLACK, move);

    move = othello::AIMax::best_move_<WHITE>(board, 3);
    board.place_piece(WHITE, move);

    move = othello::AIMax::best_move_<BLACK>(board, 3);
    board.place_piece(BLACK, move);

    std::cout << board << std::endl;
}
