#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

typedef struct {
  double x;
  double y;
}Cartesian_point;

typedef struct{
    Cartesian_point vector[4];
}Quadrilateral;

#endif
