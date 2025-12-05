all: ../index.html ../prayer/rosarium/gloriosa.html

../index.html: index.c
	cc index.c -o index.o
	./index.o


../prayer/rosarium/gloriosa.html: prayer_rosarium_gloriosa.c
	cc prayer_rosarium_gloriosa.c -o prayer_rosarium_gloriosa.o
	./prayer_rosarium_gloriosa.o

