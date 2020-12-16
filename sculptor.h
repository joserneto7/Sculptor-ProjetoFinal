#ifndef SCULPTOR_H
#define SCULPTOR_H
/**
 * @brief The Voxel struct
 * Armazena o valor escolhido para cada cor, como também para opacidade.
 * Determina se o voxel é ativo ou não
 */

struct Voxel {
  float r,g,b;
  float alpha;
  bool isOn;
};

/**
 * @brief A classe Sculptor
 */

class Sculptor{
protected:
  Voxel ***v;
  int nx,ny,nz;
  float r,g,b,a;
public:

  /**
   * @brief Sculptor
   * @param _nx será a dimensão da figura em x;
   * @param _ny será a dimensão da figura em y;
   * @param _nz será a dimensão da figura em z;
   */

  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();

  /**
   * @brief setColor Define a cor da figura
   * @param r Determina, variando de 0 a 1, a tonalidade da cor red(vermelho) que será atribuida.
   * @param g Determina, variando de 0 a 1, a tonalidade da cor green(verde) que será atribuida.
   * @param b Determina, variando de 0 a 1, a tonalidade da cor blue(azul) que será atribuida.
   * @param alpha Determina a opacidade da figura, variando também de 0 a 1.
   */

  void setColor(float r, float g, float b, float alpha);

  /**
   * @brief putBox Cria um conjunto de voxels dentro da matriz 3d
   * @param x0 valor inicial de coordenada x
   * @param x1 valor final da coordenada x
   * @param y0 valor inicial da coordenada y
   * @param y1 valor final da coordenada y
   * @param z0 valor inicial da coordenada z
   * @param z1 valor final da coordenada z
   */

  void putVoxel(int x, int y, int z);

  /**
   * @brief cutVoxel Corta uma unidade de voxel
   * @param x Atribui o valor a coordenada x
   * @param y Atribui o valor a coordenada y
   * @param z Atribui o valor a coordenada z
   */

  void cutVoxel(int x, int y, int z);
  void limpaVoxels(void);

  /**
   * @brief writeOFF
   * @param filename Recebe o que foi indicado, abre esse arquivo e escreve dentro dele os vertices e faces
   */

  void writeOFF(char* filename);
};

#endif // SCULPTOR_H



