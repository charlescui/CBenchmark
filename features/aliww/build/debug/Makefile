VER = debug

#HOME = $( dirname $(pwd)/${0} )
HOME = ../..
CBHOME = /usr/local/cbenchmark
BUILD = $(HOME)/build/$(VER)
SOURCE = $(HOME)/source
INCLUDE = $(HOME)/include
CBINCLUDE = $(CBHOME)/include
CBSOURCE = $(CBHOME)/source
LIB = .
ICE = /opt/ICE
OBJ = imsc_pack.o\
      des.o\
      sc_head.o\
      md5hash.o\
      RsaCipher.o\
      RSAWrapper.o\
	tpfs_perf_test.o\
	DBStruct.o\
	dbdatadefine.o\
	user_statics.o\
	uss_perf_test.o\
	dbtbsstructs60.o\
	DDBInterface.o\
	imicecommstruct.o\
	imsession.o\
	dbservice.o\
	dbs_perf_test.o\
	aliww.o\
	ddbadmin_perf_test.o\
	DDBInterface.o\
	tpfs_pack.o\
	aas_perf_test.o\
	aasservice.o\
	ims_perf_test.o\
	mosInterface.o\
	ims_mos_perf_test.o\
	mos_perf_test.o

INCLUDES = -I$(INCLUDE) -I$(CBINCLUDE) -I$(ICE)/include
LDLIBS = -L$(LIB) -L$(BUILD) -lz -lpthread -lssl -L$(ICE)/lib -lIce -lIceUtil
CFLAGS = -g -w -fPIC

all:$(OBJ)
	g++ -shared $(CFLAGS) $(INCLUDES) $(LDLIBS) $^ ../../lib/CWWSimulator.a \
		-o $(BUILD)/libaliww.so

%.o:$(SOURCE)/%.cpp
	g++ -c $(CFLAGS) $(INCLUDES) $(SOURCE)/$*.cpp -o $(LIB)/$@

clean:
	rm -rf $(BUILD)/*.o $(BUILD)/*.so $(BUILD)/core.*;
	rm -rf $(LIB)/*.o;
