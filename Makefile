SRC_DIR = source
BUILD_DIR = build/debug
CC = g++
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_NAME = play

COMPILER_FLAGS = -std=c++17 -Wall -O0 -g

INCLUDE_PATH = -Iinclude/SDL2 -Iinclude/SDL2_image
LIBRARY_PATH = -Llib/SDL2 -Llib/SDL2_image
LINKER_FLAGS = -lSDL2 -lSDL2_image

all:
	$(CC) $(COMPILER_FLAGS) $(LINKER_FLAGS) $(INCLUDE_PATH) $(LIBRARY_PATH) $(SRC_FILES) -o $(BUILD_DIR)/$(OBJ_NAME)