all: lab6 testeLab6

lab6: main.o calculadora.o
	g++ -o lab6 main.o calculadora.o
main.o: main.cpp calculadora.h
	g++ -c main.cpp
calculadora.o: calculadora.h

testeLab6: maintest.o calculadora.o calculadoraTeste.o
	g++ -o testeLab6 maintest.o calculadora.o calculadoraTeste.o -lcppunit

maintest.o: maintest.cpp calculadora.h calculadoraTeste.h
	g++ -c maintest.cpp

calculadoraTeste.o: calculadoraTeste.cpp calculadora.h
	g++ -c calculadoraTeste.cpp -lcppunit

clean:
	$(RM) lab6 TesteLab6