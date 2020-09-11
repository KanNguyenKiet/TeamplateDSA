runsolve:
	g++ -std=c++14 -DDEBUG -O2 -Wall solve.cpp -o solve
	./solve
rungentest: 
	g++ -std=c++14 -DDEBUG -O2 -Wall gentest.cpp -o gentest
	./gentest