#include <iostream>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x = 100; // Initial x-coordinate
    int y = 250; // Fixed y-coordinate

    setfillstyle(SOLID_FILL, BLUE);

    while (!kbhit()) {
        cleardevice(); // Clears the screen in each iteration

        circle(x, y, 20); // Draw the circle at the updated position
        floodfill(x, y, BLUE); // Fill the circle with blue color

        // Move the circle to the right
        x += 2; // You can change this value to control the speed of movement

        delay(50); // Add a small delay to control the speed of movement
    }

    getch();
    closegraph();
    return 0;
}
