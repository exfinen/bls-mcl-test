# bls-mcl-test

## Getting and building `mcl` and `bls`
```
$ git clone --recursive https://github.com/herumi/bls
$ pushd bls
$ make -C mcl lib/libmcl.a
$ make BLS_ETH=1 lib/libbls384_256.a
$ popd
``` 

## Building test
```
$ make
```

## Executing test
```
$ make test
```
