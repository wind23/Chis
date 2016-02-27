#include "pattern_hash.h"
int chis::pattern_map[1 << 13] =
{
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 2, 0, 2, 2, 4,
	0, 2, 2, 4, 2, 4, 4, 6, 0, 2, 2, 4, 2, 4, 4, 6, 2, 4, 4, 6,
	4, 6, 6, 8, -1, 0, 1, 2, 1, 2, 3, 4, 1, 2, 3, 4, 3, 4, 5, 6,
	1, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8, 0, 0, 2, 2,
	2, 2, 4, 4, 2, 2, 4, 4, 4, 4, 6, 6, 2, 2, 4, 4, 4, 4, 6, 6,
	4, 4, 6, 6, 6, 6, 8, 8, -1, 0, 1, 2, 1, 2, 3, 4, 1, 2, 3, 4,
	3, 4, 5, 6, 1, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8,
	1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 3, 3, 4, 4,
	5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 0, -1, 1, 2, 2, 2, 3, 4,
	2, 2, 3, 4, 4, 4, 5, 6, 2, 2, 3, 4, 4, 4, 5, 6, 4, 4, 5, 6,
	6, 7, 7, 8, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6,
	4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, -1, 0, 1, 2,
	1, 2, 3, 4, 1, 2, 3, 4, 3, 4, 5, 6, 1, 2, 3, 4, 3, 4, 5, 6,
	3, 4, 5, 6, 5, 6, 7, 8, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4,
	5, 5, 6, 6, 3, 3, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8,
	1, -1, 1, 2, 2, 2, 3, 4, 3, 3, 3, 4, 4, 4, 5, 6, 3, 3, 3, 4,
	4, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8, 3, 3, 3, 3, 4, 4, 4, 4,
	5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7,
	8, 8, 8, 8, 0, -1, -1, -1, 1, 2, 3, 4, 2, 2, 3, 4, 3, 4, 5, 6,
	2, 2, 3, 4, 3, 4, 5, 6, 4, 4, 5, 6, 5, 6, 7, 8, 2, 2, 2, 2,
	3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 6, 6, 4, 4, 4, 4, 5, 5, 6, 6,
	6, 6, 7, 7, 7, 7, 8, 8, 2, -1, 2, -1, 2, 2, 3, 4, 4, 4, 4, 4,
	4, 4, 5, 6, 4, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 7, 6, 7, 7, 8,
	4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, -1, 0, 1, 2, 1, 2, 3, 4,
	1, 2, 3, 4, 3, 4, 5, 6, 1, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6,
	5, 6, 7, 8, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6,
	3, 3, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 1, -1, 1, 2,
	2, 2, 3, 4, 3, 3, 3, 4, 4, 4, 5, 6, 3, 3, 3, 4, 4, 4, 5, 6,
	5, 5, 5, 6, 6, 7, 7, 8, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5,
	6, 6, 6, 6, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8,
	1, -1, -1, -1, 1, 2, 3, 4, 2, 2, 3, 4, 3, 4, 5, 6, 3, 3, 3, 4,
	3, 4, 5, 6, 4, 4, 5, 6, 5, 6, 7, 8, 3, 3, 3, 3, 3, 3, 4, 4,
	4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7,
	7, 7, 8, 8, 3, -1, 3, -1, 3, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6,
	5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 6, 7, 7, 8, 5, 5, 5, 5,
	5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 0, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4,
	3, 4, 5, 6, 2, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8,
	2, 2, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 4, 4, 4, 4,
	5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 2, -1, 2, -1, 2, -1, 2, -1,
	3, 3, 3, 4, 4, 4, 5, 6, 4, 4, 4, 4, 4, 4, 5, 6, 5, 5, 5, 6,
	6, 7, 7, 8, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6,
	6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 2, -1, -1, -1,
	2, -1, -1, -1, 2, 2, 3, 4, 3, 4, 5, 6, 4, 4, 4, 4, 4, 4, 5, 6,
	4, 4, 5, 6, 5, 6, 7, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 7, 7, 7, 7, 8, 8,
	4, -1, 4, -1, 4, -1, 4, -1, 4, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 6,
	6, 6, 6, 7, 6, 6, 6, 7, 6, 7, 7, 8, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, -1, 0, 1, 2, 1, 2, 3, 4, 1, 2, 3, 4, 3, 4, 5, 6,
	1, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8, 1, 1, 2, 2,
	3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 3, 3, 4, 4, 5, 5, 6, 6,
	5, 5, 6, 6, 7, 7, 8, 8, 1, -1, 1, 2, 2, 2, 3, 4, 3, 3, 3, 4,
	4, 4, 5, 6, 3, 3, 3, 4, 4, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8,
	3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5,
	6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 1, -1, -1, -1, 1, 2, 3, 4,
	2, 2, 3, 4, 3, 4, 5, 6, 3, 3, 3, 4, 3, 4, 5, 6, 4, 4, 5, 6,
	5, 6, 7, 8, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 6, 6,
	5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 3, -1, 3, -1,
	3, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 5, 5, 5, 5, 5, 5, 5, 6,
	6, 6, 6, 7, 6, 7, 7, 8, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6,
	6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8,
	1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 3, 4, 5, 6, 2, 2, 3, 4,
	3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8, 3, 3, 3, 3, 3, 3, 4, 4,
	3, 3, 4, 4, 5, 5, 6, 6, 4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6,
	7, 7, 8, 8, 3, -1, 3, -1, 3, -1, 3, -1, 3, 3, 3, 4, 4, 4, 5, 6,
	4, 4, 4, 4, 4, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7,
	7, 7, 7, 7, 8, 8, 8, 8, 3, -1, -1, -1, 3, -1, -1, -1, 3, 2, 3, 4,
	3, 4, 5, 6, 4, 4, 4, 4, 4, 4, 5, 6, 4, 4, 5, 6, 5, 6, 7, 8,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6,
	6, 6, 7, 7, 6, 6, 7, 7, 7, 7, 8, 8, 5, -1, 5, -1, 5, -1, 5, -1,
	5, 4, 4, 4, 5, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 7,
	6, 7, 7, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 3, 4, 5, 6,
	3, 4, 5, 6, 5, 6, 7, 8, 2, 2, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4,
	5, 5, 6, 6, 3, 3, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8,
	2, -1, 2, -1, 2, -1, 2, -1, 3, -1, 3, -1, 4, -1, 4, -1, 3, 3, 3, 4,
	4, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7,
	8, 8, 8, 8, 2, -1, -1, -1, 2, -1, -1, -1, 2, -1, -1, -1, 2, -1, -1, -1,
	3, 3, 3, 4, 3, 4, 5, 6, 4, 4, 5, 6, 5, 6, 7, 8, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 5, 5, 5, 5, 6, 6,
	6, 6, 7, 7, 7, 7, 8, 8, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1,
	4, -1, 4, -1, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 6, 7, 7, 8,
	6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 2, -1, -1, -1, -1, -1, -1, -1,
	2, -1, -1, -1, -1, -1, -1, -1, 2, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6,
	5, 6, 7, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 6, 6,
	4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 4, -1, 4, -1,
	4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, 4, 4, 4, 4, 4, 5, 6,
	5, 5, 5, 6, 6, 7, 7, 8, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8,
	4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 4, 4, 4, 4,
	4, 4, 5, 6, 4, 4, 5, 6, 5, 6, 7, 8, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 7, 7,
	7, 7, 8, 8, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1,
	6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 7, 6, 7, 7, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, -1, 0, 1, 2, 1, 2, 3, 4, 1, 2, 3, 4,
	3, 4, 5, 6, 1, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8,
	1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 3, 3, 4, 4,
	5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 1, -1, 1, 2, 2, 2, 3, 4,
	3, 3, 3, 4, 4, 4, 5, 6, 3, 3, 3, 4, 4, 4, 5, 6, 5, 5, 5, 6,
	6, 7, 7, 8, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6,
	5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 1, -1, -1, -1,
	1, 2, 3, 4, 2, 2, 3, 4, 3, 4, 5, 6, 3, 3, 3, 4, 3, 4, 5, 6,
	4, 4, 5, 6, 5, 6, 7, 8, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4,
	5, 5, 6, 6, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8,
	3, -1, 3, -1, 3, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 5, 5, 5, 5,
	5, 5, 5, 6, 6, 6, 6, 7, 6, 7, 7, 8, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8,
	8, 8, 8, 8, 1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 3, 4, 5, 6,
	2, 2, 3, 4, 3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8, 3, 3, 3, 3,
	3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 4, 4, 4, 4, 5, 5, 6, 6,
	5, 5, 6, 6, 7, 7, 8, 8, 3, -1, 3, -1, 3, -1, 3, -1, 3, 3, 3, 4,
	4, 4, 5, 6, 4, 4, 4, 4, 4, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 3, -1, -1, -1, 3, -1, -1, -1,
	3, 2, 3, 4, 3, 4, 5, 6, 4, 4, 4, 4, 4, 4, 5, 6, 4, 4, 5, 6,
	5, 6, 7, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6,
	6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 7, 7, 7, 7, 8, 8, 5, -1, 5, -1,
	5, -1, 5, -1, 5, 4, 4, 4, 5, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7,
	6, 6, 6, 7, 6, 7, 7, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4,
	3, 4, 5, 6, 3, 4, 5, 6, 5, 6, 7, 8, 2, 2, 2, 2, 3, 3, 4, 4,
	3, 3, 4, 4, 5, 5, 6, 6, 3, 3, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6,
	7, 7, 8, 8, 3, -1, 3, -1, 3, -1, 3, -1, 3, -1, 3, -1, 4, -1, 4, -1,
	3, 3, 3, 4, 4, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8, 4, 4, 4, 4,
	4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5, 6, 6, 6, 6,
	7, 7, 7, 7, 8, 8, 8, 8, 3, -1, -1, -1, 3, -1, -1, -1, 3, -1, -1, -1,
	3, -1, -1, -1, 3, 3, 3, 4, 3, 4, 5, 6, 4, 4, 5, 6, 5, 6, 7, 8,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 5, 5,
	5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 5, -1, 5, -1, 5, -1, 5, -1,
	5, -1, 5, -1, 5, -1, 5, -1, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7,
	6, 7, 7, 8, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 3, -1, -1, -1,
	-1, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, 3, 2, 3, 4, 3, 4, 5, 6,
	3, 4, 5, 6, 5, 6, 7, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 6, 6, 4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8,
	5, -1, 5, -1, 5, -1, 5, -1, 5, -1, 5, -1, 5, -1, 5, -1, 5, 4, 4, 4,
	5, 4, 5, 6, 5, 5, 5, 6, 6, 7, 7, 8, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 7, 7, 7, 7, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 5, -1, -1, -1, 5, -1, -1, -1, 5, -1, -1, -1, 5, -1, -1, -1,
	5, 4, 4, 4, 4, 4, 5, 6, 5, 4, 5, 6, 5, 6, 7, 8, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 6, 6, 6, 6, 7, 7,
	6, 6, 7, 7, 7, 7, 8, 8, 7, -1, 7, -1, 7, -1, 7, -1, 7, -1, 7, -1,
	7, -1, 7, -1, 7, 6, 6, 6, 7, 6, 6, 7, 7, 6, 6, 7, 7, 7, 7, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6,
	3, 3, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 2, -1, 2, -1,
	2, -1, 2, -1, 3, -1, 3, -1, 4, -1, 4, -1, 3, -1, 3, -1, 4, -1, 4, -1,
	5, -1, 5, -1, 6, -1, 6, -1, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5,
	6, 6, 6, 6, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8,
	2, -1, -1, -1, 2, -1, -1, -1, 2, -1, -1, -1, 2, -1, -1, -1, 3, -1, -1, -1,
	3, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 3, 3, 3, 3, 3, 3, 4, 4,
	4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7,
	7, 7, 8, 8, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1,
	5, -1, 5, -1, 5, -1, 5, -1, 6, -1, 6, -1, 6, -1, 6, -1, 5, 5, 5, 5,
	5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 2, -1, -1, -1, -1, -1, -1, -1, 2, -1, -1, -1,
	-1, -1, -1, -1, 2, -1, -1, -1, -1, -1, -1, -1, 2, -1, -1, -1, -1, -1, -1, -1,
	3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 4, 4, 4, 4,
	5, 5, 6, 6, 5, 5, 6, 6, 7, 7, 8, 8, 4, -1, 4, -1, 4, -1, 4, -1,
	4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 5, -1, 5, -1,
	6, -1, 6, -1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6,
	6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 4, -1, -1, -1,
	4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1,
	4, -1, -1, -1, 4, -1, -1, -1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 7, 7, 7, 7, 8, 8,
	6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 7, -1, 7, -1,
	7, -1, 7, -1, 7, -1, 7, -1, 7, -1, 7, -1, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, 2, 2, 2,
	3, 3, 4, 4, 3, 3, 4, 4, 5, 5, 6, 6, 3, 3, 4, 4, 5, 5, 6, 6,
	5, 5, 6, 6, 7, 7, 8, 8, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1,
	4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 4, -1, 5, -1, 5, -1, 6, -1, 6, -1,
	4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5,
	6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 4, -1, -1, -1, 4, -1, -1, -1,
	4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1, 4, -1, -1, -1,
	4, -1, -1, -1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 6, 6,
	5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 6, -1, 6, -1,
	6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1,
	7, -1, 7, -1, 7, -1, 7, -1, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8,
	4, -1, -1, -1, -1, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, 4, -1, -1, -1,
	-1, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 5, 5, 6, 6, 4, 4, 4, 4, 5, 5, 6, 6, 5, 5, 6, 6,
	7, 7, 8, 8, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1,
	6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 6, -1, 7, -1, 7, -1, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 6, 6, 6, 6, 7, 7, 7, 7,
	7, 7, 7, 7, 8, 8, 8, 8, 6, -1, -1, -1, 6, -1, -1, -1, 6, -1, -1, -1,
	6, -1, -1, -1, 6, -1, -1, -1, 6, -1, -1, -1, 6, -1, -1, -1, 6, -1, -1, -1,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 6, 6, 6, 6,
	6, 6, 7, 7, 6, 6, 7, 7, 7, 7, 8, 8, 8, -1, 8, -1, 8, -1, 8, -1,
	8, -1, 8, -1, 8, -1, 8, -1, 8, -1, 8, -1, 8, -1, 8, -1, 8, -1, 8, -1,
	8, -1, 8, -1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, -1,
};
//4100