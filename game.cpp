#include"graphic.h"
#include"input.h"
#include"collision.h"
#include"game.h"

void load(struct GAME* game) {
    load(&game->backgroud);
    load(&game->player);
    load(&game->obstacle);
}

void init(struct GAME* game) {
    init(&game->obstacle);
    init(&game->player);
    game->state = game->PLAY;
}

void play(struct GAME* game) {
    move(&game->obstacle);
    move(&game->player);
    draw(game);
    if (collision(&game->player, &game->obstacle)) {
        game->state = game->OVER;
    }
    if (goal(&game->player)) {
        game->state = game->CLEAR;
    }
}
bool collision(struct PLAYER* p, struct OBSTACLE* o) {
    return collision(&p->p, &p->r, &o->p, &o->r);
}
bool goal(struct PLAYER* p) {
    float playerRight = p->p.x + p->iw;
    return (playerRight > width);
}

void over(struct GAME* game) {
    draw(game);
    fill(200, 200, 200);
    textSize(400);
    text("GAME OVER", 60, 600);
    if (isTrigger(KEY_SPACE)) {
        game->state = game->INIT;
    }
}

void clear(struct GAME* game) {
    draw(game);
    fill(250, 250, 0);
    textSize(350);
    text("GAME CLEAR", 70, 600);
    if (isTrigger(KEY_SPACE)) {
        game->state = game->INIT;
    }
}

//draw()‚ÍAplay(),over(),clear()‚©‚çŒÄ‚Ño‚³‚ê‚Ä‚¢‚é
void draw(struct GAME* game) {
    draw(&game->backgroud);
    draw(&game->obstacle);
    draw(&game->player);
#ifdef _DEBUG
    fill(0, 200, 0, 128);
    struct OBSTACLE* o = &game->obstacle;
    struct PLAYER* p = &game->player;
    drawRectArea(&p->p, &p->r);
    drawRectArea(&o->p, &o->r);
#endif
}

