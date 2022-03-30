#pragma once

#include "board.h"

#include <optional>

namespace othello {
namespace AIMax {

struct State {
    std::optional<Position> move;
    int value;
};

int evaluate(const Color color, const GameBoard& board);
State _best_move_inner(const Color& color, const GameBoard& board, size_t depth = 0);
Position best_move(const Color& color, const GameBoard& board, size_t depth);

} // namespace AIMax
} // namespace othello
