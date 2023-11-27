#using for like bash script
LIST = one two three
loop1:
	@for i in $(LIST); do \
		echo $$i; \
	done
##################
# using foreach $(foreach  var,list,text)
list = foo bar baz
list_2 = $(foreach i,$(list),"\nWord is -$(i)")

file = test.c 
loop2:
	@echo $(list_2)
	
##################


ifeq '$(file)'  'test.c '
cond1:	 
	@echo "true"
endif 


cond2:
ifeq '$(file)'  'test.c '
		@echo "true" 
endif 

bar=true
foo = bar
cond3: 
ifdef $(foo)
	@echo "true" 
endif

##################

build: compile
	@gcc $(file) -o runprogram
compile:
	@gcc -c $(file)

.PHONY: clean
clean:
	@rm *.o
	@rm runprogram