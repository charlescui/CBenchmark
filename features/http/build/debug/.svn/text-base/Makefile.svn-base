VER = debug

#HOME = $( dirname $(pwd)/${0} )
HOME = ../..
CBHOME = $(HOME)/../..
BUILD = $(HOME)/build/$(VER)
SOURCE = $(HOME)/source
INCLUDE = $(HOME)/include
CBINCLUDE = $(CBHOME)/include
CBSOURCE = $(CBHOME)/source
CBBUILD = $(CBHOME)/build/$(VER)
LIB = $(HOME)/lib
OBJ = 
	
all:$(OBJ)
	gcc -g -w -shared -fPIC -I$(INCLUDE) -I$(CBINCLUDE) -o $(BUILD)/libhttp.so  $^ \
			$(SOURCE)/get.c	$(SOURCE)/http.c $(SOURCE)/post.c $(SOURCE)/JSON_parser.c \
			$(SOURCE)/utils.c
	export LD_LIBRARY_PATH=.:$(`pwd`):$(LD_LIBRARY_PATH)

%.o:$(SOURCE)/%.c
	gcc -g -w -c $< -I$(INCLUDE) -I$(CBINCLUDE) -o $(BUILD)/$@ -L$(LIB)

clean:
	rm -rf $(BUILD)/*.o $(BUILD)/*.so $(BUILD)/core.*;
	rm -rf $(LIB)/*.o;
