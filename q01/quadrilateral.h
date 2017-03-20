#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

typedef struct {
  int x;
  int y;
}Cartesian_point;

typedef struct{
    Cartesian_point vector1;
    Cartesian_point vector2;
    Cartesian_point vector3;
    Cartesian_point vector4;
}Quadrilateral;

#endif
