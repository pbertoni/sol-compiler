#include "utils.h"

unsigned int hashString(char* str){
	unsigned int hash = 5381;
	int c;

	while ((c = *str++)){
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return hash;
}
