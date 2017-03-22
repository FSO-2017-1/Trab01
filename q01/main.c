#include "stdio.h"
#include "stdlib.h"
#include "ioQuadrilateral.h"
#include "quadrilateral.h"

int main(int argc, char const *argv[]) {

  Quadrilateral *quadrilateral = malloc(sizeof(Quadrilateral));
  get_coordinates(quadrilateral);
  double distancia;
  distancia = calc_side_quadrilateral(quadrilateral->vector[0], quadrilateral->vector[1]);
  printf("%lf\n", distancia);
  return 0;
}
