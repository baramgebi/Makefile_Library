export LANG		= en

SRCDIR 			= $(CURDIR)
OBJDIR 			= $(CURDIR)/app/obj_gtk
Directories 	= $(foreach dir,$(SRCDIR),$(wildcard $(dir)/*))				# main, funktion1, funktion2, funktion3, main.c...

c_files 		= $(foreach dir,$(Directories),$(wildcard $(dir)/*.c))		# /funktion1/funktion1.c /funktion2/funktion2.c /funktion1/funktion3.c
c_files 		+= $(CURDIR)/main.c
c_files_dir		= $(dir $(c_files))											# /funktion1/ /funktion2/ /funktion1/
c_files_nodir	= $(notdir $(c_files))										# funktion1.c funktion2.c funktion3.c
							
h_files			= $(foreach dir,$(Directories),$(wildcard $(dir)/*.h)) 		# /funktion1/funktion1.h /funktion2/funktion2.h /funktion1/funktion3.h
h_files_dir		= $(dir $(h_files))											# -I/funktion1 -I/funktion2 -I/funktion3 

CC       		= gcc
CFLAGS 			= -c -g -w -O2
INCDIR			= $(addprefix -I,$(h_files_dir))
OBJ				= $(subst .c,.o, $(c_files))								# /funktion1/funktion1.o /funktion2/funktion2.o /funktion1/funktion3.o
LDFLAGS			= -o
LFLAGS			= -L/home/test -L../lib
	

$(info $(shell echo !!!_______ "$(OBJ)" ________!!!))
	
.Phony: main.exe
all: main.exe
 
main.exe: $(OBJ) funktion.lib
	gcc $(LDFLAGS)  $(OBJDIR)/$@ 		$(OBJDIR)/main.o $(OBJDIR)/funktion.lib 		#	gcc -o main.c	$(OBJDIR)/main.o $(OBJDIR)/funktion.lib
	
funktion.lib:
	ar ruvs $(OBJDIR)/funktion.lib $(addprefix $(OBJDIR)/,$(notdir $(OBJ)))

$(OBJ): %.o: %.c
	gcc $(CFLAGS) $(INCDIR) $< $(LDFLAGS) $(OBJDIR)/$(notdir $@) 			#	gcc -c funktion1.c /app/obj_gtk/funktion1.o	-I/funktion1/

.PHONY: $(OBJ)

clean:
	rm $(OBJDIR)/*.o *.exe $(OBJDIR)/*.lib
	
# CTRL+Shift+/
#$(info $(shell echo Hier___________________________ SRCDIR = "$(SRCDIR)" ___________________________))	
#$(info $(shell echo Hier___________________________ OBJDIR = "$(OBJDIR)" ___________________________))
#$(info $(shell echo Hier___________________________ INCDIR = "$(INCDIR)" ___________________________))		
#$(info $(shell echo Hier___________________________ Verzeichnis = "$(Verzeichnis)"___________________________))	
#$(info $(shell echo Hier___________________________ cfiles = "$(cfiles)" ___________________________))
#$(info $(shell echo Hier___________________________ hfiles = "$(hfiles)" ___________________________))
#$(info $(shell echo Hier___________________________ OBJ = "$(OBJ)" ___________________________))	
	
