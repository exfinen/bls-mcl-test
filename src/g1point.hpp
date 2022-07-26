#ifndef G1POINT_HPP
#define G1POINT_HPP

#include <mcl/bn.hpp>
#include "mcl_initializer.hpp"

class G1Point {
  public:
    G1Point();
    static void Init();
    mclBnG1 p;
};

#endif // G1POINT_H
