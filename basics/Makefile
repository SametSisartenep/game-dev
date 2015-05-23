CC=g++
INCLUDES=-I/home/samet/tools/sfml/SFML-2.3/include
LIBS=-L/home/samet/tools/sfml/SFML-2.3/lib

.PHONY: clean

main: main.cpp
	@echo "Generating object..."
	$(CC) -c $< $(INCLUDES)
	@echo "Compiling object..."
	$(CC) -o $@ $@.o $(LIBS) -lsfml-graphics -lsfml-window -lsfml-system
	@echo -e "\x1b[0;32mCompiled!\x1b[0m"

main-plus-clock: main-plus-clock.cpp
	@echo "Generating object..."
	$(CC) -c $< $(INCLUDES)
	@echo "Compiling object..."
	$(CC) -o $@ $@.o $(LIBS) -lsfml-graphics -lsfml-window -lsfml-system
	@echo -e "\x1b[0;32mCompiled!\x1b[0m"

threading: threading.cpp
	@echo "Generating object..."
	$(CC) -c $< $(INCLUDES)
	@echo "Compiling object..."
	$(CC) -o $@ $@.o $(LIBS) -lsfml-graphics -lsfml-window -lsfml-system
	@echo -e "\x1b[0;32mCompiled!\x1b[0m"

clean:
	@for file in `ls`; do \
		type=`file $$file | awk '{print $$2}'`; \
		echo -e "\x1b[1;37mFile:\x1b[0m \x1b[0;35m$$file\x1b[0m \x1b[1;34m|\x1b[0m \x1b[1;37mType:\x1b[0m \x1b[0;35m$$type\x1b[0m"; \
		if [[ $$type == "ELF" ]]; then \
			rm -rfv ./$$file; \
		fi \
	done
