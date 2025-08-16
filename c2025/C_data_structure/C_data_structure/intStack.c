#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int initialize(IntStack* s, int max) {
	s->ptr = 0;
	if ((s->stk = (int*)malloc(sizeof(int) * max)) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}