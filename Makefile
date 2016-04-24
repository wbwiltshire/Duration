CC=g++
CFLAGS=-c -Wall -g
#CFLAGS=-c -Wall
CPPFLAGS=
LDFLAGS=
SOURCES=main.cpp duration.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=duration

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)
	chmod 755 $(EXECUTABLE)

.cpp.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	rm -f duration
	rm -f *.o
