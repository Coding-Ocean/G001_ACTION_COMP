#include"graphic.h"
#include"background.h"
void load(struct BACKGROUND* b) {
    b->ii = loadImage("assets/back.png");
}
void draw(struct BACKGROUND* b) {
    image(b->ii, 0, 0);
    fill(0, 0, 0);
    textSize(40);
    text("Goal", width - 140, 800);
}