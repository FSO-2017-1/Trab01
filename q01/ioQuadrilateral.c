#include <stdlib.h>
#include <stdio.h>
#include "ioQuadrilateral.h"
#include "quadrilateral.h"

void get_coordinates(Quadrilateral *quadrilateral){
	int n=0;
	for(n=0; n<4; n++){
		scanf("%lf %lf", &quadrilateral->vector[n].x, &quadrilateral->vector[n].y );
	}
}
