# Makefile for project "Kune"

CFILES=kune.cpp project.cpp track.cpp stream.cpp resourceLoader.cpp
HFILES=kune.hpp project.hpp track.hpp stream.hpp resourceLoader.hpp
LINKED=-lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio

all: kune

kune: ${CFILES} ${HFILES}
	g++ ${CFILES} -o kune ${LINKED}

clean:
	rm -f kune
