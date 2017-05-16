typedef struct XYZ_Vectors {
  int x,y,z;
  char vstring[256];
} XYZvector;

XYZvector NewXYZVector(int coordX, int coordY, int coordZ);
XYZvector NewNullVector();
XYZvector UnitVector(char UnitChar);
XYZvector VectorSum(XYZvector Vector1, XYZvector Vector2);
XYZvector VectorSub(XYZvector Vector1, XYZvector Vector2);
XYZvector VectorNumMultiply(XYZvector Vector1, int num);
int DotProduct(XYZvector Vector1, XYZvector Vector2);
XYZvector VectorProduct(XYZvector Vector1, XYZvector Vector2);
int AreEqual (XYZvector Vector1, XYZvector Vector2);
