CXXFLAGS= -O2 -std=c++11
#-Wall

OBJS=main.o
MAIN=mcd

.PHONY: all clean

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp exacto.cpp goloso.cpp busquedalocal.cpp

clean:
	rm -f $(OBJS) $(MAIN)
