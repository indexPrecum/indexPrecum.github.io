all: ../index.html rosary mass

clear:
	rm *.o

rosary: ../prayer/rosarium/gloriosa.html ../prayer/rosarium/gaudiosa.html ../prayer/rosarium/dolorosa.html ../prayer/rosarium/luminosa.html

mass: ../prayer/mass/asperges.html ../prayer/mass/kyrie.html ../prayer/mass/gloria.html ../prayer/mass/credo.html ../prayer/mass/sanctus.html

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

../prayer/mass/asperges.html: prayer_mass_asperges.c
	cc prayer_mass_asperges.c -o prayer_mass_asperges.o
	./prayer_mass_asperges.o

../prayer/mass/kyrie.html: prayer_mass_kyrie.c
	cc prayer_mass_kyrie.c -o prayer_mass_kyrie.o
	./prayer_mass_kyrie.o

../prayer/mass/gloria.html: prayer_mass_gloria.c 
	cc prayer_mass_gloria.c -o prayer_mass_gloria.o
	./prayer_mass_gloria.o

../prayer/mass/credo.html: prayer_mass_credo.c 
	cc prayer_mass_credo.c -o prayer_mass_credo.o
	./prayer_mass_credo.o

../prayer/mass/sanctus.html: prayer_mass_sanctus.c
	cc prayer_mass_sanctus.c -o prayer_mass_sanctus.o
	./prayer_mass_sanctus.o
