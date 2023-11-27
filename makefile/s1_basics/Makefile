file = test.c
display:
	@echo "hello world"
all:display
	gcc $(file) -o cprogram
test:
	python3 analysis.py
print:
	@cat $(file)
clean:
	@rm *.o
	@echo "`date` done !" > log.txt