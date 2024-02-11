.PHONY: build
build:
	python ./build.py

.PHONY: cpp-build
cpp-build:
	mkdir -p ./build
	g++ -Wall -Werror -Wextra -o ./build/main $(file)