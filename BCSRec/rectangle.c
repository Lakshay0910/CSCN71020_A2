#include "main.h"
void setLength(int input, int* length) { if (input >= 1 && input <= 99) *length = input; }
void setWidth(int input, int* width) { if (input >= 1 && input <= 99) *width = input; }
int  getPerimeter(int* l, int* w) { return 2 * (*l + *w); }
int  getArea(int* l, int* w) { return (*l) * (*w); }
