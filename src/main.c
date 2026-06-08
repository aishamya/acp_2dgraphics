#include <stdio.h>
#include "editor.h"
#include "canvas.h"

void menu(){
   
}
int main()
{
    char canvas[ROWS][COLS];
    int choice;
    Canvas_initialization(canvas);
    while(1){
        printf("\n2d graphics editor\n");
    printf("\n1.add line\n");
    printf("\n2.add rectangle\n");
    printf("\n3.add circle\n");
    printf("\n4.add triangle\n");
    printf("\n5.delete object\n");
    printf("\n6.dispaly canvas\n");
    printf("\n7.modify object\n");
    printf("\n8.exit\n");
    printf("enter the choice");
        scanf("%d",&choice);
        Object objects;
        switch (choice){
             case 1:
             objects.type=LINE;
             printf("x1 y1 x2 y2:");
             scanf("%d %d %d %d",&objects.x1,&objects.y1,&objects.x2,&objects.y2);
             add(objects);
             redraw(canvas);
              break;
               case 2:
                objects.type=RECTANGLE;
             printf("x1 y1 x2 y2:");
             scanf("%d %d %d %d",&objects.x1,&objects.y1,&objects.x2,&objects.y2);
             add(objects);
             redraw(canvas);
             break;
               case 3:
              objects.type=CIRCLE;
             printf("x1 y1 radius:");
             scanf("%d %d %d",&objects.x1,&objects.y1,&objects.rad);
             add(objects);
             redraw(canvas);
              break;
               case 4:
               objects.type=TRIANGLE;
             printf("x1 y1 x2 y2 x3 y3: ");
             scanf("%d %d %d %d %d %d",&objects.x1,&objects.y1,&objects.x2,&objects.y2,&objects.x3,&objects.y3);
             add(objects);
             redraw(canvas);
              break;
               case 5:
               deleteobj();
                redraw(canvas);
              break;
              case 6:
               Canvas_display(canvas);
              break;
              case 7:
             printf("reenter last object\n");
             printf("(1-LINE,2-RECT,3-CIRCLE,4-TRI):");
             scanf("%d",&objects.type);
             if(objects.type==LINE){
                printf("x1 y1 x2 y2 ");
                scanf("%d %d %d %d",&objects.x1,&objects.y1,&objects.x2,&objects.y2);
             }  
             else if(objects.type==RECTANGLE){
                printf("x1 y1 x2 y2:");
             scanf("%d %d %d %d",&objects.x1,&objects.y1,&objects.x2,&objects.y2);
               }
            else if(objects.type==CIRCLE){
                 printf("x1 y1 radius:");
             scanf("%d %d %d ",&objects.x1,&objects.y1,&objects.rad);
            } 
            else if(objects.type==TRIANGLE){
                 printf("x1 y1 x2 y2 x3 y3: ");
             scanf("%d %d %d %d %d %d",&objects.x1,&objects.y1,&objects.x2,&objects.y2,&objects.x3,&objects.y3);
            }
            modify(objects);
            redraw(canvas);
            break;
         case 8: 
         return 0;   
        default:
        printf("invalid choice");
        }
    }
}