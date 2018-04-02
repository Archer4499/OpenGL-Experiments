#pragma once

#include "vector.h"

// Data stored in column-major order

struct mat2 {
    float mat[4];

    mat2();
    explicit mat2(float diag);
    explicit mat2(float amat[4]);
    mat2(float aa, float ab,
         float ba, float bb);

    float operator [](int i) const;
    float &operator [](int i);
};

struct mat3 {
    float mat[9];

    mat3();
    explicit mat3(float diag);
    explicit mat3(float amat[9]);
    mat3(float aa, float ab, float ac,
         float ba, float bb, float bc,
         float ca, float cb, float cc);

    float operator [](int i) const;
    float &operator [](int i);
};

struct mat4 {
    float mat[16];

    mat4();
    explicit mat4(float diag);
    explicit mat4(float amat[16]);
    mat4(float aa, float ab, float ac, float ad,
         float ba, float bb, float bc, float bd,
         float ca, float cb, float cc, float cd,
         float da, float db, float dc, float dd);

    float operator [](int i) const;
    float &operator [](int i);
};


std::ostream& operator<<(std::ostream& os, const mat2& mat);
std::ostream& operator<<(std::ostream& os, const mat3& mat);
std::ostream& operator<<(std::ostream& os, const mat4& mat);


mat4 translate(mat4 trans, vec3 in);