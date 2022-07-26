# bls-mcl-test

## Getting and building `bls` and `mcl`
```
$ git clone --recursive https://github.com/herumi/bls
$ cd bls
$ make -C mcl lib/libmcl.a
$ make BLS_ETH=1 lib/libbls384_256.a
``` 

## Building test
```
$ make
```

## Executing test
```
$ make test
```
