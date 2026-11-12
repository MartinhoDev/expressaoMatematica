SRC_DIR = src
OUTPUT_DIR = bin
OUTPUT_NAME = solver.exe

.PHONY: build run clear all

build:
	@echo "Compiling..."
	@mkdir -p $(OUTPUT_DIR)
	@g++ -O3 -Wall -Wextra $(SRC_DIR)/*.cpp -o $(OUTPUT_DIR)/$(OUTPUT_NAME)

run:
	@echo "Running..."
	@$(OUTPUT_DIR)/$(OUTPUT_NAME)

clear:
	@echo "Cleaning..."
	@rm -rf $(OUTPUT_DIR)

all: build run clear