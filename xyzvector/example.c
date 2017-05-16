#include <stdio.h>
#include "XYZvector.h"

int main() {
	XYZvector VectorA = NewXYZVector(1,2,3),
			  VectorB = NewXYZVector(4,5,6),
              VectorC = NewNullVector(),
			  VectorD = UnitVector('i');
	
	printf("A = %s\nB = %s\nC = %s\nD = %s\n",
			VectorA.vstring, VectorB.vstring, 
			VectorC.vstring, VectorD.vstring);
	
	printf("%s + %s = %s\n",
			VectorA.vstring, VectorB.vstring,
			VectorSum(VectorA, VectorB).vstring);

	printf("%s * %s = %s\n",
			VectorA.vstring, VectorB.vstring,
			VectorProduct(VectorA, VectorB).vstring);

	return 0;
}
