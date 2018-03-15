#Makefile for "somatorio_dados" C++ application
#Created by Hand 22/07/2017

PROG = somatorio_dados
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o dados_soma.o

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

dados_soma.o: dados_soma.hpp
	$(CC) $(CPPFLAGS) -c dados_soma.cpp

clean:
	rm -f *.o
	
