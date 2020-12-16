#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>
/**
 * @brief The putellipsoid class adiciona uma figura no formado de elipsoide no desenho
 * @param xcenter indica o centro da elipsoide na coordenada x;
 * @param ycenter indica o centro da elipsoide na coordenada y;
 * @param zcenter indica o centro da elipsoide na coordenada z;
 * @param rx representa o valor do raio da elipsoide no eixo x;
 * @param ry representa o valor do raio da elipsoide no eixo y;
 * @param rz representa o valor do raio da elipsoide no eixo z.
 */
class putellipsoid: public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, rx, ry, rz;
    float r, g, b, a;
public:
    putellipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    ~putellipsoid();
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H




