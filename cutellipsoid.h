#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>

/**
 * @brief The cutellipsoid class faz um corte de formato elipsoidal da figura
 * @param xcenter determina o centro da elipse no eixo x
 * @param xcenter determina o centro da elipse no eixo y
 * @param xcenter determina o centro da elipse no eixo z
 * @param rx determina o raio da elipse no eixo x
 * @param ry determina o raio da elipse no eixo y
 * @param rz determina o raio da elipse no eixo z
 */
class cutellipsoid: public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    cutellipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);
    virtual ~cutellipsoid();
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
