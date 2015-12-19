stack.o:stack.c lib.h
	gcc -c stack.c

stest1.o:stest1.c lib.h
		gcc -c stest1.c

stest1:stack.o stest1.o
		gcc stest1.o stack.o -o stest1

stest2.o:stest2.c lib.h
	gcc -c stest2.c

stest2:stack.o stest2.o
	gcc stest2.o stack.o -o stest2

stest3.o:stest3.c lib.h
	gcc -c stest3.c

stest3:stack.o stest3.o
	gcc stest3.o stack.o -o stest3

stest4.o:stest4.c lib.h
	gcc -c stest4.c

stest4:stack.o stest4.o
	gcc stest4.o stack.o -o stest4

stest5.o:stest5.c lib.h
	gcc -c stest5.c

stest5:stack.o stest5.o
	gcc stest5.o stack.o -o stest5

queue.o:queue.c lib.h
	gcc -c queue.c

qtest1.o:qtest1.c lib.h
	gcc -c qtest1.c

qtest1:qtest1.o queue.o
	gcc qtest1.o queue.o -o qtest1

qtest2.o:qtest2.c lib.h
	gcc -c qtest2.c

qtest2:qtest2.o queue.o
	gcc qtest2.o queue.o -o qtest2

qtest3.o:qtest3.c lib.h
	gcc -c qtest3.c

qtest3:qtest3.o queue.o
	gcc qtest3.o queue.o -o qtest3

qtest4.o:qtest4.c lib.h
	gcc -c qtest4.c

qtest4:qtest4.o queue.o
	gcc qtest4.o queue.o -o qtest4

qtest5.o:qtest5.c lib.h
	gcc -c qtest5.c

qtest5:qtest5.o queue.o
	gcc qtest5.o queue.o -o qtest5
