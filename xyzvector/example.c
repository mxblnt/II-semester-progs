#include <stdio.h>
#include "XYZvector.h"

int main() {
  XYZvector VectorA = NewXYZVector(1,2,3),
            VectorB = NewXYZVector(4,5,6),
            VectorC = NewNullVector(),
            VectorD = UnitVector('i');

  printf("%s", VectorA.xyzstring);  
}
