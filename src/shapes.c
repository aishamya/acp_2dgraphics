#include "shapes.h"
#include "canvas.h"
#include <stdlib.h>
#include <math.h>
void line(char canvas[ROWS][COLS],int x1,int y1,int x2,int y2){
   int dx=abs(x2-x1),dy=abs(y2-y1);
   int sx=(x1<x2)?1:-1;
   int sy=(y1<y2)?1:-1;
   int err=dx-dy;
while(1){
    if(x1>=0&& x1<COLS && y1>=0 &&y1<ROWS)
    canvas[y1][x1]='*';
if(x1==x2 && y1==y2)
break;
int e2=2*err;
if(e2> -dy){err-=dy;x1+=sx;}
if(e2<dx){err+=dx;y1+=sy;}

} }
void rectangle(char canvas[ROWS][COLS],int x1,int y1,int x2,int y2){
   line(canvas,x1,y1,x2,y1);
   line(canvas,x2,y1,x2,y2);
   line(canvas,x2,y2,x1,y2);
   line(canvas,x1,y2,x1,y1);
    }

void circle(char canvas[ROWS][COLS],int cx,int cy,int rad){
   int x = 0, y = rad;
    int d = 3 - 2 * rad;
    #define PLOT(px, py) \
        do { \
            if ((py) >= 0 && (py) < ROWS && (px) >= 0 && (px) < COLS) \
                canvas[(py)][(px)] = '*'; \
        } while (0)

    while (y >= x) {
        PLOT(cx + x, cy + y);
        PLOT(cx - x, cy + y);
        PLOT(cx + x, cy - y);
        PLOT(cx - x, cy - y);
        PLOT(cx + y, cy + x);
        PLOT(cx - y, cy + x);
        PLOT(cx + y, cy - x);
        PLOT(cx - y, cy - x);
        if (d < 0) d += 4 * x + 6;
        else { d += 4 * (x - y) + 10; y--; }
        x++;
    }
    #undef PLOT
}

void triangle(char canvas[ROWS][COLS],int x1,int y1,int x2,int y2,int x3, int y3)
{
   line(canvas,x1,y1,x2,y2);
   line(canvas,x2,y2,x3,y3);
   line(canvas,x3,y3,x1,y1);
}
