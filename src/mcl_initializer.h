#ifndef MCL_INITIALIZER_H
#define MCL_INITIALIZER_H

#include <bls/bls384_256.h>
#include <bls/bls.h>

class MclInitializer {
  public:
    static void Init() {
      static bool fInit = false;
      if (fInit)
        return;

      int err = blsInit(MCL_BLS12_381, MCLBN_COMPILED_TIME_VAR);
      if (err != 0) {
        throw std::runtime_error("blsInit failed");
      }
      mclBn_setETHserialization(1);

      fInit = true;
    }
};

#endif // MCL_INITIALIZER_H