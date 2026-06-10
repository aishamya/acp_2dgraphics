#include <stdio.h>
#include "canvas.h"

void Canvas_initialization(char canvas[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            canvas[i][j] = '_';
}
void Canvas_display(char canvas[ROWS][COLS]) {
    int i, j;
    for (j = 0; j <=COLS + 2; j++) printf("-");
    printf("\n");
    for (i = 0; i < ROWS; i++) {
        printf("|");
        for (j = 0; j < COLS; j++)
            printf("%c", canvas[i][j]);
        printf("|\n");
    }
    for (j = 0; j < COLS + 2; j++) printf("-");
    printf("\n(showing viewport of %dx%d canvas)\n", ROWS, COLS);
}

void clear_canvas(char canvas[ROWS][COLS]) {
    Canvas_initialization(canvas);
}
