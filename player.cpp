#include"graphic.h"
#include"input.h"
#include"player.h"
void load(struct PLAYER* p) {
    p->ii = loadImage("assets/witch.png");
    p->iw = 223;
    p->ih = 500;
}
void init(struct PLAYER* p) {
    p->p.x = 400;
    p->p.y = height - p->ih;
    p->v.x = 2;
    p->v.y = 0;
    p->initVy = -50;
    p->gravity = 3.3f;
    p->jumpFlag = 0;
    p->r.x = 86;
    p->r.y = 0;
    p->r.w = 58;
    p->r.h = 500;
}
void move(struct PLAYER* p) {
    p->p.x += p->v.x;
    if (p->jumpFlag == 0) {
        if (isTrigger(KEY_SPACE)) {
            p->jumpFlag = 1;
            p->v.y = p->initVy;
        }
    }
    if (p->jumpFlag == 1) {
        p->p.y += p->v.y;
        p->v.y += p->gravity;
        if (p->p.y > height - p->ih) {
            p->jumpFlag = 0;
            p->p.y = height - p->ih;
        }
    }
}
void draw(struct PLAYER* p) {
    image(p->ii, p->p.x, p->p.y);
}
