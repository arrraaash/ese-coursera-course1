simple make file for compiling in a HOST(linux) machine and cross compile for arm

usrman: make build PLATFORM=HOST  or PLATFORM=MSP432
	make main.asm PLATFORM=.. or ...
