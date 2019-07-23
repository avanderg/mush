#Ryan Lau & Aaron VanderGraff
#Phillip Nico
#CPE 357: Asgn 4 Makefile
#

CC = gcc
CFLAGS = -Wall -g -pedantic
OBJFILES = mush.o parseline.o
MAIN = mush 

all:	$(MAIN) 
$(MAIN): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJFILES)
clean:
	rm -f $(OBJFILES) 
allclean: 
	rm -f $(OBJFILES) $(MAIN)


