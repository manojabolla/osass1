CC     = gcc
CFLAGS = -g
TARGET = simplechain simplechain2 simplechain5 simplechain6 simplechain7 simplechain8 ass1
all: $(TARGET)
OBJS   = simplechain simplechain2.o simplechain5.o simplechain6.o simplechain7.o simplechain8.o problem3.o
.SUFFIXES: .c .o

simplechain: simplechain.o
	$(CC) -o simplechain simplechain.o

simplechain2: simplechain2.o
	$(CC) -o simplechain2 simplechain2.o

simplechain5: simplechain5.o
	$(CC) -o simplechain5 simplechain5.o

simplechain6: simplechain6.o
	$(CC) -o simplechain6 simplechain6.o

simplechain7: simplechain7.o
	$(CC) -o simplechain7 simplechain7.o

simplechain8: simplechain8.o
	$(CC) -o simplechain8 simplechain8.o

ass1: problem3.o
	$(CC) -o ass1 problem3.o

.c.o:
	$(CC) $(CFLAGS) -c $<
clean:
	/bin/rm -f *.o $(TARGET)

