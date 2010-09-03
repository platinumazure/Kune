# Makefile for project "Kune"

CFILES=kune.cpp project.cpp track.cpp stream.cpp
HFILES=kune.hpp project.hpp track.hpp stream.hpp
LINKED=-lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio

all: kune

kune: ${CFILES} ${HFILES}
	g++ ${CFILES} -o kune ${LINKED}
