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
LIB = -L$(HOME)/lib -L/usr/local/libsmtp---0.1.0/lib -L$(CBBUILD)
OBJ = 
	
all:$(OBJ)
	gcc -g -shared -fPIC -I$(INCLUDE) -I$(CBINCLUDE) -I/usr/local/libsmtp---0.1.0/include \
			-o $(BUILD)/libsmtp.so \
			$(LIB) -lsmtp-- $^ \
			$(SOURCE)/smtp.c $(SOURCE)/utils.c $(SOURCE)/test.c $(SOURCE)/JSON_parser.c
	export LD_LIBRARY_PATH=.:$(`pwd`):$(LD_LIBRARY_PATH)

test:
	gcc -g -w -I$(INCLUDE) -I$(CBINCLUDE) -I/usr/local/libsmtp---0.1.0/include \
			-o $(BUILD)/test \
			$(LIB) -lsmtp-- -ldl \
			$(SOURCE)/test.c

%.o:$(SOURCE)/%.c
	gcc -g -w -c $< -I$(INCLUDE) -I$(CBINCLUDE) -o $(BUILD)/$@ $(LIB)

clean:
	rm -rf $(BUILD)/*.o $(BUILD)/*.so $(BUILD)/test;
