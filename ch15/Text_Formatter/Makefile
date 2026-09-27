# justify: justify.o word.o line.o
# 	gcc -o justify justify.o word.o line.o
#
# justify.o: justify.c word.h line.h 
# 	gcc -c justify.c
#
# word.o: word.c word.h
# 	gcc -c word.c
#
# line.o: line.c line.h
# 	gcc -c line.c
#
#There are four groups of lines; each group is known as rule. The first line in
# each line gives a target file, followed by the files on which it depends. The
# Second line is a command to be executed if the target should need to be 
# revuilt because of a change to one of its dependent files. Let's look at the
# first two rules
#
# In the first rule, justify (executable file) is the target
# 	justify: justify.o word.o line.o
# 			gcc -o justify justify.o word.o line.o
# 
# The first line states that justify depends on the file justify.o, word.o, and
# line.o; if any one of these three files has changed since the program was 
# last buildt, then justify needs to be rebuilt. The command on the following
# line shows how the rebuilding is to be done (by using gcc command to link
# the object files).
#
#
# In Second rule, justify.o is the target
# 	justify.o: justify.c word.h line.h
# 			gcc -c justify.c
# 
# The first line indicates that justify.o needs to be rebuilt if there's been a
# change to justify.c, word.h or line.h. The next line shows how to update 
# justify.o (by recompiling justify.c). The -c option tells the compiler to 
CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

justify: justify.o word.o line.o
	$(CC) -o justify justify.o word.o line.o $(CFLAGS)

justify.o: justify.c word.h line.h
	$(CC) -c justify.c $(CFLAGS)

word.o: word.c word.h
	$(CC) -c word.c $(CFLAGS)

line.o: line.c line.h
	$(CC) -c line.c $(CFLAGS) compile justify.c into an object file but not attempt to link it.
