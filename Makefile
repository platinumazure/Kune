# Makefile for Kune project

SUBDIRS=client server

all clean:
	@for i in $(SUBDIRS); do \
	(cd $$i; make $@); done
