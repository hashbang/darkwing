.PHONY: setup clean setup build upload


help:
	@echo "setup - setup build deps"
	@echo "clean - remove all build, test, coverage and Python artifacts"
	@echo "lint - check style of all source files"
	@echo "build - compile source files to binaries"
	@echo "upload - upload compiled code to device"

setup:
	pip2 install --user --upgrade platformio
	platformio platforms install ststm32

clean:
	platformio run --target clean

build: setup
	platformio run

upload: build
	platformio run --target upload

monitor:
	platformio serialports monitor
