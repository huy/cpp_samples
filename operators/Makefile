%.o : %.cpp
	clang -cc1 $< -emit-obj 

Foo.bin: Foo.o
	clang $< -o $@ -lstdc++

clean:
	rm *.o *.bin *.ast-print *.ii *.s *.plist
