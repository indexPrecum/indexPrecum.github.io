all: ../index.html ../prayer/rosarium/gloriosa.html ../prayer/rosarium/gaudiosa.html ../prayer/rosarium/dolorosa.html ../prayer/rosarium/luminosa.html

clear:
	rm *.o

../index.html: index.c
	cc index.c -o index.o
	./index.o

../prayer/rosarium/gloriosa.html: prayer_rosarium_gloriosa.c
	cc prayer_rosarium_gloriosa.c -o prayer_rosarium_gloriosa.o
	./prayer_rosarium_gloriosa.o

../prayer/rosarium/gaudiosa.html: prayer_rosarium_gaudiosa.c
	cc prayer_rosarium_gaudiosa.c -o prayer_rosarium_gaudiosa.o
	./prayer_rosarium_gaudiosa.o

../prayer/rosarium/dolorosa.html: prayer_rosarium_dolorosa.c
	cc prayer_rosarium_dolorosa.c -o prayer_rosarium_dolorosa.o
	./prayer_rosarium_dolorosa.o

../prayer/rosarium/luminosa.html: prayer_rosarium_luminosa.c
	cc prayer_rosarium_luminosa.c -o prayer_rosarium_luminosa.o
	./prayer_rosarium_luminosa.o


