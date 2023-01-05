################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf *.lst *.lis *.lpp *.map

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/Device/subdir.mk
-include generate/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_UPPER_DEPS)),)
-include $(SRC_UPPER_DEPS)
endif
ifneq ($(strip $(P_UPPER_DEPS)),)
-include $(P_UPPER_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(PP_UPPER_DEPS)),)
-include $(PP_UPPER_DEPS)
endif
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif
ifneq ($(strip $(FSY_UPPER_DEPS)),)
-include $(FSY_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif
ifneq ($(strip $(JMP_UPPER_DEPS)),)
-include $(JMP_UPPER_DEPS)
endif
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
renesas_ai.hex \

SECONDARY_SIZE += \
renesas_ai.siz \

LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \


# All Target
all: renesas_ai.elf secondary-outputs

# Tool invocations
renesas_ai.elf: $(OBJS) $(USER_OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(LINKER_SCRIPT)
	@echo 'Building target: $@'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -march=armv6-m -mthumb -mlittle-endian -mfloat-abi=soft -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -g -o "renesas_ai.elf" $(OBJS) $(USER_OBJS) -T "C:/work/renesas/renesas_ai/renesas_ai/renesas_ai/generate/linker_script.ld" -Wl,-Map,"renesas_ai.map" -Wl,--start-group -lm -lc -lgcc -Wl,--end-group -nostartfiles -Xlinker --gc-sections -Wl,-eReset_Handler --specs=rdimon.specs
renesas_ai.hex: renesas_ai.elf
	arm-none-eabi-objcopy -O ihex "renesas_ai.elf"  "renesas_ai.hex"
renesas_ai.siz: renesas_ai.elf
	arm-none-eabi-size --format=berkeley "renesas_ai.elf"
: 
	arm-none-eabi-libgen  --header-files=all --select-lib=newlib --compiler-options=-O2,-fmessage-length=0,-fsigned-char,-ffunction-sections,-fdata-sections,-mcpu=cortex-m0plus,-march=armv6-m,-mthumb,-mlittle-endian,-mfloat-abi=soft --assembler-options=-mcpu=cortex-m0plus,-march=armv6-m,-mthumb,-mlittle-endian,-mfloat-abi=soft -o
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(JMP_DEPS)  $(FSY_DEPS)  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(SRC_UPPER_DEPS)  $(P_UPPER_DEPS)  $(S_DEPS)  $(LST)  $(PP_UPPER_DEPS)  $(P_DEPS)  $(FSY_UPPER_DEPS)  $(C_DEPS)  $(SRC_DEPS)  $(JMP_UPPER_DEPS)  $(PP_DEPS)  $(ASM_UPPER_DEPS)  $(SX_DEPS)  $(SX_UPPER_DEPS)  $(OBJS)  $(SECONDARY_FLASH)  $(ASM_DEPS)  $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)  $(S_UPPER_DEPS)  $(MAP) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  renesas_ai.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents 

-include ../makefile.targets
