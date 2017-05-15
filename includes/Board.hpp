#ifndef BOARD_HPP
# define BOARD_HPP

#include "Gomoku.hpp"

class Board
{
	public:
		Board();
		~Board();
		Board(Board& rhs, Board *parent, t_vec2 move, t_Color player);

		// attributes
		char			map[19][19];
		vector<t_vec2>	points;
		int				heuristic;
		int				preheuristic;
		Board*			parent;
		vector<Board*>	next;


		std::vector<t_vec2>	selectedMoves;
		std::vector<t_vec2>			childMoves;
		std::vector<t_vec2>			captures;

		t_vec2			lastMove;
		t_Color			player;
		bool			isVictory;

		int				BlackCaptures;
		int				WhiteCaptures;

		// methods
		// copy overload
		Board			&operator=(const Board& other);
		char			getPoint(t_vec2 at);
		char			getPoint(int y, int x);
		bool			setPoint(t_vec2 at, t_Color color);
		bool 			setPoint(int y, int x, t_Color color);
};

class BoardMove
{
	public:
		BoardMove();

		BoardMove				*prevMove;

		t_vec2					Point;
		int						heuristic;
		std::vector<t_vec2>		Captures;


		std::vector<BoardMove *>	childMoves;
};

#endif
