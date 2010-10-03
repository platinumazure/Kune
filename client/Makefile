# Makefile for project "Kune", client section

CFILES=kune.cpp project.cpp track.cpp stream.cpp resourceLoader.cpp
HFILES=kune.hpp project.hpp track.hpp stream.hpp resourceLoader.hpp resource.hpp
LINKED=-lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio

CFLAGS=-Wall

all: kune

kune: ${CFILES} ${HFILES}
	g++ ${CFLAGS} ${CFILES} -o kune ${LINKED}

clean:
	rm -f kune
