TARGET = bls-test
INCDIR = -Ibls/include -Ibls/mcl/include
LIBDIR = -Lbls/lib -Lbls/mcl/lib
LIBS = -lmcl -lbls384_256

OBJDIR = src
SRCDIR = src
OBJS = $(OBJDIR)/g1point.o ${OBJDIR}/test.o

mcl-bls-libdirs = bls/mcl/lib:bls-test:bls/lib

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LIBDIR) $(LIBS)

build: $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -c $< -o $@ $(INCDIR) $(SRCS) 

test: $(TARGET)
	DYLD_LIBRARY_PATH=$(mcl-bls-libdirs) LD_LIBRARY_PATH=$(mcl-bls-libdirs) ./$(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET)
