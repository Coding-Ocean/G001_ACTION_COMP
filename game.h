#pragma once
#include"background.h"
#include"obstacle.h"
#include"player.h"
struct GAME {
    //seaquence
    int state = 0;
    const int INIT = 0;
    const int PLAY = 1;
    const int OVER = 2;
    const int CLEAR = 3;
    //objects
    struct BACKGROUND backgroud;
    struct OBSTACLE obstacle;
    struct PLAYER player;
};
void load(struct GAME* game);
void init(struct GAME* game);
void play(struct GAME* game);
void over(struct GAME* game);
void clear(struct GAME* game);
//draw(),play(),over(),clear()����Ăяo�����
void draw(struct GAME* game);
//�L�q��P���ɂ��邽�߂̃��b�p�[
bool goal(struct PLAYER* p);
bool collision(struct PLAYER* p, struct OBSTACLE* o);
