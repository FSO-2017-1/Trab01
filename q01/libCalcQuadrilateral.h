#ifndef CALCULATE_H_INCLUDED
#define CALCULATE_H_INCLUDED
#include <stdbool.h>

double calc_side_quadrilateral(Cartesian_point cartesian_point1, Cartesian_point cartesian_point2);
double calc_area_quadrilateral(Quadrilateral *quadrilateral);
bool is_conv_quadrilateral(Quadrilateral *quadrilateral);

#endif
