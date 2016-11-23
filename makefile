GXX = g++

LINKER_FLAGS =-lsfml-graphics -lsfml-window -lsfml-system

SRCS = Sources/entity.cpp Sources/main.cpp Sources/player.cpp Sources/game.cpp Sources/renderer.cpp

OBJS = entity.o main.o player.o game.o renderer.o

CXXFLAGS = -std=c++11 -Wall

%.o: Sources/%.cpp
	$(GXX) -c -$(CXXFLAGS) $< -o $@

%.o: Sources/%.hpp
	$(GXX) -c -$(CXXFLAGS) $< -o $@

main: $(OBJS)
	$(GXX) -o game $(OBJS) $(LINKER_FLAGS)

clean:
	rm -f *o
