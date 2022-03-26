#include <stdio.h>

enum { SchemeNorm, SchemeSel, SchemeHid }; /* color schemes*/

typedef struct {
	const char *class;
	const char *instance;
	const char *title;
	unsigned int tags;
	int isfloating;
	int isterminal;
	int noswallow;
	int monitor;
} Rule;
