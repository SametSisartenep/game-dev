CC=g++
OUTPUT=aircraft-game
FILES=main.cc Game.h Game.cc

.PHONY: clean

all:
	$(CC) -o $(OUTPUT) $(FILES) -I/home/samet/tools/sfml/SFML-2.3/include -L/home/samet/tools/sfml/SFML-2.3/lib -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -rfv ./$(OUTPUT)
