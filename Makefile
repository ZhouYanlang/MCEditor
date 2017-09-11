CC = g++
CFLAGS = -std=c++11 -Ofast -Wno-unused-result
LIBS = globals.cpp NBTCoder.cpp MCACoder.cpp MCEditor.cpp

default: 
	$(CC) $(LIBS) test.cpp $(CFLAGS) -lz

paint:
	$(CC) $(LIBS) paint.cpp $(CFLAGS) -lz

music:
	$(CC) $(LIBS) music.cpp $(CFLAGS) -lz

video:
	$(CC) $(LIBS) video.cpp $(CFLAGS) -lz

video2:
	$(CC) $(LIBS) video2.cpp $(CFLAGS) -lz

clean:
	rm *.out
