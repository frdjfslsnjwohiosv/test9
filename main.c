#define COLS 10
#define ROWS 10
#include <stdio.h>
#include <stdlib.h>
int main () {
int m[ROWS] [COLS];
    int col = 0;
	int row = 0;
	for (col = 0; row < ROWS; row++) {
	    for (col = 0; col < COLS; col++){
			m[row] [col] = rand ()%200-100;
 		     printf ("%d\t", m[row] [col]);
}
printf("\n");
}
return 0;
}