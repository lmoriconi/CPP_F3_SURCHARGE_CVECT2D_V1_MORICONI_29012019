#include <stdio.h>
#include <stdlib.h>
#include "CVect2D.h"

int main() {

	CVect2D a(1.0f, 2.0f);
	CVect2D b(1.0f, 2.0f);
	CVect2D c;
	a.affiche();
	b.affiche();
	c = a + b;
	c.affiche();
	c = a + b + c;
	c.affiche();

	system("pause");

	return 0;
}