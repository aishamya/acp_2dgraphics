#include"shapes.h"
void line(char canvas[40][40],int x1,int y1,int x2,int y2){
    int i;
    if(y1==y2){
        for(i=x1;i<=x2;i++){
            canvas[y1][i]='*';
        }
    }
    else if(x1==x2){
        for(i=y1;i<=y2;i++){
            canvas[i][x1]='*';
        }
    }
}
void rectangle(char canvas[40][40],int x,int y,int width,int height){
    int i;
    for(i=x;i<x+width;i++){
        canvas[y][i]='*';
        canvas[y+height-i][i]='*';
    }
    for(i=y;i<y+height;i++){
        canvas[i][x]='*';
        canvas[i][x+width-i][i]='*';
    }
    }

void circle(char canvas[40][40],int x,int y,int rad){
     canvas[y][x]='0';
}
void triangle(char canvas[40][40])