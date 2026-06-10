#ifndef CANVAS_EDITOR 
#define CANVAS_EDITOR 
#include "canvas.h"
#define LINE 1
#define RECTANGLE 2
#define CIRCLE 3
#define TRIANGLE 4
typedef struct{
    int type;
    int x1,y1,x2,y2;
    int x3,y3;
    int rad;
}Object;
void add(Object obj);
void deleteobj();
void redraw(char canvas[ROWS][COLS]);
void modify(Object obj);
void modify_at(int idx, Object obj);
void list_objects();
int  getObjectCount();
void reset_objects();
#endif
