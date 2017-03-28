#include "stdio.h"
#include "stdlib.h"
#include "ioQuadrilateral.h"
#include "quadrilateral.h"
#include "libCalcQuadrilateral.h"
#include "stdbool.h"

int main(int argc, char const *argv[]) {

  Quadrilateral *quadrilateral = malloc(sizeof(Quadrilateral));
  get_coordinates(quadrilateral);
  double distancia;

  distancia = calc_side_quadrilateral(quadrilateral->vector[0], quadrilateral->vector[1]);

  bool is_quadrilateral = is_conv_quadrilateral(quadrilateral);

  if (is_quadrilateral){
  	double area = calc_area_quadrilateral(quadrilateral);
  	printf("Area: %lf", area);
  }

  free(quadrilateral);
  return 0;
}
