//Team: <REZA>
//Author: <RAYONA>
//Creation: <30.10.2017>
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner()
{
	if (grid[0] == 'T' && grid[3] == 'T' && grid[6] == 'T' || grid[0] == 'S' && grid[3] == 'S' && grid[6] == 'S' ){

      return true ;

	}else if (grid[1] == 'T' && grid[4] == 'T' && grid[7] == 'T' || grid[1] == 'S' && grid[4] == 'S' && grid[7] == 'S') {

      return true;

	} else if (grid[2] == 'T' && grid[5] == 'T' && grid[8] == 'T' || grid[2] == 'S' && grid[5] == 'S' && grid[8] == 'S') {

      return true;

	}else {
      return false;
	}
return false;
}

#endif
