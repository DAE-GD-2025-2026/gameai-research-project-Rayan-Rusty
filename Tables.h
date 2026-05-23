//
// Created by omen on 23/05/2026.
//

#ifndef MARCHINGCUBES_TABLES_H
#define MARCHINGCUBES_TABLES_H


#pragma once
#include "raymath.h"
extern const int edgeTable[256];
extern const int triTable[256][16];
extern const int edgeToCorner[12][2];
extern const Vector3 corners[8];


#endif //MARCHINGCUBES_TABLES_H