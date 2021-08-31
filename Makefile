#******************************************************************************
# MK66FX1M0VMD18 makefile
#
# 
# 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Makefile to generate different sets of files for platform specific builds>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <[file].o> : <[file].c>
#      		Generates an object file for the given C-source file
#      <[file].i> : <[file].c>
#      		outputs a preprocessor file of the given C-source file
#      <[file.asm]> : <[file.c]>
#      		Stops the comiplation process before entering the Assembler stage, storing the assembly file in the .asm file
#      <compile-all> 
#      		Generates object files (*.o) for each C-source (*.c) wihtout linking them
#      <build>
#      		Generates a final Binary file (*.out) after compilation and linking all the object files
#      		Also generates an Assembly code file and a Map file related to the Target file 	
#      <clean>
#      		Deletes all the compiler toolchain generated files (*.i, *.asm, *.o, *.map, *.out) from the directory
#
#
#------------------------------------------------------------------------------
include sources.mk
BASENAME = t36
TARGET = $(BASENAME).out
Verbose = VERBOSE
Course = COURSE1
#CMP_SW = -D$(PLATFORM) -D$(Verbose) -D$(Course)

#-- Compiler flags and platform specific flags --;
#=================================================;
CC = arm-none-eabi-gcc
LD = arm-none-eabi-ld
LINKER_FILE = ./mk66_linker.ld
LDFLAGS = -Wl,-Map=$(BASENAME).map -T $(LINKER_FILE) -O0
# Architecture specific flags for ARM target platform -> These will be put in the CFLAGS for the MSP432 platform 
CPU = cortex-m4
ARCH = armv7e-m
SPECS = nosys.specs
#FPU = fpv4-sp-d16
#---------------------------------------------------------------------------------------------------------------
ARMFLAGS = -mcpu=$(CPU) -march=$(ARCH) --specs=$(SPECS) -mthumb -mfloat-abi=hard
CFLAGS = -D$(VERBOSE) -Wall -std=c99 -g $(ARMFLAGS)
OBJDUMP = arm-none-eabi-objdump
OBJCOPY = arm-none-eabi-objcopy
SIZE = arm-none-eabi-size


OBJS = $(SOURCES: .c=.o)

PREPROS = $(SOURCES: .c=.i)

ASMS = $(SOURCES: .c=.asm)

DEPS = $(SOURCES: .c=.d)

FILES= *.asm *.i *.o *.d

%.o : %.c
	$(CC) -c $< $(CFLAGS) $(INCLUDES) -o $@

%.i : %.c
	$(CC) -E $< $(CFLAGS) $(INCLUDES) -o $@

%.asm : %.c
	$(CC) -S $< $(CFLAGS) $(INCLUDES) -o $@

#--outputs the executable's assembly variant
$(BASENAME).asm : $(BASENAME).out
	$(OBJDUMP) -d $(BASENAME).out >> $@

%.d : %.c
	$(CC) -M $< $(CFLAGS) $(INCLUDES) -o $@

#-- Outputs object files (*.o) for each source file (*.c)
.PHONY: compile-all
compile-all: $(OBJS)
	$(CC) -c $(OBJS) $(CFLAGS) $(INCLUDES)

#-- Outputs a single Binary file (*.out) after Compilation and Linking all the object files present
.PHONY: build
build: $(BASENAME).out $(BASENAME).asm

$(BASENAME).out : $(OBJS) $(DEPS)
	$(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $@ $(OBJS)
	$(SIZE) -Atd $(BASENAME).out
	$(SIZE) $(BASENAME).out

#-- A command to delete all the Compiler/Linker generated files from the directory
.PHONY: clean
clean:
	rm -f $(BASENAME).asm $(BASENAME).out $(BASENAME).map $(FILES)

