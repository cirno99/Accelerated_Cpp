CXX = clang++
CC = clang++
CXXFLAGS = -I. -I../chapter14

all:		main1 main2

Pic.o:		Pic.cc Pic.h

main2.o:	main2.cc Pic.h

main2:		main2.o Pic.o

main1.o:	main1.cc Pic.h

main1:		main1.o Pic.o


test:		all
	./main1
	./main2

clean:
	rm -f *.o *.exe core main1 main2
