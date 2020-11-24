#include "app.h"

#define N 49

struct {
	char *s;
	int italic;
} symbol_name_tab[N] = {

	{"Alpha",	0},
	{"Beta",	0},
	{"Gamma",	0},
	{"Delta",	0},
	{"Epsilon",	0},
	{"Zeta",	0},
	{"Eta",		0},
	{"Theta",	0},
	{"Iota",	0},
	{"Kappa",	0},
	{"Lambda",	0},
	{"Mu",		0},
	{"Nu",		0},
	{"Xi",		0},
	{"Omicron",	0},
	{"Pi",		0},
	{"Rho",		0},
	{"Sigma",	0},
	{"Tau",		0},
	{"Upsilon",	0},
	{"Phi",		0},
	{"Chi",		0},
	{"Psi",		0},
	{"Omega",	0},

	{"alpha",	1},
	{"beta",	1},
	{"gamma",	1},
	{"delta",	1},
	{"epsilon",	1},
	{"zeta",	1},
	{"eta",		1},
	{"theta",	1},
	{"iota",	1},
	{"kappa",	1},
	{"lambda",	1},
	{"mu",		1},
	{"nu",		1},
	{"xi",		1},
	{"omicron",	1},
	{"pi",		1},
	{"rho",		1},
	{"sigma",	1},
	{"tau",		1},
	{"upsilon",	1},
	{"phi",		1},
	{"chi",		1},
	{"psi",		1},
	{"omega",	1},

	{"hbar",	0},
};

int
emit_symbol_fragment(char *name, int k)
{
	int char_num, i, n;
	char *s;

	for (i = 0; i < N; i++) {
		s = symbol_name_tab[i].s;
		n = (int) strlen(s);
		if (strncmp(name + k, s, n) == 0)
			break;
	}

	if (i == N) {
		emit_italic_char(name[k]);
		return k + 1;
	}

	char_num = i + 128;

	if (symbol_name_tab[i].italic)
		emit_italic_char(char_num);
	else
		emit_roman_char(char_num);

	return k + n;
}
