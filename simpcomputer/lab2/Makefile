# Компилятор и настройки компиляции
CC = gcc
CFLAGS = -Wall

# Директории
SRC_DIR = .
OBJ_DIR = .
BIN_DIR = .

# Исходные файлы
SOURCES = $(wildcard $(SRC_DIR)/*.c)
HEADERS = $(wildcard $(SRC_DIR)/*.h)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
EXECUTABLE = $(BIN_DIR)/main

# Правило по умолчанию
all: $(EXECUTABLE)

# Сборка исполняемого файла
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

# Правило для компиляции исходных файлов
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка
clean:
	rm -rf $(OBJ_DIR)/*.o $(EXECUTABLE)

.PHONY: all clean
