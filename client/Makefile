# Makefile for project "Kune"

CFILES=kune.cpp project.cpp
HFILES=kune.hpp project.hpp
LINKED=-lsfml-system -lsfml-graphics -lsfml-window

all: kune

kune: ${CFILES} ${HFILES}
	g++ ${CFILES} -o kune ${LINKED}
