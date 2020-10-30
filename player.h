#pragma once
#include"float2.h"
#include"rect_area.h"
struct PLAYER{
    //image index
    int ii = 0;
    //image width
    float iw = 0;
    //image height
    float ih = 0;
    //position
    struct FLOAT2 p;
    //velocity 
    struct FLOAT2 v;
    //for jump
    float initVy = 0;
    float gravity = 0;
    float jumpFlag = 0;
    //for collision detection
    struct RECT_AREA r;
};
void load(struct PLAYER*);
void init(struct PLAYER*);
void move(struct PLAYER*);
void draw(struct PLAYER*);