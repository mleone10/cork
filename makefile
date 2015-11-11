# Variables
# Compilation options
CC=gcc
CFLAGS=-c -Wall
# Source, build, and binary directories
SRCDIR=src
OBJDIR=build
BINDIR=bin
# Final executable name
EXENAME=cork

# Definitions - shouldn't change
SOURCES=$(wildcard src/*.c)
OBJECTS=$(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
EXECUTABLE=$(BINDIR)/$(EXENAME)

all: $(EXECUTABLE)

clean:
	@echo "Cleaning executable and object files..."
	@rm -f $(EXECUTABLE) $(OBJECTS)
	@make

$(EXECUTABLE): $(OBJECTS)
	@echo "Making $(EXECUTABLE)..."
	@$(CC) $(OBJECTS) -o $@
	@echo "Done!"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@echo "Making $<..."
	@$(CC) $(CFLAGS) $< -o $@