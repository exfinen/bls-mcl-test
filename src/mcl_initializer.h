#ifndef MCL_INITIALIZER_H
#define MCL_INITIALIZER_H

#define BLS_ETH
#include <bls/bls384_256.h>
#include <bls/bls.h>
#include <stdio.h>

class MclInitializer {
  public:
    static void Init() {
      int err = blsInit(MCL_BLS12_381, MCLBN_COMPILED_TIME_VAR);
      if (err != 0) {
        throw std::runtime_error("blsInit failed");
      }
      //mclBn_setETHserialization(1);
      printf("bcl environment initialized\n");
    }
};

#endif // MCL_INITIALIZER_H