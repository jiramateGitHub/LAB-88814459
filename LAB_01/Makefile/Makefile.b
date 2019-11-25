lab01 : lab01.cpp
	@echo "Compile & Link and create an execute file"
	g++ lab01.cpp -o lab01
clean :
	@echo "Clean non source code file"
	rm -rf *.o lab01