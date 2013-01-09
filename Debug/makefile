################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include uart_test/subdir.mk
-include StdPeripheralDriver/src/subdir.mk
-include CMSIS/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
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
uart_test.hex \

SECONDARY_LIST += \
uart_test.lst \

SECONDARY_SIZE += \
uart_test.siz \


# All Target
all: uart_test.elf secondary-outputs

# Tool invocations
uart_test.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Sourcery Linux GCC C Linker'
	arm-none-eabi-gcc -T"D:\Cloud\Yandex\MCU\STM32\TestProjects\Eclipse\workspace\uart_test\stm32f100rb.ld" -nostartfiles -Xlinker --gc-sections -Wl,-Map,uart_test.map -mcpu=cortex-m3 -mthumb -g3 -gdwarf-2 -o"uart_test.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

uart_test.hex: uart_test.elf
	@echo 'Invoking: ARM Sourcery Linux GNU Create Flash Image'
	arm-none-eabi-objcopy -O ihex uart_test.elf "uart_test.hex"
	@echo 'Finished building: $@'
	@echo ' '

uart_test.lst: uart_test.elf
	@echo 'Invoking: ARM Sourcery Linux GNU Create Listing'
	arm-none-eabi-objdump -h -S uart_test.elf >"uart_test.lst"
	@echo 'Finished building: $@'
	@echo ' '

uart_test.siz: uart_test.elf
	@echo 'Invoking: ARM Sourcery Linux GNU Print Size'
	arm-none-eabi-size  --format=berkeley uart_test.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(SECONDARY_SIZE)$(OBJS)$(C_DEPS)$(ASM_DEPS)$(SECONDARY_FLASH)$(EXECUTABLES)$(SECONDARY_LIST)$(S_UPPER_DEPS) uart_test.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
