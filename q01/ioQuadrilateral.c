#include <stdlib.h>
#include <stdio.h>
#include "ioQuadrilateral.h"
#include "quadrilateral.h"

void get_coordinates(Quadrilateral *quadrilateral){
	scanf("%f\n",&quadrilateral->vector1 );
	printf("%f",quadrilateral->vector1 );
}
