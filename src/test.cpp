#include <stdio.h>

#define BLS_ETH
#include <bls/bls384_256.h>
#include <bls/bls.h>

class Foo {
  public:
  void say() {
    int err = blsInit(MCL_BLS12_381, MCLBN_COMPILED_TIME_VAR);
    if (err != 0) {
      printf("blsInit err %d\n", err);
      exit(1);
    }
  }
};

int main() {
  Foo foo;
  foo.say();
}
