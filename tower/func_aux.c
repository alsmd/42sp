#include "tower.h"
extern int  NUMBERS_MISSING;
int	succesfully_assigned(field * number, int value)
{
	if (number->number == 0)
	{
		number->number = value;
		number->solvable = -1;
		NUMBERS_MISSING--;
		return (1);
	}
	return (0);
}