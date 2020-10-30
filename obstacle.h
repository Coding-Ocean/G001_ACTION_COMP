#pragma once
#include"float2.h"
#include"rect_area.h"
struct OBSTACLE{
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
    //for collision detection
    struct RECT_AREA r;
};
void load(struct OBSTACLE*);
void init(struct OBSTACLE*);
void move(struct OBSTACLE*);
void draw(struct OBSTACLE*);