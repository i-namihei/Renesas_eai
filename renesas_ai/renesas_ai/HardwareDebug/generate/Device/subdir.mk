################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/Device/startup_RE01_256KB.c \
../generate/Device/system_RE01_256KB.c 

LST += \
startup_RE01_256KB.lst \
system_RE01_256KB.lst 

C_DEPS += \
./generate/Device/startup_RE01_256KB.d \
./generate/Device/system_RE01_256KB.d 

OBJS += \
./generate/Device/startup_RE01_256KB.o \
./generate/Device/system_RE01_256KB.o 

MAP += \
renesas_ai.map 


# Each subdirectory must supply rules for building sources it contributes
generate/Device/%.o: ../generate/Device/%.c
	@echo 'Building file: $<'

	@echo $< && arm-none-eabi-gcc -mcpu=cortex-m0plus -march=armv6-m -mthumb -mlittle-endian -mfloat-abi=soft -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -g -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/src -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/CMSIS/Core/Include -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/CMSIS/Driver/Include -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/CMSIS/DSP_Lib/Include -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/Device -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/Device/Config -std=gnu11 -fno-jump-tables -fdiagnostics-parseable-fixits -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"

