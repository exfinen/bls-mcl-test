#include <stdio.h>

#define BLS_ETH
#include <bls/bls384_256.h>
#include <bls/bls.h>
#include <mcl/impl/bn_c_impl.hpp>
#include "./g1point.hpp"

int main() {
  G1Point::Init();
}
