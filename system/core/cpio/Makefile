CC = $(CROSS_COMPILE)gcc

TARGET=mkbootfs
TARGET_EXE=$(TARGET)

SRC = mkbootfs.c utils_windows.c
OBJ = $(SRC:.c=.o)

CFLAGS += -I../include

$(TARGET_EXE):$(OBJ);$(CC) -o $@ $^
$(filter %.o,$(OBJ)):%.o:%.c;$(CC) $(CFLAGS) -c -o $@ $^

.PHONY:install
install:
	cp -rf $(TARGET_EXE) ../../../output/bin/
	cp -rf ./unpackramdisk.sh ../../../output/bin/
	cp -rf ./packramdisk.sh ../../../output/bin/

.PHONY:clean
clean:
	rm -f $(OBJ) $(TARGET_EXE)
