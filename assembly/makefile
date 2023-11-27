#comment or explanation 
# @: hide command or print message between " "
hello: hello.o
	@echo "compiling ..."
	@gcc -o hello hello.o -no-pie
hello.o: hello.asm
	@echo "assembling ..."
	@nasm -f elf64 -g -F dwarf hello.asm -l hello.lst
clean:
	@echo "deleting ..."
	@rm -f hello.lst hello.o hello 

