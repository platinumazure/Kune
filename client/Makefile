# Makefile for project "Kune"

CFILES=kune.cpp project.cpp track.cpp
HFILES=kune.hpp project.hpp track.hpp
LINKED=-lsfml-system -lsfml-graphics -lsfml-window

all: kune

kune: ${CFILES} ${HFILES}
	g++ ${CFILES} -o kune ${LINKED}
