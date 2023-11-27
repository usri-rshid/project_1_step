#Functions
#
# *) Rembeber CMAKE 
# 	function(<name> [<arg1> ...])
#   	<commands>
# 	endfunction()
#
#
# 1) define Function_Name
#      commands
#  endef
#
# Target:
# 	$(call Function_Name,Arguments)

# 2) Access Builtin Functions 
# 	target2:
#		@echo $(subst .c,.cpp, main.c test.c lcd.c)

# 3)
#Variables
# Variables can only be strings. You'll typically want to use :=, but = works
#########################################################################