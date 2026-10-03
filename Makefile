CC = gcc
# Can change optimization level if needed
# -Wall flag enables all of the compiler's warning messages
#  -Werror treats all compiler warnings as errors
#  -O0 is the lowest optimization level
#  -g enables generating debug info for use with gdb
CC_FLAGS = -Wall -Werror

test: hashmaptest
	./hashmaptest

hashmaptest: testmain.c hashmap.c hashmap.h
	$(CC) $(CC_FLAGS) -O3 -o hashmaptest testmain.c hashmap.c

hashmaptest-dbg: testmain.c hashmap.c hashmap.h
	$(CC) $(CC_FLAGS) -O0 -g -o hashmaptest-dbg testmain.c hashmap.c

part1debug: hashmaptest-dbg
	gdb ./hashmaptest-dbg

part1valgrind: hashmaptest-dbg
	valgrind --leak-check=full ./hashmaptest-dbg

part2: main.c hashmap.c hashmap.h
	$(CC) $(CC_FLAGS) -O3 -o part2 main.c hashmap.c

run: part2
	./part2

part2-dbg: main.c hashmap.c hashmap.h
	$(CC) $(CC_FLAGS) -O0 -g -o part2-dbg main.c hashmap.c

part2debug: part2-dbg
	gdb ./part2-dbg

part2valgrind: part2-dbg
	valgrind --leak-check=full ./part2-dbg

.PHONY: clean Clean

clean:
	rm -f *.o

Clean: clean
	rm -rf hashmaptest hashmaptest-dbg part2 part2-dbg
