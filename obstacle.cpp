#include"graphic.h"
#include"OBSTACLE.h"
void load(struct OBSTACLE* o) {
    o->ii = loadImage("assets/pumpkin.png");
    o->iw = 364;
    o->ih = 300;
}
void init(struct OBSTACLE* o) {
    o->p.x = width;
    o->p.y = height - o->ih;
    o->v.x = -20;
    o->r.x = 30;
    o->r.y = 50;
    o->r.w = o->iw - o->r.x * 2;
    o->r.h = o->ih - o->r.y;
}
void move(struct OBSTACLE* o) {
    o->p.x += o->v.x;
    if (o->p.x < -o->iw) {
        o->p.x = width;
    }
}
void draw(struct OBSTACLE* o) {
    image(o->ii, o->p.x, o->p.y);
}
