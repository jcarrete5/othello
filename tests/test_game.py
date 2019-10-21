from __future__ import annotations
# from typing import TYPE_CHECKING
import pytest
from othello.game import Board, BoardState, IllegalMoveError
from othello.player import Color
from othello import bitboard as bb


def test_place_and_capture():
    board = Board(BoardState())
    pos = bb.Position(0, 0)
    with pytest.raises(IllegalMoveError):
        board.place(Color.WHITE, pos)
    # TODO more tests
