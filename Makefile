CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix build/,$(notdir $(CPP_FILES:.cpp=.o)))

LD_FLAGS := -lGL $(shell sdl2-config --libs)
CXX_FLAGS := -std=c++11 $(shell sdl2-config --cflags)

# add header dependency generation
DEPS := $(OBJ_FILES:.o=.d)
CXX_FLAGS += -MMD

.PHONY: all
all: $(OBJ_FILES)
	$(CXX) $(LD_FLAGS) -o build/ventilate $^

build/%.o: src/%.cpp
	$(CXX)  $(CXX_FLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f build/*

-include $(DEPS)
