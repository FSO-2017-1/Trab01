#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "quadrilateral.h"
#include <stdbool.h>

double calc_side_quadrilateral(Cartesian_point cartesian_point1, Cartesian_point cartesian_point2){
	double distancia;
	double squaredX, squaredY;
	squaredX = pow((cartesian_point2.x - cartesian_point1.x), 2);
	squaredY = pow((cartesian_point2.y - cartesian_point1.y), 2);
	distancia = sqrt(squaredX + squaredY);
	return distancia;
}

bool is_conv_quadrilateral(Quadrilateral *quadrilateral){
	int i = 0;
	double z[4];
	for (i=0; i<4; i++) {
	double dx1, dy1, dx2, dy2;
		dx1 = quadrilateral->vector[i+2].x - quadrilateral->vector[i+1].x;
		dy1 = quadrilateral->vector[i+2].y - quadrilateral->vector[i+1].y;
		dx2 = quadrilateral->vector[i+1].x - quadrilateral->vector[i].x;
		dy2 = quadrilateral->vector[i+1].y - quadrilateral->vector[i].y;
		z[i] = (dx1 * dy2) - (dy1 * dx2);
	}
	printf("%lf\n", z[0]);
	printf("%lf\n", z[1]);
	printf("%lf\n", z[2]);
	printf("%lf\n", z[3]);
	return 0;
}