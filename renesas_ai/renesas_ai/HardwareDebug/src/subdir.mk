################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/renesas_ai.c 

LST += \
renesas_ai.lst 

C_DEPS += \
./src/renesas_ai.d 

OBJS += \
./src/renesas_ai.o 

MAP += \
renesas_ai.map 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'

	@echo $< && arm-none-eabi-gcc -mcpu=cortex-m0plus -march=armv6-m -mthumb -mlittle-endian -mfloat-abi=soft -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -g -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/src -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/CMSIS/Core/Include -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/CMSIS/Driver/Include -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/CMSIS/DSP_Lib/Include -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/Device -IC:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/Device/Config -std=gnu11 -fno-jump-tables -fdiagnostics-parseable-fixits -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"

