#include "XYZvector.h"
#include <stdio.h>
#include <string.h>

XYZvector GetString (XYZvector Vector1) {
	snprintf(Vector1.vstring, 256, "(%d,%d,%d)", 
	Vector1.x, Vector1.y, Vector1.z);
	return Vector1;
}

XYZvector NewXYZVector(int coordX, int coordY, int coordZ) {
  XYZvector NewVector;
  NewVector.x = coordX;
  NewVector.y = coordY;
  NewVector.z = coordZ;
  return GetString(NewVector);
}

XYZvector NewNullVector() {
  XYZvector NewVector = NewXYZVector(0,0,0);
  return NewVector;
}

XYZvector UnitVector(char UnitChar) {
  XYZvector NewVector;
  switch (UnitChar) {
    case 'i': NewVector = NewXYZVector(1,0,0); break;
    case 'j': NewVector = NewXYZVector(0,1,0); break;
    case 'k': NewVector = NewXYZVector(0,0,1); break;
	default: printf("Invalid parameter");
  }
  return NewVector;
}

XYZvector VectorSum(XYZvector Vector1, XYZvector Vector2) {
  XYZvector NewVector;
  NewVector.x = Vector1.x + Vector2.x;
  NewVector.y = Vector1.y + Vector2.y;
  NewVector.z = Vector1.z + Vector2.z;
  return GetString(NewVector);
}

XYZvector VectorSub(XYZvector Vector1, XYZvector Vector2) {
  XYZvector NewVector;
  NewVector.x = Vector1.x - Vector2.x;
  NewVector.y = Vector1.y - Vector2.y;
  NewVector.z = Vector1.z - Vector2.z;
  return GetString(NewVector);
}

XYZvector VectorNumMultiply(XYZvector Vector1, int num) {
  XYZvector NewVector;
  NewVector.x = Vector1.x * num;
  NewVector.y = Vector1.y * num;
  NewVector.z = Vector1.z * num;
  return GetString(NewVector);
}

int DotProduct(XYZvector Vector1, XYZvector Vector2) {
  int DotProduct =
  Vector1.x * Vector2.x +
  Vector1.y * Vector2.y +
  Vector1.z * Vector2.z;
  return DotProduct;
}

XYZvector VectorProduct(XYZvector Vector1, XYZvector Vector2) {
  XYZvector NewVector;
  NewVector.x = Vector1.y * Vector2.z - Vector1.z * Vector2.y;
  NewVector.y = Vector1.z * Vector2.x - Vector1.x * Vector2.z;
  NewVector.z = Vector1.x * Vector2.y - Vector1.y * Vector2.x;
  return GetString(NewVector);
}

int AreEqual (XYZvector Vector1, XYZvector Vector2) {
  if (Vector1.x == Vector2.x &&
      Vector1.y == Vector2.y &&
      Vector1.z == Vector2.z)
  return 1;

  else
  return 0;
}
