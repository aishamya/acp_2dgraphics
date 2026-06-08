#include <stdio.h>
#include "editor.h"
#include "shapes.h"
#define MAX 100
static Object objects[MAX];
static int count = 0;
int getObjectCount() {
    return count;
}

void add(Object obj) {
    if(count < MAX) {
      objects[count++] = obj;
    }
}

void deleteobj() {
    if(count > 0) count--;
}

void redraw(char canvas[ROWS][COLS]) {
    clear_canvas(canvas);
    for(int i = 0; i < count; i++) {
        Object o = objects[i];
        if(o.type == LINE)
            line(canvas, o.x1, o.y1, o.x2, o.y2);
        else if(o.type == RECTANGLE)
           rectangle(canvas, o.x1, o.y1, o.x2, o.y2);
        else if(o.type == CIRCLE)
           circle(canvas, o.x1, o.y1, o.rad);
        else if(o.type == TRIANGLE)
            triangle(canvas, o.x1, o.y1, o.x2, o.y2, o.x3, o.y3);
    }
}

void modify(Object obj) {
    if(count>0) {
    objects[count-1]=obj;
    }
}

  