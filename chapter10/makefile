CXX = clang++
CC = clang++

all:		concat_files copyfile letter_grade.o pointer_example write_args


test:		all
	./concat_files ../data/name1 ../data/name2
	./copyfile
	./pointer_example
	./write_args this is a test

clean:
	rm -f *.o *.exe out core concat_files copyfile 	pointer_example write_args
