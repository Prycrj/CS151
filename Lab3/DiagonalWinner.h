//Team: <REZA>
//Author: <RAYONA>
//Creation: <30.10.2017>
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

bool diagonalWinner()
{
	if (grid[0] == 'T' && grid[4] == 'T' && grid[8] == 'T' || grid[0] == 'S' && grid[4] == 'S' && grid[8] == 'S' ){

      return true ;

	}else if (grid[2] == 'T' && grid[4] == 'T' && grid[6] == 'T' || grid[2] == 'S' && grid[4] == 'O' && grid[6] == 'S') {

      return true;

	} else {
      return false;
	}

}

#endif
