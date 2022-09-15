#include "main.h"

/**
 * add - add two integer value
 *
 * Return 0
 */
 int add(int n, int n1)
 {
	 int add;
	 add = (n + n1);

	 if (add > 0)
	 {
		 _putchar(add);
		 return (add);
	 }
	 else if (add < 0)
	 {
		 _putchar(-add);
		 return (add);
	 }
	 _putchar('\n');
 }
