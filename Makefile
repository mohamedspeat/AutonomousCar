################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../APP \
../HALL \
../HALL/LCD \
../HALL/L293D \
../HALL/HCSR04 \
../HALL/Servo_Motor \
../MCAL \
../MCAL/DIO \
../MCAL/Configration \
../MCAL/TIMER


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../APP/main.c \
../HALL/HCSR04/HCSR04_Inerface.c \
../HALL/L293D/L293D_Interface.c \
../HALL/LCD/LCD_Interface.c \
../HALL/Servo_Motor/Servo_Inerface.c \
../MCAL/DIO/DIO_Interface.c \
../MCAL/TIMER/TIMER_Interface.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
APP/main.o \
HALL/HCSR04/HCSR04_Inerface.o \
HALL/L293D/L293D_Interface.o \
HALL/LCD/LCD_Interface.o \
HALL/Servo_Motor/Servo_Inerface.o \
MCAL/DIO/DIO_Interface.o \
MCAL/TIMER/TIMER_Interface.o

OBJS_AS_ARGS +=  \
APP/main.o \
HALL/HCSR04/HCSR04_Inerface.o \
HALL/L293D/L293D_Interface.o \
HALL/LCD/LCD_Interface.o \
HALL/Servo_Motor/Servo_Inerface.o \
MCAL/DIO/DIO_Interface.o \
MCAL/TIMER/TIMER_Interface.o

C_DEPS +=  \
APP/main.d \
HALL/HCSR04/HCSR04_Inerface.d \
HALL/L293D/L293D_Interface.d \
HALL/LCD/LCD_Interface.d \
HALL/Servo_Motor/Servo_Inerface.d \
MCAL/DIO/DIO_Interface.d \
MCAL/TIMER/TIMER_Interface.d

C_DEPS_AS_ARGS +=  \
APP/main.d \
HALL/HCSR04/HCSR04_Inerface.d \
HALL/L293D/L293D_Interface.d \
HALL/LCD/LCD_Interface.d \
HALL/Servo_Motor/Servo_Inerface.d \
MCAL/DIO/DIO_Interface.d \
MCAL/TIMER/TIMER_Interface.d

OUTPUT_FILE_PATH +=final\ project.elf

OUTPUT_FILE_PATH_AS_ARGS +="final project.elf"

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
APP/main.o: ../APP/main.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HALL/HCSR04/HCSR04_Inerface.o: ../HALL/HCSR04/HCSR04_Inerface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HALL/L293D/L293D_Interface.o: ../HALL/L293D/L293D_Interface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HALL/LCD/LCD_Interface.o: ../HALL/LCD/LCD_Interface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HALL/Servo_Motor/Servo_Inerface.o: ../HALL/Servo_Motor/Servo_Inerface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/DIO/DIO_Interface.o: ../MCAL/DIO/DIO_Interface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/TIMER/TIMER_Interface.o: ../MCAL/TIMER/TIMER_Interface.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include" -I"../APP" -I"../HALL" -I"../MCAL" -I"../MCAL/Configration" -I"../MCAL/DIO" -I"../HALL/LCD" -I"../HALL/Servo_Motor" -I"../HALL/L293D" -I"../MCAL/TIMER" -I"../HALL/HCSR04"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="final project.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega32"  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "final project.elf" "final project.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "final project.elf" "final project.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "final project.elf" > "final project.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "final project.elf" "final project.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "final project.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "final project.elf" "final project.a" "final project.hex" "final project.lss" "final project.eep" "final project.map" "final project.srec" "final project.usersignatures"
	