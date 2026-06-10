# acp_2dgraphics

A menu driven 2d Graphics Editor developed in C using a 2d character array as the drawing canvas.

 ## Goals 

 1. To create a text-based drawing canvas using a 2d character array.
 2. To implement algorithms to draw basic geometric shapes such as rectangles, circles, lines and triangles.
 3. To enable users to add,delete and modify the graphical objects .
 4. To practice modular programing.
 5. To develop problem-solving skills using arrays, loops and structures.

 ## Features 

 1. Character-based drawing canvas initialized with'_'(underscore).
 2. Shape rendering using '*'(asterisk).
 3. Draw rectangle.
 4. Draw circle .
 5. Draw line.
 6. Draw triangle.
 7. Add and delete objects to canvas.
 8. Menu driven user interface.
 9. Display the complete canvas.

 ## Technologies Used

- C Programming Language
- Standard C Libraries
- Git & GitHub
- Visual Studio Code
- Terminal-Based User Interface

## Implementation Overview

ShapeForge uses a 40×40 two-dimensional character array as a drawing canvas. The canvas is initialized with underscore (_) characters, while graphical objects are rendered using asterisk (*) characters. A menu-driven interface allows users to add, modify, delete, and display geometric shapes. All graphical objects are managed through structures and stored in an array for efficient redrawing and editing.

## Object Management

Each graphical object stores:

- Object Type
- Coordinates
- Dimensions (where applicable)
- Object Status (Active/Inactive)

Supported object types:

- Line
- Rectangle
- Circle
- Triangle

## Learning Outcomes

Through this project, the following concepts were explored:

- Arrays and Multidimensional Arrays
- Structures in C
- Modular Programming
- Header and Source File Organization
- Function Design
- Object Management Techniques
- Geometric Shape Rendering
- Git and GitHub Version Control

## Project Structure

ShapeForge
│
├── src
│   ├── main.c
│   ├── canvas.c
│   ├── shapes.c
│   └── editor.c
│
├── include
│   ├── canvas.h
│   ├── shapes.h
│   └── editor.h
│
├── screenshots
│
├── .gitignore
│
└── README.md

## Future Enhancements

- Save and Load Canvas Drawings
- Filled Geometric Shapes
- Undo and Redo Operations
- Additional Shape Types
- Improved Circle Rendering
- Colored Terminal Output
- Mouse-Based Interaction using ncurses

## Commands used:
 
- compile command : gcc -Iinclude src/canvas.c src/shapes.c src/editor.c src/main.c -o editor -lm
- Run command : ./editor


## Author

Aishamya U,
R25EA014,
First-Year AIML A section ,
REVA UNIVERSITY.