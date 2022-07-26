#include <stdio.h>

#define BLS_ETH
#include <bls/bls384_256.h>
#include <bls/bls.h>

class Tester {
  public:
    void Init() {
      int err = blsInit(MCL_BLS12_381, MCLBN_COMPILED_TIME_VAR);
      if (err != 0) {
        printf("blsInit failed: %d\n", err);
        exit(1);
      }
      //mclBn_setETHserialization(1);
    }
};

int main() {
  Tester tester;
  tester.Init();
}
