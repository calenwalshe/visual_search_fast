###########################################################################
## Makefile generated for component 'covert_search_dp'. 
## 
## Makefile     : covert_search_dp_rtw.mk
## Generated on : Mon Jan 25 16:41:00 2021
## Final product: /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = covert_search_dp
MAKEFILE                  = covert_search_dp_rtw.mk
MATLAB_ROOT               = /Applications/MATLAB_R2020b.app
MATLAB_BIN                = /Applications/MATLAB_R2020b.app/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/maci64
START_DIR                 = /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/codegen/exe/covert_search_dp
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
C_STANDARD_OPTS           = -fno-common -fexceptions
CPP_STANDARD_OPTS         = -std=c++11 -fno-common -fexceptions

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Clang v3.1 | gmake (64-bit Mac)
# Supported Version(s):    3.1
# ToolchainInfo Version:   2020b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS

#-----------
# MACROS
#-----------

ARCHS             = x86_64
XCODE_SDK_VER     = $(shell perl $(MATLAB_ROOT)/rtw/c/tools/macsdkver.pl)
XCODE_SDK         = MacOSX$(XCODE_SDK_VER).sdk
XCODE_DEVEL_DIR   = $(shell xcode-select -print-path)
XCODE_SDK_ROOT    = $(XCODE_DEVEL_DIR)/Platforms/MacOSX.platform/Developer/SDKs/$(XCODE_SDK)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Clang C Compiler
CC = xcrun clang

# Linker: Clang Linker
LD = xcrun clang++

# C++ Compiler: Clang C++ Compiler
CPP = xcrun clang++

# C++ Linker: Clang C++ Linker
CPP_LD = xcrun clang++

# Archiver: Clang Archiver
AR = xcrun ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/maci64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -isysroot $(XCODE_SDK_ROOT) -arch $(ARCHS) $(C_STANDARD_OPTS) -mmacosx-version-min=10.14 \
                       -O3
CPPFLAGS             = -c -isysroot $(XCODE_SDK_ROOT) -arch $(ARCHS) $(CPP_STANDARD_OPTS) -mmacosx-version-min=10.14 \
                       -O3
CPP_LDFLAGS          = -arch $(ARCHS) -isysroot $(XCODE_SDK_ROOT) -Wl,-rpath,$(MATLAB_ARCH_BIN) -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/$(RELATIVE_PATH_TO_ANCHOR) -L"$(MATLAB_ARCH_BIN)"
CPP_SHAREDLIB_LDFLAGS  = -dynamiclib -install_name @rpath/$(notdir $(PRODUCT)) -isysroot $(XCODE_SDK_ROOT) -L"$(MATLAB_ARCH_BIN)" \
                         -Wl,$(LD_NAMESPACE) $(LD_UNDEFS)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -arch $(ARCHS) -isysroot $(XCODE_SDK_ROOT) -Wl,-rpath,$(MATLAB_ARCH_BIN) -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/$(RELATIVE_PATH_TO_ANCHOR) -L"$(MATLAB_ARCH_BIN)"
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -dynamiclib -install_name @rpath/$(notdir $(PRODUCT)) -isysroot $(XCODE_SDK_ROOT) -L"$(MATLAB_ARCH_BIN)" \
                       -Wl,$(LD_NAMESPACE) $(LD_UNDEFS)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c -I$(MATLAB_ROOT)/extern/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=covert_search_dp

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/main.c $(START_DIR)/covert_search_dp_data.c $(START_DIR)/covert_search_dp_initialize.c $(START_DIR)/covert_search_dp_terminate.c $(START_DIR)/covert_search_dp.c $(START_DIR)/tic.c $(START_DIR)/timeKeeper.c $(START_DIR)/fileManager.c $(START_DIR)/fread.c $(START_DIR)/rand.c $(START_DIR)/randsample.c $(START_DIR)/histc.c $(START_DIR)/randn.c $(START_DIR)/toc.c $(START_DIR)/eml_rand_mt19937ar_stateful.c $(START_DIR)/eml_rand_mt19937ar.c $(START_DIR)/covert_search_dp_emxutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = main.o covert_search_dp_data.o covert_search_dp_initialize.o covert_search_dp_terminate.o covert_search_dp.o tic.o timeKeeper.o fileManager.o fread.o rand.o randsample.o histc.o randn.o toc.o eml_rand_mt19937ar_stateful.o eml_rand_mt19937ar.o covert_search_dp_emxutil.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  -lm

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


main.o : /Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


covert_search_dp_data.o : $(START_DIR)/covert_search_dp_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


covert_search_dp_initialize.o : $(START_DIR)/covert_search_dp_initialize.c
	$(CC) $(CFLAGS) -o "$@" "$<"


covert_search_dp_terminate.o : $(START_DIR)/covert_search_dp_terminate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


covert_search_dp.o : $(START_DIR)/covert_search_dp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


tic.o : $(START_DIR)/tic.c
	$(CC) $(CFLAGS) -o "$@" "$<"


timeKeeper.o : $(START_DIR)/timeKeeper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fileManager.o : $(START_DIR)/fileManager.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fread.o : $(START_DIR)/fread.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rand.o : $(START_DIR)/rand.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randsample.o : $(START_DIR)/randsample.c
	$(CC) $(CFLAGS) -o "$@" "$<"


histc.o : $(START_DIR)/histc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randn.o : $(START_DIR)/randn.c
	$(CC) $(CFLAGS) -o "$@" "$<"


toc.o : $(START_DIR)/toc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar_stateful.o : $(START_DIR)/eml_rand_mt19937ar_stateful.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar.o : $(START_DIR)/eml_rand_mt19937ar.c
	$(CC) $(CFLAGS) -o "$@" "$<"


covert_search_dp_emxutil.o : $(START_DIR)/covert_search_dp_emxutil.c
	$(CC) $(CFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


