#include "./g1point.hpp"

mclBnG1 G1Point::G;

G1Point::G1Point() {
  mclBnG1_clear(&p);
} 

void G1Point::Init()
{
  MclInitializer::Init();
}
