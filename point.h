#ifndef __POINT_H
#define __POINT_H

typedef struct{
    double x;
    double y;
} Point;

Point * point_new(double x, double y);
void point_free(Point * point);
Point * x2(Point * point);

#endif