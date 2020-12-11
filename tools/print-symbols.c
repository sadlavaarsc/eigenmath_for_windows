#include <stdio.h>

int tab[49] = {

0xce91, // Alpha
0xce92, // Beta
0xce93, // Gamma
0xce94, // Delta
0xce95, // Epsilon
0xce96, // Zeta
0xce97, // Eta
0xce98, // Theta
0xce99, // Iota
0xce9a, // Kappa
0xce9b, // Lambda
0xce9c, // Mu
0xce9d, // Nu
0xce9e, // Xi
0xce9f, // Omicron
0xcea0, // Pi
0xcea1, // Rho
0xcea3, // Sigma
0xcea4, // Tau
0xcea5, // Upsilon
0xcea6, // Phi
0xcea7, // Chi
0xcea8, // Psi
0xcea9, // Omega

0xceb1, // alpha
0xceb2, // beta
0xceb3, // gamma
0xceb4, // delta
0xceb5, // epsilon
0xceb6, // zeta
0xceb7, // eta
0xceb8, // theta
0xceb9, // iota
0xceba, // kappa
0xcebb, // lambda
0xcebc, // mu
0xcebd, // nu
0xcebe, // xi
0xcebf, // omicron
0xcf80, // pi
0xcf81, // rho
0xcf83, // sigma
0xcf84, // tau
0xcf85, // upsilon
0xcf86, // phi
0xcf87, // chi
0xcf88, // psi
0xcf89, // omega

0xc4a7, // hbar

};

int
main()
{
	int c, i;

	for (i = 0; i < 49; i++) {
		c = tab[i];
		putchar(c >> 8);
		putchar(c & 0xff);
		putchar(' ');
	}

	putchar('\n');
}
