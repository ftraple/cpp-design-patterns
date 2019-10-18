CC = g++
CPPFLAGS = -std=c++17 -Wall -Wextra
LDFLAGS = 
INCLUDE_DIR = Include/
SOURCE_DIR = Source/
BUILD_DIR = Build/
BINARY_DIR = Bin/
TARGET = $(BINARY_DIR)Hello

SOURCE = $(shell find $(SOURCE_DIR) -name "*.cpp")
OBJECT = $(patsubst $(SOURCE_DIR)%.cpp, $(BUILD_DIR)%.o, $(SOURCE))

debug: CPPFLAGS += -ggdb
release: CPPFLAGS += -O1

all: release

release: $(TARGET)

debug: $(TARGET)

$(TARGET): $(OBJECT) | $(BINARY_DIR)
	$(CC) $(OBJECT) $(LDFLAGS) -o $(TARGET)

$(BUILD_DIR)%.o: $(SOURCE_DIR)%.cpp | $(BUILD_DIR)
	$(CC) -I $(INCLUDE_DIR) $(CPPFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

$(BINARY_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR) $(BINARY_DIR)

