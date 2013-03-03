TARGET=example
CC=g++

CFLAGS=-c -Wall -g
LINKER=g++ -o
LFLAGS=
LDLIBS=

SRCDIR=src
INCLDIR=include
OBJDIR=obj
BINDIR=bin
DOCDIR=doc

SOURCES := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(INCLDIR)/*.h)
OBJECTS := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
rm=rm -fv

.PHONEY: all

$(BINDIR)/$(TARGET): $(OBJECTS)
	@echo "LD	$(LINKER) $(BINDIR)/$(TARGET) $(LFLAGS) $(OBJECTS) $(LDLIBS)"
	@$(LINKER) $(BINDIR)/$(TARGET) $(LFLAGS) $(OBJECTS) $(LDLIBS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@echo "CC	$(CC) $(CFLAGS) -c $<"
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONEY: clean
clean:
	@$(rm) $(OBJECTS)
	@echo "wyczyszczono"

.PHONEY: remove
remove: clean
	@$(rm) $(BINDIR)/$(TARGET)
	@echo "usunieto binarke"
