#include <stdio.h>
#include "editor.h"
#include "canvas.h"
static Object read_object(int type) {
    Object o;
    o.type = type;
    if (type == LINE || type == RECTANGLE) {
        printf("Enter x1 y1 x2 y2: ");
        scanf("%d %d %d %d", &o.x1, &o.y1, &o.x2, &o.y2);
    } else if (type == CIRCLE) {
        printf("Enter cx cy radius: ");
        scanf("%d %d %d", &o.x1, &o.y1, &o.rad);
    } else if (type == TRIANGLE) {
        printf("Enter x1 y1 x2 y2 x3 y3: ");
        scanf("%d %d %d %d %d %d", &o.x1, &o.y1, &o.x2, &o.y2, &o.x3, &o.y3);
    }
    return o;
}

int main()
{
    char canvas[ROWS][COLS];
    int choice;
    Canvas_initialization(canvas);
    while(1){
      printf("\n===2d graphics editor==\n");
    printf("\n1. Add line\n");
    printf("\n2. Add rectangle\n");
    printf("\n3. Add circle\n");
    printf("\n4. Add triangle\n");
    printf("\n5. Delete object\n");
    printf("\n6. Display canvas\n");
    printf("\n7. Modify object\n");
    printf("\n8. List Objects\n");
    printf("\n9. Clear Canvas\n");
    printf("\n0. Exit\n");
    printf("\nEnter the choice\n");
        scanf("%d",&choice);
        Object obj;
        int idx,type;
        switch (choice){
             case 1:
                obj = read_object(LINE);
                add(obj);
                redraw(canvas);
                printf("Line added.\n");
                break;
            case 2:
                obj = read_object(RECTANGLE);
                add(obj);
                redraw(canvas);
                printf("Rectangle added.\n");
                break;
            case 3:
                obj = read_object(CIRCLE);
                add(obj);
                redraw(canvas);
                printf("Circle added.\n");
                break;
            case 4:
                obj = read_object(TRIANGLE);
                add(obj);
                redraw(canvas);
                printf("Triangle added.\n");
                break;
            case 5:
                deleteobj();
                redraw(canvas);
                break;
            case 6:
                Canvas_display(canvas);
                break;
            case 7:
                if (getObjectCount() == 0) {
                    printf("No objects to modify.\n");
                    break;
                }
                list_objects();
                printf("Enter object number to modify (1-%d): ", getObjectCount());
                scanf("%d", &idx);
                printf("New type (1-LINE, 2-RECT, 3-CIRCLE, 4-TRI): ");
                scanf("%d", &type);
                obj = read_object(type);
                modify_at(idx, obj);
                redraw(canvas);
                printf("Object modified.\n");
                break;
            case 8:
                list_objects();
                break;
            case 9:
                clear_canvas(canvas);
                reset_objects();
                printf("Canvas cleared.\n");
               break;
            case 0:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
