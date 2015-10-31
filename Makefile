BUILD := executable
INCDIR = ./include
SRCDIR = src
OBJS_TEST = card.o deck.o main_test.o
OBJS = card.o deck.o main.o
CXX = g++
DEBUG = -g
LFLAGS = -Wall $(DEBUG)
cxxflags.test := -Wall -O3 -c $(DEBUG) -std=c++14
cxxflags.executable := -Wall -O3 -c -std=c++14
CXXFLAGS := ${cxxflags.${BUILD}}

all: $(BUILD)

test: $(OBJS_TEST)
	@echo "Build test..."
	$(CXX) $(OBJS_TEST) -o main $(LFLAGS)

executable: $(OBJS)
	@echo "Build executable..."
	$(CXX) $(OBJS) -o main $(LFLAGS)

card.o: $(INCDIR)/card.h
	$(CXX) $(CXXFLAGS) -I$(INCDIR) $(SRCDIR)/card.cpp

deck.o: $(INCDIR)/card.h $(INCDIR)/deck.h
	$(CXX) $(CXXFLAGS) -I$(INCDIR) $(SRCDIR)/deck.cpp

main.o: $(INCDIR)/card.h
	$(CXX) $(CXXFLAGS) -I$(INCDIR) main.cpp
	   
main_test.o: $(INCDIR)/card.h
	$(CXX) $(CXXFLAGS) -I$(INCDIR) main_test.cpp

clean:
	rm -f *.o main