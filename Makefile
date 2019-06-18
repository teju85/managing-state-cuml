
uselib: lib
	gcc -o nodetest nodetest.c libnode.so
	./nodetest

lib:
	g++ -shared -o libnode.so node.cpp

clean:
	rm -f libnode.so nodetest
