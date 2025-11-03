#include "Cell.h"

char Cell::getSymboll() const {
	
	if (isEnemy) {
		return 'E';
	}
	
	return ' ';
}