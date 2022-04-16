all: myprog.exe

# define a target to link the application
#
myprog.exe: myprog.o myfuncts_00.o
        g++ -g myprog.o -L$(PWD) -lfuncts -lm -o myprog.exe

# define a debug target to compile with -ggdb3
#
debug:
        g++ -g myprog.cc myfuncts_00.cc -o myprog.gdb
#Install to build library
#
install:
        gcc-ar rsv libfuncts.a myfuncts_00.o myprog.o

# define targets to compile the source code
#
myprog.o: myprog.cc exp.h Makefile
        g++ -g -c myprog.cc -o myprog.o

myfuncts_00.o: myfuncts_00.cc exp.h Makefile
        g++ -g -c myfuncts_00.cc -o myfuncts_00.o

# define a target to clean the directory
#
clean:
        rm -f myprog.o myfuncts_00.o myprog.exe
