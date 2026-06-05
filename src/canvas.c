#include <stdio.h>
#include "canvas.h"
 void Canvas_initialization(char canvas[ROWS][COLS]){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;i<COLS;j++){
            canvas[i][j]=' ';
    }
 }
}
void Canvas_display(char canvas[ROWS][COLS]){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            printf("%c",canvas[i][j]);
    }
    printf("\n");
 }
}