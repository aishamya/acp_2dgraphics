#include <stdio.h>
#include "editor.h"
#include "shapes.h"
#include "canvas.h"
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
     else
        printf("Object limit (%d) reached.\n", MAX);
}

void deleteobj() {
    if(count == 0){ printf("No objects to delete.\n");
        return;
    }
    const char *names[] = {"", "LINE", "RECTANGLE", "CIRCLE", "TRIANGLE"};
    printf("\nObjects on canvas:\n");
    for (int i = 0; i < count; i++) {
        Object *o = &objects[i];
        printf("  [%d] %s", i + 1, names[o->type]);
        if (o->type == LINE || o->type == RECTANGLE)
            printf(" (%d,%d)-(%d,%d)", o->x1, o->y1, o->x2, o->y2);
        else if (o->type == CIRCLE)
            printf(" center(%d,%d) r=%d", o->x1, o->y1, o->rad);
        else if (o->type == TRIANGLE)
            printf(" (%d,%d)-(%d,%d)-(%d,%d)", o->x1, o->y1, o->x2, o->y2, o->x3, o->y3);
        printf("\n");
    }
    int idx;
    printf("Enter object number to delete (1-%d): ", count);
    scanf("%d", &idx);
    if (idx < 1 || idx > count) {
        printf("Invalid selection.\n");
        return;
    }
    for (int i = idx - 1; i < count - 1; i++)
        objects[i] = objects[i + 1];
    count--;
    printf("Object deleted.\n");
}
void reset_objects() {
    count = 0;
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
    if (count == 0) {
        printf("No objects to modify.\n");
        return;
    }
   
    if (count > 0)
        objects[count - 1] = obj;
}

void modify_at(int idx, Object obj) {
    if (idx < 1 || idx > count) {
        printf("Invalid object number.\n");
        return;
    }
    objects[idx - 1] = obj;
}

void list_objects() {
    if (count == 0) { printf("Canvas is empty.\n"); return; }
    const char *names[] = {"", "LINE", "RECTANGLE", "CIRCLE", "TRIANGLE"};
    printf("\nObjects on canvas:\n");
    for (int i = 0; i < count; i++) {
        Object *o = &objects[i];
        printf("  [%d] %s", i + 1, names[o->type]);
        if (o->type == LINE || o->type == RECTANGLE)
            printf(" (%d,%d)-(%d,%d)", o->x1, o->y1, o->x2, o->y2);
        else if (o->type == CIRCLE)
            printf(" center(%d,%d) r=%d", o->x1, o->y1, o->rad);
        else if (o->type == TRIANGLE)
            printf(" (%d,%d)-(%d,%d)-(%d,%d)", o->x1, o->y1, o->x2, o->y2, o->x3, o->y3);
        printf("\n");
    }
}

  