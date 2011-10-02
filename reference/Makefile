%.o : %.cpp
#	clang -cc1 -ast-print $< 
	clang -cc1 $< -emit-llvm

objs: ref.o container.o

clean:
	rm *.o *.bin
