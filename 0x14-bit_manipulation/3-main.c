#include "main.h"
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    unsigned long int n;

	        n = 1024;
		    set_bit(&n, 5);
		        printf("%lu\n", n);
			    n = 2048;
			        set_bit(&n, 200);
				    printf("%lu\n", n);
				        n = 98;
					    set_bit(&n, 0);
					        printf("%lu\n", n);
						    return (0);
}
