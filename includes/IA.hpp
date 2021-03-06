#ifndef IA_HPP
# define IA_HPP

#include "Gomoku.hpp"

class IA
{
	public:
		IA();
		~IA();

		//std::vector<Board>	stateExpanding;

		t_vec2			decideMove(t_GameDatas &gameDatas);

		void			generatePossibleBoards(Board *board, t_Color player, t_Color decideMoveFor, bool isFirstDepth);
		void			generateBoardsFromPoint(Board *curBoard, t_vec2 point,
							vector<Board*> &possibleBoards, t_Color player, t_Color decideMoveFor, bool isFirstDepth);
		Board			*alphaBeta(Board *board, int depth, int alpha, int beta, t_Color player,
							t_Color decideMoveFor);

		Board *maxBoard(Board *a, Board *b);
		Board *minBoard(Board *a, Board *b);
//		Board	*alphaBeta2(Board *board, int depth, int alpha, int beta, t_Color player, t_Color decideMoveFor);
};

#endif
