%.o : %.cpp
#	clang -cc1 -ast-print $< 
	clang -cc1 -I/opt/local/include $< -emit-llvm

objs: ref.o container.o

clean:
	rm *.o *.bin
