#include "./g1point.hpp"
 
mclBnG1 G1Point::G;

G1Point::G1Point() {
  mclBnG1_clear(&p);
} 

void G1Point::Init()
{
  MclInitializer::Init();
  mclBnG1 G;
  const char* serializedG = "1 3685416753713387016781088315183077757961620795782546409894578378688607592378376318836054947676345821548104185464507 1339506544944476473020471379941921221584933875938349620426543736416511423956333506472724655353366534992391756441569";
  if (mclBnG1_setStr(&G, serializedG, strlen(serializedG), 10) == -1)
  {
      throw std::runtime_error("G1Point::Init(): mclBnG1_setStr failed");
  }
  G1Point::G = G;
}
