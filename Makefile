COMPILER = g++
SOURCES = main.cpp console_logger_creator.cpp console_logger.cpp logger_creator.cpp logger.cpp
EXEC_FILENAME = prog.exe

all: compile
run: compile
	@./${EXEC_FILENAME}
compile:
	${COMPILER} ${SOURCES} -o ${EXEC_FILENAME} -w
clear:
	rm -f *.o ${EXEC_FILENAME}

