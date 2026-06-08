#include "shapes.h"
#include <stdlib.h>
void line(char canvas[100][100],int x1,int y1,int x2,int y2){
   int dx=abs(x2-x1),dy=abs(y2-y1);
   int sx=(x1<x2)?1:-1;
   int sy=(y1<y2)?1:-1;
   int err=dx-dy;
while(1){
    if(x1>=0&& x1<100 && y1>=0 &&y1<100)
    canvas[y1][x1]='*';
if(x1==x2 && y1==y2)
break;
int e2=2*err;
if(e2> -dy){err-=dy;x1+=sx;}
if(e2<dx){err+=dx;y1+=sy;}

} }
void rectangle(char canvas[100][100],int x1,int y1,int x2,int y2){
   line(canvas,x1,y1,x2,y1);
   line(canvas,x2,y1,x2,y2);
   line(canvas,x2,y2,x1,y2);
   line(canvas,x1,y2,x1,y1);
    }

void circle(char canvas[100][100],int x1,int y1,int rad){
    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            int dist=(i-y1)*(i-y1)+(j-x1)*(j-x1);
            if(dist<=rad*rad){
                canvas[i][j]='*';
            }
        }
    }
}
void triangle(char canvas[100][100],int x1,int y1,int x2,int y2,int x3, int y3)
{
   line(canvas,x1,y1,x2,y2);
   line(canvas,x2,y2,x3,y3);
   line(canvas,x3,y3,x1,y1);
}
