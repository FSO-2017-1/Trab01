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
		dx1 = quadrilateral->vector[(i+1)%4].x - quadrilateral->vector[i%4].x;
		dy1 = quadrilateral->vector[(i+1)%4].y - quadrilateral->vector[i%4].y;
		dx2 = quadrilateral->vector[(i+2)%4].x - quadrilateral->vector[(i+1)%4].x;
		dy2 = quadrilateral->vector[(i+2)%4].y - quadrilateral->vector[(i+1)%4].y;
		z[i] = (dx1 * dy2) - (dy1 * dx2);
	}

	//Melhorar essa verificação
	if (z[0] == 0 && z[1] == 0 && z[2] == 0 && z[3] == 0){
		printf("Não convexo\n");
		return false;
	}else if (z[0] <= 0 && z[1] <= 0 && z[2] <= 0 && z[3] <= 0){
		printf("Quadrilatero convexo\n");
		return true;
	}else if (z[0] >= 0 && z[1] >= 0 && z[2] >= 0 && z[3] >= 0){
		printf("Quadrilatero convexo\n");
		return true;
	}
	else{
		printf("Não convexo\n");
		return false;
	}
}

double calc_area_quadrilateral(Quadrilateral *quadrilateral){
	int i = 0;
	double partialArea = 0;
	for (i=0; i < 4; i++){
		double determinant = quadrilateral->vector[i].x * quadrilateral->vector[(i+1)%4].y;
		double determinant2 = quadrilateral->vector[i].y * quadrilateral->vector[(i+1)%4].x;
		partialArea = partialArea + (determinant - determinant2);
	}
	double area = partialArea/2;
	return area;
}