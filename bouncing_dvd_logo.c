// Written by Rabia Alhaffar in 23/November/2020
// Bouncing DVD Logo port...
// Based of http://fiddle.dragonruby.org/?tutorial=https://gist.github.com/amirrajan/83c368bfc4f153abdfba995458d8943a
#include "raylib.h"

//--------------------------------------------------------------------------------------
// Define functions
//--------------------------------------------------------------------------------------
void render(void);
void calc(void);
void input(void);
void set_box_color(void);

//--------------------------------------------------------------------------------------
// Define variables
//--------------------------------------------------------------------------------------
// Window size...
int window_width = 1280;
int window_height = 720;

// Box info...
int box_size = 50;
Rectangle box;
Color box_color;
Color colors[6] = {
    RED,
    ORANGE,
    GREEN,
    BLUE,
    (Color) { 75, 0, 130, 255 }, // INDIGO
    VIOLET
};
int box_speed = 1;
int box_dx = 1;
int box_dy = -1;
bool box_moving = true;

//--------------------------------------------------------------------------------------
// Main function
//--------------------------------------------------------------------------------------
int main(void) {
    InitWindow(window_width, window_height, "[raylib] Bouncing DVD Logo");
    SetTargetFPS(60);
    
    box = (Rectangle) { (window_width - 50) / 2, (window_height - 50) / 2, box_size, box_size };
    set_box_color();
    
    while (!WindowShouldClose()) {
        input();
        calc();
        render();
    }
    CloseWindow();
    return 0;
}

//--------------------------------------------------------------------------------------
// Render box
//--------------------------------------------------------------------------------------
void render(void) {
    BeginDrawing();
    ClearBackground(WHITE);
    DrawRectangleRec(box, box_color);
    EndDrawing();
}

//--------------------------------------------------------------------------------------
// Box collision with window sides
//--------------------------------------------------------------------------------------
void calc(void) {
    if (box_moving) {
        box.x += (box_dx * box_speed);
        box.y += (box_dy * box_speed);

        if (box.x + box_size > window_width) {
            box.x = window_width - box_size;
            box_dx = -1;
            set_box_color();
        } else if (box.x < 0) {
            box.x = box.x;
            box_dx = 1;
            set_box_color();
        }

        if (box.y < 0) {
            box.y = box.y;
            box_dy = 1;
            set_box_color();

        } else if (box.y + box_size > window_height) {
            box.y = window_height - box_size;
            box_dy = -1;
            set_box_color();
        }
    }
}

//--------------------------------------------------------------------------------------
// Input
//--------------------------------------------------------------------------------------
void input(void) {
    if (IsKeyPressed(KEY_SPACE)) {
        if (box_moving) {
            box_moving = false;
        } else {
            box_moving = true;
        }
    }
}

//--------------------------------------------------------------------------------------
// Set box color
//--------------------------------------------------------------------------------------
void set_box_color(void) {
   box_color = colors[GetRandomValue(0, 5)];
}