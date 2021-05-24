
DIR_SRC = ./source
DIR_INC = ./include
DIR_OBJ = ./object
DIR_BIN = ./bin

SRC = $(wildcard ${DIR_SRC}/*.c)
OBJ = $(patsubst %.c, ${DIR_OBJ}/%.o, $(notdir ${SRC}))

TARGET = ulo0.1

BIN_TARGET = ${DIR_BIN}/${TARGET}

CC = gcc
CFLAGS = -g -Wall -I${DIR_INC} 
LDFLAGS = -lm

${BIN_TARGET}:${OBJ}
	$(CC) $(OBJ) ${LDFLAGS} -o $@

${DIR_OBJ}/%.o:${DIR_SRC}/%.c
	$(CC) $(CFLAGS) -c  $< ${LDFLAGS} -o $@

.PHONY:clean
clean:
	rm -f ${DIR_OBJ}/*.o ${BIN_TARGET}
.PHONY:echo
echo:
	@echo ${OBJ}
	@echo ${SRC}

