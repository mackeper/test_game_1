GXX = g++

LINKER_FLAGS = sfml-app -lsfml-graphics -lsfml-window -lsfml-system

SRCS = main.cpp 

OBJS = $(SRCS:.c=.o)

CXXFLAGS = -w $(LINKER_FLAGS)

main: $(OBJS)
	$(GXX) -c $(SRCS)
	$(GXX) main.o -o $(LINKER_FLAGS)

clean:
	rm -f *o
