CXX = clang++ -std=c++11
OBJS = main.o

LIBS =	-lglfw -lGL -lGLEW -lm -lXrandr -lXi -lX11 -lXxf86vm -lXinerama -lXcursor -lpthread
OBJS = src/main.o

TARGET = lovestory

$(TARGET):	$(OBJS)
	$(CXX)  $(OBJS) $(LIBS) -o $(TARGET)

all:	$(TARGET)
	./$(TARGET)

clean:
	rm $(OBJS) $(TARGET)

run:
	./$(TARGET)
