#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include <figurageometrica.h>
#include <sculptor.h>

/**
 * @brief The putvoxel class adiciona uma unidade de voxel no desenho
 * @param x indica a localização do voxel em x
 * @param y indica a localização do voxel em y
 * @param z indica a localização do voxel em z
 */
class putvoxel: public FiguraGeometrica{
protected:
    int x, y, z;
    float r, g, b, a;
public:
    putvoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);
    virtual ~putvoxel();
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
