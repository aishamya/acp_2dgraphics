#ifndef CANVAS_SHAPES
#define CANVAS_SHAPES
#include "canvas.h"

void line(char canvas[ROWS][COLS], int x1, int y1, int x2, int y2);
void rectangle(char canvas[ROWS][COLS], int x1, int y1, int x2, int y2);
void circle(char canvas[ROWS][COLS], int cx, int cy, int rad);
void triangle(char canvas[ROWS][COLS], int x1, int y1, int x2, int y2, int x3, int y3);

#endif
