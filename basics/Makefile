CC=g++
INCS=-I/home/samet/tools/sfml/SFML-2.3/include
LIBS=-L/home/samet/tools/sfml/SFML-2.3/lib
MODULES=-lsfml-graphics -lsfml-window -lsfml-system

.PHONY: clean execute

main.o: main.cpp
	@echo "Creating $@..."
	@$(CC) -c $< -o $@ $(INCS)

sfml-app: main.o
	@echo "Compiling everything..."
	@$(CC) -o $@ $< $(LIBS) $(MODULES)
	@echo -e "\x1b[0;32mCompiled successfully!\x1b[0m"

all: main.o sfml-app

execute:
	LD_LIBRARY_PATH=/home/samet/tools/sfml/SFML-2.3/lib ./sfml-app

clean:
	@echo "Cleaning everything up!..."
	@rm -rfv ./sfml-app ./main.o
	@echo -e "\x1b[0;33mCleaned!\x1b[0m"
