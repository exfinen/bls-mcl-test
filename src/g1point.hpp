#ifndef G1POINT_H
#define G1POINT_H

#include <mcl/bn.hpp>
#include "mcl_initializer.h"

class G1Point {
  public:
    G1Point();
    static void Init();
    mclBnG1 p;

  private:
    static mclBnG1 G;
};

#endif // G1POINT_H
