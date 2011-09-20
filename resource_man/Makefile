%.o : %.cpp
	clang -cc1 $< -emit-obj 

Bar.bin: Bar.o
	clang $< -o $@ -lstdc++

clean:
	rm *.o *.bin *.ast-print *.ii *.s *.plist
