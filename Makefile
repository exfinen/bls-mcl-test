CC = g++
TARGET = bls-test
SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:.cpp=.o)
INCDIR = -Ibls/include -Ibls/mcl/include
LIBDIR = -L./bls/lib -L./bls/mcl/lib
LIBS = -lmcl -lbls384_256

mcl-bls-libdirs = bls/mcl/lib:bls-test:bls/lib

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

$(OBJS): $(SRCS)
	$(CC) $(INCDIR) -c $(SRCS) -o $@

test: $(TARGET)
	DYLD_LIBRARY_PATH=$(mcl-bls-libdirs) LD_LIBRARY_PATH=$(mcl-bls-libdirs) ./$(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET)
