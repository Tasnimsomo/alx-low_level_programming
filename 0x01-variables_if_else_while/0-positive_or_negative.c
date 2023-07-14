#include <stdlib.h>
#include <time.h>
/*int main */

/*return: 0;*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n > 0)
       	        printf("%d is a positive\n", n);
        else if(n < 0)
                printf("%d is a negative number\n", n);
	else
	        printf("\n%d is zero\n");
    

	return (0);
}
