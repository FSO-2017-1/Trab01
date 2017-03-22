#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "quadrilateral.h"

double calc_side_quadrilateral(Cartesian_point cartesian_point1, Cartesian_point cartesian_point2){
	double distancia;
	double squaredX, squaredY;
	squaredX = pow((cartesian_point2.x - cartesian_point1.x), 2);
	printf("%lf\n", squaredX);
	squaredY = pow((cartesian_point2.y - cartesian_point1.y), 2);
	printf("%lf\n", squaredY);
	distancia = sqrt(squaredX + squaredY);
	printf("%lf\n", distancia);
	return distancia;
}