#include "editor.h"
int main()
{
    char canvas[ROWS][COLS];
    Canvas_initialization(canvas);
    rectangle(canvas,5,5,10,6);
    line(canvas,2,2,15,2);
    Canvas_display(canvas);
    return 0;
}