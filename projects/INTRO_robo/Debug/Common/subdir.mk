################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Mario/workspace.kds/INTRO_Common/Common/mario.c 

OBJS += \
./Common/mario.o 

C_DEPS += \
./Common/mario.d 


# Each subdirectory must supply rules for building sources it contributes
Common/mario.o: C:/Users/Mario/workspace.kds/INTRO_Common/Common/mario.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/Mario/workspace.kds/INTRO_robo/Static_Code/PDD" -I"C:/Users/Mario/workspace.kds/INTRO_robo/Static_Code/IO_Map" -I"C:/Users/Mario/workspace.kds/INTRO_robo/Sources" -I"C:/Users/Mario/workspace.kds/INTRO_robo/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


