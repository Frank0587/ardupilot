/*
 generated hardware definitions from hwdef.dat - DO NOT EDIT
*/

#pragma once

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#define MHZ (1000U*1000U)
#define KHZ (1000U)


#define AP_SIGNED_FIRMWARE 0

#define HAL_ENABLE_DFU_BOOT FALSE
#define CHIBIOS_BOARD_NAME "SpeedyBeeF405WING"
// MCU type (ChibiOS define)
#define STM32F4xx_MCUCONF
#define STM32F405_MCUCONF

#define STM32F405xx

// crystal frequency
#define STM32_HSECLK 8000000U

// UART used for stdout (printf)
// MMC via SPI available, enable POSIX filesystem support
#define USE_POSIX

#define HAL_USE_MMC_SPI TRUE
#define HAL_USE_SDC FALSE
#define HAL_SDCARD_SPI_HOOK TRUE
#define STM32_USB_USE_OTG1                  TRUE
#define STM32_OTG2_IS_OTG1                  FALSE
#define HAL_USE_USB TRUE
#define HAL_USE_SERIAL_USB TRUE
#ifndef STM32F4
#define STM32F4 1
#endif
#define HAL_USE_HW_RNG FALSE
#define HAL_PROCESS_STACK_SIZE 0x1C00
#define STM32_ST_USE_TIMER 5
#define CH_CFG_ST_RESOLUTION 32
#define HAL_STORAGE_SIZE 15360
#define HAL_GPIO_A_LED_PIN 0
#define HAL_GPIO_B_LED_PIN 1
#define HAL_BUZZER_PIN 80
#define HAL_DEFAULT_AIRSPEED_PIN 15
#define HAL_BATT_MONITOR_DEFAULT 4
#define HAL_BATT_VOLT_PIN 10
#define HAL_BATT_CURR_PIN 11
#define HAL_BATT_VOLT_SCALE 11.05
#define HAL_BATT_CURR_SCALE 50
#define BOARD_RSSI_ANA_PIN 14
#define DEFAULT_SERIAL6_BAUD 115
#define HAL_DEFAULT_INS_FAST_SAMPLE 1
#define AP_BARO_BACKEND_DEFAULT_ENABLED 0
#define AP_BARO_SPL06_ENABLED 1
#define ALLOW_ARM_NO_COMPASS
#define HAL_PROBE_EXTERNAL_I2C_COMPASSES
#define HAL_I2C_INTERNAL_MASK 0
#define HAL_COMPASS_AUTO_ROT_DEFAULT 2
#define HAL_OS_FATFS_IO 1
#define OSD_ENABLED 1
#define HAL_OSD_TYPE_DEFAULT 1
#define STM32_PWM_USE_ADVANCED TRUE
#define AP_RC_CHANNEL_AUX_FUNCTION_STRINGS_ENABLED 0
#define HAL_HIGH_LATENCY2_ENABLED 0
#define AP_GRIPPER_ENABLED 0
#define HAL_SPRAYER_ENABLED 0
#define HAL_GYROFFT_ENABLED 0
#define AP_NOTIFY_NCP5623_ENABLED 0
#define HAL_HOTT_TELEM_ENABLED 0
#define AP_GPS_BACKEND_DEFAULT_ENABLED 0
#define AP_GPS_UBLOX_ENABLED 1
#define AP_GPS_DRONECAN_ENABLED HAL_ENABLE_DRONECAN_DRIVERS
#define HAL_MSP_GPS_ENABLED HAL_MSP_SENSORS_ENABLED
#define GPS_MOVING_BASELINE 0
#define AP_LTM_TELEM_ENABLED 0
#define NUM_SERVO_CHANNELS 16
#define AP_WINCH_ENABLED 0
#define AP_CAMERA_BACKEND_DEFAULT_ENABLED 0
#define AP_CAMERA_RELAY_ENABLED AP_CAMERA_ENABLED
#define AP_CAMERA_SERVO_ENABLED AP_CAMERA_ENABLED
#define AP_CAN_SLCAN_ENABLED 0
#define HAL_PICCOLO_CAN_ENABLE 0
#define AP_BEACON_ENABLED 0
#define AP_BATTERY_BACKEND_DEFAULT_ENABLED 0
#define AP_BATTERY_ANALOG_ENABLED 1
#define AP_BATTERY_ESC_ENABLED HAL_WITH_ESC_TELEM
#define AP_BATTERY_WATT_MAX_ENABLED 0
#define AP_BATTERY_UAVCAN_BATTERYINFO_ENABLED HAL_ENABLE_DRONECAN_DRIVERS
#define AP_BATTERY_SUM_ENABLED 1
#define AP_BATTERY_SYNTHETIC_CURRENT_ENABLED 1
#define AP_BATTERY_SMBUS_ENABLED 1
#define AP_BATTERY_SMBUS_GENERIC_ENABLED AP_BATTERY_SMBUS_ENABLED
#define AP_BATTERY_SMBUS_NEODESIGN_ENABLED AP_BATTERY_SMBUS_ENABLED
#define AP_BATTERY_SMBUS_SUI_ENABLED AP_BATTERY_SMBUS_ENABLED
#define AP_BATTERY_SMBUS_MAXELL_ENABLED AP_BATTERY_SMBUS_ENABLED
#define AP_BATTERY_SMBUS_ROTOYE_ENABLED AP_BATTERY_SMBUS_ENABLED
#define AP_BARO_PROBE_EXTERNAL_I2C_BUSES 0
#define HAL_BARO_WIND_COMP_ENABLED 0
#define HAL_GENERATOR_ENABLED 0
#define HAL_NMEA_OUTPUT_ENABLED 0
#define HAL_DISPLAY_ENABLED 0
#define AP_INERTIALSENSOR_KILL_IMU_ENABLED 0
#define AP_SCHEDULER_EXTENDED_TASKINFO_ENABLED 0
#define OFFBOARD_GUIDED 0
#define QAUTOTUNE_ENABLED 0
#define MODE_FLOWHOLD_ENABLED 0
#define MODE_ZIGZAG_ENABLED 0
#define AC_NAV_GUIDED 0
#define AC_OAPATHPLANNER_ENABLED 0
#define MODE_FOLLOW_ENABLED 0
#define MODE_GUIDED_NOGPS_ENABLED 0
#define MODE_SYSTEMID_ENABLED 0
#define WEATHERVANE_ENABLED 0
#define MODE_AUTOROTATE_ENABLED 0
#define AP_MAVLINK_MSG_RELAY_STATUS_ENABLED 0
#define AP_AIRSPEED_BACKEND_DEFAULT_ENABLED 0
#define AP_AIRSPEED_MS4525_ENABLED 1
#define AP_AIRSPEED_ASP5033_ENABLED 1
#define AP_AIRSPEED_ANALOG_ENABLED 1
#define AP_AIRSPEED_MS5525_ENABLED 1
#define AP_AIRSPEED_SDP3X_ENABLED 1
#define AP_AIRSPEED_NMEA_ENABLED 1
#define AP_AIRSPEED_DRONECAN_ENABLED HAL_ENABLE_DRONECAN_DRIVERS
#define AP_MISSION_NAV_PAYLOAD_PLACE_ENABLED 0
#define AC_PAYLOAD_PLACE_ENABLED 0
#define AP_OPTICALFLOW_ENABLED 0
#define AP_GPS_BACKEND_DEFAULT_ENABLED 0
#define AP_GPS_UBLOX_ENABLED 1
#define AP_GPS_NMEA_ENABLED 1
#define HAL_MSP_GPS_ENABLED HAL_MSP_SENSORS_ENABLED
#define AP_MOTORS_FRAME_DEFAULT_ENABLED 0
#define AP_MOTORS_FRAME_QUAD_ENABLED 1
#define AP_MOTORS_FRAME_HEXA_ENABLED 1
#define AP_MOTORS_FRAME_OCTA_ENABLED 1
#define AP_SBUSOUTPUT_ENABLED 0
#define AP_ICENGINE_ENABLED 0
#define AP_ADVANCEDFAILSAFE_ENABLED 0
#define AC_PRECLAND_ENABLED 0
#define AP_TRAMP_ENABLED AP_VIDEOTX_ENABLED && OSD_ENABLED
#define HAL_CRSF_TELEM_TEXT_SELECTION_ENABLED OSD_ENABLED && OSD_PARAM_ENABLED && HAL_CRSF_TELEM_ENABLED
#define AP_CAMERA_MOUNT_ENABLED 1
#define AP_LANDINGGEAR_ENABLED 1
#define HAL_MOUNT_ENABLED 1
#define HAL_MOUNT_SERVO_ENABLED 1
#define HAL_QUADPLANE_ENABLED 0
#define DEFAULT_NTF_LED_TYPES 257
#define BOARD_FLASH_SIZE 1024

// location of loaded firmware
#define FLASH_LOAD_ADDRESS 0x08010000
#define EXT_FLASH_SIZE_MB 0
#define EXT_FLASH_RESERVE_START_KB 0
#define EXT_FLASH_RESERVE_END_KB 0
#define CRT0_AREAS_NUMBER 1
#define __EXTFLASHFUNC__
#define STORAGE_FLASH_PAGE 1
#ifndef AP_CRASHDUMP_ENABLED
#define AP_CRASHDUMP_ENABLED 0
#endif

#define HAL_RAM0_START 0x20000000
// memory regions
#define HAL_MEMORY_REGIONS {(void*)0x20000000, 0x00020000, 0x01 }, {(void*)0x10000000, 0x00010000, 0x02 }
#define HAL_CC_MEMORY_REGIONS {0x20000000, 0x20020000, CRASH_CATCHER_BYTE }, {0x10000000, 0x10010000, CRASH_CATCHER_BYTE }
#define HAL_MEMORY_TOTAL_KB 192

// CPU serial number (12 bytes)
#define UDID_START UID_BASE


// APJ board ID (for bootloaders)
#define APJ_BOARD_ID 1106

#ifndef HAL_ENABLE_THREAD_STATISTICS
#define HAL_ENABLE_THREAD_STATISTICS FALSE
#endif
    
#ifndef HAL_HAVE_HARDWARE_DOUBLE
#define HAL_HAVE_HARDWARE_DOUBLE 0
#endif
#define HAL_EXPECTED_SYSCLOCK 168000000
#define STM32_DMA_REQUIRED TRUE


#ifndef HAL_FLASH_PROTECTION
#define HAL_FLASH_PROTECTION 0
#endif
#define HAL_SPI1_CONFIG { &SPID1, 1, STM32_SPI_SPI1_DMA_STREAMS, PAL_LINE(GPIOA,5U) }
#define HAL_SPI2_CONFIG { &SPID2, 2, STM32_SPI_SPI2_DMA_STREAMS, PAL_LINE(GPIOB,13U) }
#define HAL_SPI3_CONFIG { &SPID3, 3, STM32_SPI_SPI3_DMA_STREAMS, PAL_LINE(GPIOB,3U) }
#define HAL_SPI_BUS_LIST HAL_SPI1_CONFIG,HAL_SPI2_CONFIG,HAL_SPI3_CONFIG


// SPI device table
#define HAL_SPI_DEVICE0  SPIDesc("icm42605"       ,  0,  1, PAL_LINE(GPIOA,4U) , SPIDEV_MODE3,   2*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE1  SPIDesc("osd"            ,  1,  2, PAL_LINE(GPIOB,12U), SPIDEV_MODE0,  10*MHZ,  10*MHZ)
#define HAL_SPI_DEVICE2  SPIDesc("sdcard"         ,  2,  3, PAL_LINE(GPIOC,14U), SPIDEV_MODE0, 400*KHZ,  25*MHZ)
#define HAL_SPI_DEVICE_LIST HAL_SPI_DEVICE0,HAL_SPI_DEVICE1,HAL_SPI_DEVICE2

#define HAL_WITH_SPI_ICM42605 1
#define HAL_WITH_SPI_OSD 1
#define HAL_WITH_SPI_SDCARD 1

// ADC config
#define HAL_ANALOG_PINS \
{ 10, 10,    3.30/4096 }, /* PC0 BATT_VOLTAGE_SENS */ \
{ 11, 11,    3.30/4096 }, /* PC1 BATT_CURRENT_SENS */ \
{ 14, 14,    3.30/4096 }, /* PC4 RSSI_ADC_PIN */ \
{ 15, 15,    3.30/4096 }, /* PC5 PRESSURE_SENS */ \


// GPIO config
#define HAL_GPIO_LINE_GPIO0 PAL_LINE(GPIOA,13U)
#define HAL_GPIO_LINE_GPIO1 PAL_LINE(GPIOA,14U)
#define HAL_GPIO_LINE_GPIO50 PAL_LINE(GPIOB,7U)
#define HAL_GPIO_LINE_GPIO51 PAL_LINE(GPIOB,6U)
#define HAL_GPIO_LINE_GPIO52 PAL_LINE(GPIOB,0U)
#define HAL_GPIO_LINE_GPIO53 PAL_LINE(GPIOB,1U)
#define HAL_GPIO_LINE_GPIO54 PAL_LINE(GPIOC,8U)
#define HAL_GPIO_LINE_GPIO55 PAL_LINE(GPIOC,9U)
#define HAL_GPIO_LINE_GPIO56 PAL_LINE(GPIOB,14U)
#define HAL_GPIO_LINE_GPIO57 PAL_LINE(GPIOA,15U)
#define HAL_GPIO_LINE_GPIO58 PAL_LINE(GPIOB,10U)
#define HAL_GPIO_LINE_GPIO59 PAL_LINE(GPIOB,11U)
#define HAL_GPIO_LINE_GPIO60 PAL_LINE(GPIOB,15U)
#define HAL_GPIO_LINE_GPIO61 PAL_LINE(GPIOA,8U)
#define HAL_GPIO_LINE_GPIO80 PAL_LINE(GPIOC,15U)
#define HAL_GPIO_LINE_GPIO81 PAL_LINE(GPIOC,13U)
#define HAL_GPIO_PINS { \
{   0, true,  0, PAL_LINE(GPIOA,13U)}, /* PA13 LED_GREEN OUTPUT */ \
{   1, true,  0, PAL_LINE(GPIOA,14U)}, /* PA14 LED_BLUE OUTPUT */ \
{  50, true,  1, PAL_LINE(GPIOB,7U)}, /* PB7 TIM4_CH2 TIM4 AF2 PWM1 */ \
{  51, true,  2, PAL_LINE(GPIOB,6U)}, /* PB6 TIM4_CH1 TIM4 AF2 PWM2 */ \
{  52, true,  3, PAL_LINE(GPIOB,0U)}, /* PB0 TIM3_CH3 TIM3 AF2 PWM3 */ \
{  53, true,  4, PAL_LINE(GPIOB,1U)}, /* PB1 TIM3_CH4 TIM3 AF2 PWM4 */ \
{  54, true,  5, PAL_LINE(GPIOC,8U)}, /* PC8 TIM8_CH3 TIM8 AF3 PWM5 */ \
{  55, true,  6, PAL_LINE(GPIOC,9U)}, /* PC9 TIM8_CH4 TIM8 AF3 PWM6 */ \
{  56, true,  7, PAL_LINE(GPIOB,14U)}, /* PB14 TIM8_CH2N TIM8 AF3 PWM7 */ \
{  57, true,  8, PAL_LINE(GPIOA,15U)}, /* PA15 TIM2_CH1 TIM2 AF1 PWM8 */ \
{  58, true,  9, PAL_LINE(GPIOB,10U)}, /* PB10 TIM2_CH3 TIM2 AF1 PWM9 */ \
{  59, true, 10, PAL_LINE(GPIOB,11U)}, /* PB11 TIM2_CH4 TIM2 AF1 PWM10 */ \
{  60, true, 11, PAL_LINE(GPIOB,15U)}, /* PB15 TIM1_CH3N TIM1 AF1 PWM11 */ \
{  61, true, 12, PAL_LINE(GPIOA,8U)}, /* PA8 TIM1_CH1 TIM1 AF1 PWM12 */ \
{  80, true,  0, PAL_LINE(GPIOC,15U)}, /* PC15 BUZZER OUTPUT */ \
{  81, true,  0, PAL_LINE(GPIOC,13U)}, /* PC13 PINIO1 OUTPUT */ \
}

// full pin define list
#define HAL_GPIO_PIN_BATT_CURRENT_SENS    PAL_LINE(GPIOC,1U)
#define HAL_GPIO_PIN_BATT_VOLTAGE_SENS    PAL_LINE(GPIOC,0U)
#define HAL_GPIO_PIN_BUZZER               PAL_LINE(GPIOC,15U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_I2C1_SDA             PAL_LINE(GPIOB,9U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_LED_BLUE             PAL_LINE(GPIOA,14U)
#define HAL_GPIO_PIN_LED_GREEN            PAL_LINE(GPIOA,13U)
#define HAL_GPIO_PIN_MPU_CS               PAL_LINE(GPIOA,4U)
#define HAL_GPIO_PIN_OSD_CS               PAL_LINE(GPIOB,12U)
#define HAL_GPIO_PIN_OTG_FS_DM            PAL_LINE(GPIOA,11U)
#define HAL_GPIO_PIN_OTG_FS_DP            PAL_LINE(GPIOA,12U)
#define HAL_GPIO_PIN_PINIO1               PAL_LINE(GPIOC,13U)
#define HAL_GPIO_PIN_PRESSURE_SENS        PAL_LINE(GPIOC,5U)
#define HAL_GPIO_PIN_RSSI_ADC_PIN         PAL_LINE(GPIOC,4U)
#define HAL_GPIO_PIN_SDCARD_CS            PAL_LINE(GPIOC,14U)
#define HAL_GPIO_PIN_SPI1_MISO            PAL_LINE(GPIOA,6U)
#define HAL_GPIO_PIN_SPI1_MOSI            PAL_LINE(GPIOA,7U)
#define HAL_GPIO_PIN_SPI1_SCK             PAL_LINE(GPIOA,5U)
#define HAL_GPIO_PIN_SPI2_MISO            PAL_LINE(GPIOC,2U)
#define HAL_GPIO_PIN_SPI2_MOSI            PAL_LINE(GPIOC,3U)
#define HAL_GPIO_PIN_SPI2_SCK             PAL_LINE(GPIOB,13U)
#define HAL_GPIO_PIN_SPI3_MISO            PAL_LINE(GPIOB,4U)
#define HAL_GPIO_PIN_SPI3_MOSI            PAL_LINE(GPIOB,5U)
#define HAL_GPIO_PIN_SPI3_SCK             PAL_LINE(GPIOB,3U)
#define HAL_GPIO_PIN_TIM1_CH1             PAL_LINE(GPIOA,8U)
#define HAL_GPIO_PIN_TIM1_CH3N            PAL_LINE(GPIOB,15U)
#define HAL_GPIO_PIN_TIM2_CH1             PAL_LINE(GPIOA,15U)
#define HAL_GPIO_PIN_TIM2_CH3             PAL_LINE(GPIOB,10U)
#define HAL_GPIO_PIN_TIM2_CH4             PAL_LINE(GPIOB,11U)
#define HAL_GPIO_PIN_TIM3_CH3             PAL_LINE(GPIOB,0U)
#define HAL_GPIO_PIN_TIM3_CH4             PAL_LINE(GPIOB,1U)
#define HAL_GPIO_PIN_TIM4_CH1             PAL_LINE(GPIOB,6U)
#define HAL_GPIO_PIN_TIM4_CH2             PAL_LINE(GPIOB,7U)
#define HAL_GPIO_PIN_TIM8_CH2N            PAL_LINE(GPIOB,14U)
#define HAL_GPIO_PIN_TIM8_CH3             PAL_LINE(GPIOC,8U)
#define HAL_GPIO_PIN_TIM8_CH4             PAL_LINE(GPIOC,9U)
#define HAL_GPIO_PIN_TIM9_CH2             PAL_LINE(GPIOA,3U)
#define HAL_GPIO_PIN_UART4_RX             PAL_LINE(GPIOA,1U)
#define HAL_GPIO_PIN_UART4_TX             PAL_LINE(GPIOA,0U)
#define HAL_GPIO_PIN_UART5_RX             PAL_LINE(GPIOD,2U)
#define HAL_GPIO_PIN_UART5_TX             PAL_LINE(GPIOC,12U)
#define HAL_GPIO_PIN_USART1_RX            PAL_LINE(GPIOA,10U)
#define HAL_GPIO_PIN_USART1_TX            PAL_LINE(GPIOA,9U)
#define HAL_GPIO_PIN_USART2_TX            PAL_LINE(GPIOA,2U)
#define HAL_GPIO_PIN_USART3_RX            PAL_LINE(GPIOC,11U)
#define HAL_GPIO_PIN_USART3_TX            PAL_LINE(GPIOC,10U)
#define HAL_GPIO_PIN_USART6_RX            PAL_LINE(GPIOC,7U)
#define HAL_GPIO_PIN_USART6_TX            PAL_LINE(GPIOC,6U)

#define HAL_INS_PROBE1  ADD_BACKEND(AP_InertialSensor_Invensensev3::probe(*this,hal.spi->get_device("icm42605"),ROTATION_ROLL_180_YAW_270))
#define INS_MAX_INSTANCES 1
#define HAL_INS_PROBE_LIST HAL_INS_PROBE1

#define HAL_BARO_PROBE1  ADD_BACKEND(AP_Baro_SPL06::probe(*this,GET_I2C_DEVICE(0,0x76)))
#define HAL_BARO_PROBE_LIST HAL_BARO_PROBE1

// peripherals enabled
#define STM32_I2C_USE_I2C1                  TRUE
#define STM32_SPI_USE_SPI1                  TRUE
#define STM32_SPI_USE_SPI2                  TRUE
#define STM32_SPI_USE_SPI3                  TRUE
#ifndef STM32_SERIAL_USE_UART4 
#define STM32_SERIAL_USE_UART4  TRUE
#endif
#ifndef STM32_SERIAL_USE_UART5 
#define STM32_SERIAL_USE_UART5  TRUE
#endif
#ifndef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART3
#define STM32_SERIAL_USE_USART3 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART6
#define STM32_SERIAL_USE_USART6 TRUE
#endif
#define AP_PARAM_DEFAULTS_FILE_PARSING_ENABLED 1


// auto-generated DMA mapping from dma_resolver.py

// Note: The following peripherals can't be resolved for DMA: ['USART6_RX']

#define STM32_ADC_ADC1_DMA_STREAM      STM32_DMA_STREAM_ID(2, 4)
#define STM32_ADC_ADC1_DMA_CHAN        0
#define STM32_I2C_I2C1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 5)
#define STM32_I2C_I2C1_RX_DMA_CHAN     1
#define STM32_I2C_I2C1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7) // shared SPI3_TX,I2C1_TX,UART5_TX
#define STM32_I2C_I2C1_TX_DMA_CHAN     1
#define STM32_SPI_SPI1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 0)
#define STM32_SPI_SPI1_RX_DMA_CHAN     3
#define STM32_SPI_SPI1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 3)
#define STM32_SPI_SPI1_TX_DMA_CHAN     3
#define STM32_SPI_SPI2_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 3)
#define STM32_SPI_SPI2_RX_DMA_CHAN     0
#define STM32_SPI_SPI2_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,USART3_TX,UART4_TX
#define STM32_SPI_SPI2_TX_DMA_CHAN     0
#define STM32_SPI_SPI3_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 0)
#define STM32_SPI_SPI3_RX_DMA_CHAN     0
#define STM32_SPI_SPI3_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7) // shared SPI3_TX,I2C1_TX,UART5_TX
#define STM32_SPI_SPI3_TX_DMA_CHAN     0
#define STM32_TIM_TIM1_UP_DMA_STREAM   STM32_DMA_STREAM_ID(2, 5)
#define STM32_TIM_TIM1_UP_DMA_CHAN     6
#define STM32_TIM_TIM2_UP_DMA_STREAM   STM32_DMA_STREAM_ID(1, 1)
#define STM32_TIM_TIM2_UP_DMA_CHAN     3
#define STM32_TIM_TIM3_UP_DMA_STREAM   STM32_DMA_STREAM_ID(1, 2)
#define STM32_TIM_TIM3_UP_DMA_CHAN     5
#define STM32_TIM_TIM4_UP_DMA_STREAM   STM32_DMA_STREAM_ID(1, 6)
#define STM32_TIM_TIM4_UP_DMA_CHAN     2
#define STM32_TIM_TIM8_UP_DMA_STREAM   STM32_DMA_STREAM_ID(2, 1)
#define STM32_TIM_TIM8_UP_DMA_CHAN     7
#define STM32_UART_UART4_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,USART3_TX,UART4_TX
#define STM32_UART_UART4_TX_DMA_CHAN   4
#define STM32_UART_UART5_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 7) // shared SPI3_TX,I2C1_TX,UART5_TX
#define STM32_UART_UART5_TX_DMA_CHAN   4
#define STM32_UART_USART1_RX_DMA_STREAM STM32_DMA_STREAM_ID(2, 2)
#define STM32_UART_USART1_RX_DMA_CHAN  4
#define STM32_UART_USART1_TX_DMA_STREAM STM32_DMA_STREAM_ID(2, 7)
#define STM32_UART_USART1_TX_DMA_CHAN  4
#define STM32_UART_USART3_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,USART3_TX,UART4_TX
#define STM32_UART_USART3_TX_DMA_CHAN  7
#define STM32_UART_USART6_TX_DMA_STREAM STM32_DMA_STREAM_ID(2, 6)
#define STM32_UART_USART6_TX_DMA_CHAN  5

// Mask of DMA streams which are shared
#define SHARED_DMA_MASK ((1U<<STM32_DMA_STREAM_ID(1,4))|(1U<<STM32_DMA_STREAM_ID(1,7)))


// generated UART DMA configuration lines
#define STM32_USART1_RX_DMA_CONFIG true, STM32_UART_USART1_RX_DMA_STREAM, STM32_UART_USART1_RX_DMA_CHAN
#define STM32_USART1_TX_DMA_CONFIG true, STM32_UART_USART1_TX_DMA_STREAM, STM32_UART_USART1_TX_DMA_CHAN
#define STM32_USART2_RX_DMA_CONFIG false, 0, 0
#define STM32_USART2_TX_DMA_CONFIG false, 0, 0
#define STM32_USART3_RX_DMA_CONFIG false, 0, 0
#define STM32_USART3_TX_DMA_CONFIG true, STM32_UART_USART3_TX_DMA_STREAM, STM32_UART_USART3_TX_DMA_CHAN
#define STM32_UART4_RX_DMA_CONFIG false, 0, 0
#define STM32_UART4_TX_DMA_CONFIG true, STM32_UART_UART4_TX_DMA_STREAM, STM32_UART_UART4_TX_DMA_CHAN
#define STM32_UART5_RX_DMA_CONFIG false, 0, 0
#define STM32_UART5_TX_DMA_CONFIG true, STM32_UART_UART5_TX_DMA_STREAM, STM32_UART_UART5_TX_DMA_CHAN
#define STM32_USART6_RX_DMA_CONFIG false, 0, 0
#define STM32_USART6_TX_DMA_CONFIG true, STM32_UART_USART6_TX_DMA_STREAM, STM32_UART_USART6_TX_DMA_CHAN


// generated SPI DMA configuration lines
#define STM32_SPI_SPI1_DMA_STREAMS STM32_SPI_SPI1_TX_DMA_STREAM, STM32_SPI_SPI1_RX_DMA_STREAM
#define STM32_SPI_SPI2_DMA_STREAMS STM32_SPI_SPI2_TX_DMA_STREAM, STM32_SPI_SPI2_RX_DMA_STREAM
#define STM32_SPI_SPI3_DMA_STREAMS STM32_SPI_SPI3_TX_DMA_STREAM, STM32_SPI_SPI3_RX_DMA_STREAM
#define HAL_PWM_COUNT 12
// RC input config
#define HAL_USE_EICU TRUE
#define STM32_EICU_USE_TIM9 TRUE
#define RCININT_EICU_TIMER EICUD9
#define RCININT_EICU_CHANNEL EICU_CHANNEL_2


// No Alarm output pin defined
#undef HAL_PWM_ALARM

// PWM timer config
#define STM32_PWM_USE_TIM2 TRUE
#define STM32_TIM2_SUPPRESS_ISR
#define STM32_PWM_USE_TIM3 TRUE
#define STM32_TIM3_SUPPRESS_ISR
#define STM32_PWM_USE_TIM4 TRUE
#define STM32_TIM4_SUPPRESS_ISR
#define STM32_PWM_USE_TIM8 TRUE
#define STM32_TIM8_SUPPRESS_ISR
#define STM32_PWM_USE_TIM1 TRUE
#define STM32_TIM1_SUPPRESS_ISR

// PWM output config
#if defined(STM32_TIM_TIM2_UP_DMA_STREAM) && defined(STM32_TIM_TIM2_UP_DMA_CHAN)
# define HAL_PWM2_DMA_CONFIG true, STM32_TIM_TIM2_UP_DMA_STREAM, STM32_TIM_TIM2_UP_DMA_CHAN
#else
# define HAL_PWM2_DMA_CONFIG false, 0, 0
#endif
#if !defined(HAL_TIM2_UP_SHARED)
#define HAL_TIM2_UP_SHARED false
#endif
#define HAL_PWM_GROUP1 { false, \
        {7, 255, 8, 9}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD2, 2, \
          HAL_PWM2_DMA_CONFIG, \
          { 1, 0, 1, 1 }, \
          { PAL_LINE(GPIOA,15U), 0, PAL_LINE(GPIOB,10U), PAL_LINE(GPIOB,11U) }}
#if defined(STM32_TIM_TIM3_UP_DMA_STREAM) && defined(STM32_TIM_TIM3_UP_DMA_CHAN)
# define HAL_PWM3_DMA_CONFIG true, STM32_TIM_TIM3_UP_DMA_STREAM, STM32_TIM_TIM3_UP_DMA_CHAN
#else
# define HAL_PWM3_DMA_CONFIG false, 0, 0
#endif
#if !defined(HAL_TIM3_UP_SHARED)
#define HAL_TIM3_UP_SHARED false
#endif
#define HAL_PWM_GROUP2 { false, \
        {255, 255, 2, 3}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD3, 3, \
          HAL_PWM3_DMA_CONFIG, \
          { 0, 0, 2, 2 }, \
          { 0, 0, PAL_LINE(GPIOB,0U), PAL_LINE(GPIOB,1U) }}
#if defined(STM32_TIM_TIM4_UP_DMA_STREAM) && defined(STM32_TIM_TIM4_UP_DMA_CHAN)
# define HAL_PWM4_DMA_CONFIG true, STM32_TIM_TIM4_UP_DMA_STREAM, STM32_TIM_TIM4_UP_DMA_CHAN
#else
# define HAL_PWM4_DMA_CONFIG false, 0, 0
#endif
#if !defined(HAL_TIM4_UP_SHARED)
#define HAL_TIM4_UP_SHARED false
#endif
#define HAL_PWM_GROUP3 { false, \
        {1, 0, 255, 255}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}  \
          }, 0, 0}, &PWMD4, 4, \
          HAL_PWM4_DMA_CONFIG, \
          { 2, 2, 0, 0 }, \
          { PAL_LINE(GPIOB,6U), PAL_LINE(GPIOB,7U), 0, 0 }}
#if defined(STM32_TIM_TIM8_UP_DMA_STREAM) && defined(STM32_TIM_TIM8_UP_DMA_CHAN)
# define HAL_PWM8_DMA_CONFIG true, STM32_TIM_TIM8_UP_DMA_STREAM, STM32_TIM_TIM8_UP_DMA_CHAN
#else
# define HAL_PWM8_DMA_CONFIG false, 0, 0
#endif
#if !defined(HAL_TIM8_UP_SHARED)
#define HAL_TIM8_UP_SHARED false
#endif
#define HAL_PWM_GROUP4 { true, \
        {255, 6, 4, 5}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_COMPLEMENTARY_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD8, 8, \
          HAL_PWM8_DMA_CONFIG, \
          { 0, 3, 3, 3 }, \
          { 0, PAL_LINE(GPIOB,14U), PAL_LINE(GPIOC,8U), PAL_LINE(GPIOC,9U) }}
#if defined(STM32_TIM_TIM1_UP_DMA_STREAM) && defined(STM32_TIM_TIM1_UP_DMA_CHAN)
# define HAL_PWM1_DMA_CONFIG true, STM32_TIM_TIM1_UP_DMA_STREAM, STM32_TIM_TIM1_UP_DMA_CHAN
#else
# define HAL_PWM1_DMA_CONFIG false, 0, 0
#endif
#if !defined(HAL_TIM1_UP_SHARED)
#define HAL_TIM1_UP_SHARED false
#endif
#define HAL_PWM_GROUP5 { true, \
        {11, 255, 10, 255}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_COMPLEMENTARY_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}  \
          }, 0, 0}, &PWMD1, 1, \
          HAL_PWM1_DMA_CONFIG, \
          { 1, 0, 1, 0 }, \
          { PAL_LINE(GPIOA,8U), 0, PAL_LINE(GPIOB,15U), 0 }}
#define HAL_PWM_GROUPS HAL_PWM_GROUP1,HAL_PWM_GROUP2,HAL_PWM_GROUP3,HAL_PWM_GROUP4,HAL_PWM_GROUP5

#define STM32_PWM_USE_ADVANCED TRUE
// I2C configuration

#if defined(STM32_I2C_I2C1_RX_DMA_STREAM) && defined(STM32_I2C_I2C1_TX_DMA_STREAM)
#define HAL_I2C1_CONFIG { &I2CD1, 1, STM32_I2C_I2C1_RX_DMA_STREAM, STM32_I2C_I2C1_TX_DMA_STREAM, PAL_LINE(GPIOB,8U), PAL_LINE(GPIOB,9U) }
#else
#define HAL_I2C1_CONFIG { &I2CD1, 1, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOB,8U), PAL_LINE(GPIOB,9U) }
#endif

#define HAL_I2C_DEVICE_LIST HAL_I2C1_CONFIG


// UART configuration
#define HAL_HAVE_SERIAL0 1
#define HAL_HAVE_SERIAL1 1
#define HAL_HAVE_SERIAL2 1
#define HAL_HAVE_SERIAL3 1
#define HAL_HAVE_SERIAL4 1
#define HAL_HAVE_SERIAL5 1
#define HAL_HAVE_SERIAL6 1
#define HAL_NUM_SERIAL_PORTS 7
#define HAL_SERIAL0_DRIVER ChibiOS::UARTDriver serial0Driver(0)
#define HAL_SERIAL1_DRIVER ChibiOS::UARTDriver serial1Driver(1)
#define HAL_SERIAL2_DRIVER ChibiOS::UARTDriver serial2Driver(2)
#define HAL_SERIAL3_DRIVER ChibiOS::UARTDriver serial3Driver(3)
#define HAL_SERIAL4_DRIVER ChibiOS::UARTDriver serial4Driver(4)
#define HAL_SERIAL5_DRIVER ChibiOS::UARTDriver serial5Driver(5)
#define HAL_SERIAL6_DRIVER ChibiOS::UARTDriver serial6Driver(6)
#define HAL_SERIAL7_DRIVER Empty::UARTDriver serial7Driver
#define HAL_SERIAL8_DRIVER Empty::UARTDriver serial8Driver
#define HAL_SERIAL9_DRIVER Empty::UARTDriver serial9Driver
#define HAL_WITH_IO_MCU 0

#define HAL_OTG1_CONFIG {(BaseSequentialStream*) &SDU1, 1, true, false, 0, 0, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define HAL_USART1_CONFIG { (BaseSequentialStream*) &SD1, 1, false, STM32_USART1_RX_DMA_CONFIG, STM32_USART1_TX_DMA_CONFIG, PAL_LINE(GPIOA,9U), PAL_LINE(GPIOA,10U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_USART2_CONFIG { (BaseSequentialStream*) &SD2, 2, false, STM32_USART2_RX_DMA_CONFIG, STM32_USART2_TX_DMA_CONFIG, PAL_LINE(GPIOA,2U), 0, 0, 0, -1, 0, -1, 0, 0}
#define HAL_USART3_CONFIG { (BaseSequentialStream*) &SD3, 3, false, STM32_USART3_RX_DMA_CONFIG, STM32_USART3_TX_DMA_CONFIG, PAL_LINE(GPIOC,10U), PAL_LINE(GPIOC,11U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_UART4_CONFIG { (BaseSequentialStream*) &SD4, 4, false, STM32_UART4_RX_DMA_CONFIG, STM32_UART4_TX_DMA_CONFIG, PAL_LINE(GPIOA,0U), PAL_LINE(GPIOA,1U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_UART5_CONFIG { (BaseSequentialStream*) &SD5, 5, false, STM32_UART5_RX_DMA_CONFIG, STM32_UART5_TX_DMA_CONFIG, PAL_LINE(GPIOC,12U), PAL_LINE(GPIOD,2U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_USART6_CONFIG { (BaseSequentialStream*) &SD6, 6, false, STM32_USART6_RX_DMA_CONFIG, STM32_USART6_TX_DMA_CONFIG, PAL_LINE(GPIOC,6U), PAL_LINE(GPIOC,7U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_SERIAL_DEVICE_LIST HAL_OTG1_CONFIG,HAL_USART1_CONFIG,HAL_USART2_CONFIG,HAL_USART3_CONFIG,HAL_UART4_CONFIG,HAL_UART5_CONFIG,HAL_USART6_CONFIG

#define HAL_UART_NUM_SERIAL_PORTS 7
// USB configuration
#define HAL_USB_VENDOR_ID 0x1209
#define HAL_USB_PRODUCT_ID 0x5741
#define HAL_USB_STRING_MANUFACTURER "ArduPilot"
#define HAL_USB_STRING_PRODUCT "%BOARD%"
#define HAL_USB_STRING_SERIAL "%SERIAL%"


#define AP_BOOTLOADER_FLASHING_ENABLED 1
#define HAL_HAVE_AP_ROMFS_EMBEDDED_H 1

/*
* I/O ports initial setup, this configuration is established soon after reset
* in the initialization code.
* Please refer to the STM32 Reference Manual for details.
*/
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/* PORTA:
 PA0 UART4_TX UART4 AF8
 PA1 UART4_RX UART4 AF8
 PA2 USART2_TX USART2 AF7
 PA3 TIM9_CH2 TIM9 AF3
 PA4 MPU_CS CS
 PA5 SPI1_SCK SPI1 AF5
 PA6 SPI1_MISO SPI1 AF5
 PA7 SPI1_MOSI SPI1 AF5
 PA8 TIM1_CH1 TIM1 AF1 PWM12
 PA9 USART1_TX USART1 AF7
 PA10 USART1_RX USART1 AF7
 PA11 OTG_FS_DM OTG1 AF10
 PA12 OTG_FS_DP OTG1 AF10
 PA13 LED_GREEN OUTPUT
 PA14 LED_BLUE OUTPUT
 PA15 TIM2_CH1 TIM2 AF1 PWM8
*/

#define VAL_GPIOA_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_OUTPUT(13U) | \
                           PIN_MODE_OUTPUT(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOA_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOA_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOA_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_PULLDOWN(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOA_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_LOW(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_LOW(13U) | \
                           PIN_ODR_LOW(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOA_AFRL    (PIN_AFIO_AF(0U, 8U) | \
                           PIN_AFIO_AF(1U, 8U) | \
                           PIN_AFIO_AF(2U, 7U) | \
                           PIN_AFIO_AF(3U, 3U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 5U) | \
                           PIN_AFIO_AF(6U, 5U) | \
                           PIN_AFIO_AF(7U, 5U))

#define VAL_GPIOA_AFRH    (PIN_AFIO_AF(8U, 1U) | \
                           PIN_AFIO_AF(9U, 7U) | \
                           PIN_AFIO_AF(10U, 7U) | \
                           PIN_AFIO_AF(11U, 10U) | \
                           PIN_AFIO_AF(12U, 10U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 1U))

/* PORTB:
 PB0 TIM3_CH3 TIM3 AF2 PWM3
 PB1 TIM3_CH4 TIM3 AF2 PWM4
 PB3 SPI3_SCK SPI3 AF6
 PB4 SPI3_MISO SPI3 AF6
 PB5 SPI3_MOSI SPI3 AF6
 PB6 TIM4_CH1 TIM4 AF2 PWM2
 PB7 TIM4_CH2 TIM4 AF2 PWM1
 PB8 I2C1_SCL I2C1 AF4
 PB9 I2C1_SDA I2C1 AF4
 PB10 TIM2_CH3 TIM2 AF1 PWM9
 PB11 TIM2_CH4 TIM2 AF1 PWM10
 PB12 OSD_CS CS
 PB13 SPI2_SCK SPI2 AF5
 PB14 TIM8_CH2N TIM8 AF3 PWM7
 PB15 TIM1_CH3N TIM1 AF1 PWM11
*/

#define VAL_GPIOB_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_ALTERNATE(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_OUTPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOB_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_OPENDRAIN(8U) | \
                           PIN_OTYPE_OPENDRAIN(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOB_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOB_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_PULLUP(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOB_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOB_AFRL    (PIN_AFIO_AF(0U, 2U) | \
                           PIN_AFIO_AF(1U, 2U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 6U) | \
                           PIN_AFIO_AF(4U, 6U) | \
                           PIN_AFIO_AF(5U, 6U) | \
                           PIN_AFIO_AF(6U, 2U) | \
                           PIN_AFIO_AF(7U, 2U))

#define VAL_GPIOB_AFRH    (PIN_AFIO_AF(8U, 4U) | \
                           PIN_AFIO_AF(9U, 4U) | \
                           PIN_AFIO_AF(10U, 1U) | \
                           PIN_AFIO_AF(11U, 1U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 5U) | \
                           PIN_AFIO_AF(14U, 3U) | \
                           PIN_AFIO_AF(15U, 1U))

/* PORTC:
 PC0 BATT_VOLTAGE_SENS ADC1 ADC1_IN10
 PC1 BATT_CURRENT_SENS ADC1 ADC1_IN11
 PC2 SPI2_MISO SPI2 AF5
 PC3 SPI2_MOSI SPI2 AF5
 PC4 RSSI_ADC_PIN ADC1 ADC1_IN14
 PC5 PRESSURE_SENS ADC1 ADC1_IN15
 PC6 USART6_TX USART6 AF8
 PC7 USART6_RX USART6 AF8
 PC8 TIM8_CH3 TIM8 AF3 PWM5
 PC9 TIM8_CH4 TIM8 AF3 PWM6
 PC10 USART3_TX USART3 AF7
 PC11 USART3_RX USART3 AF7
 PC12 UART5_TX UART5 AF8
 PC13 PINIO1 OUTPUT
 PC14 SDCARD_CS CS
 PC15 BUZZER OUTPUT
*/

#define VAL_GPIOC_MODER   (PIN_MODE_ANALOG(0U) | \
                           PIN_MODE_ANALOG(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_ANALOG(4U) | \
                           PIN_MODE_ANALOG(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_OUTPUT(13U) | \
                           PIN_MODE_OUTPUT(14U) | \
                           PIN_MODE_OUTPUT(15U))

#define VAL_GPIOC_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOC_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOC_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_PULLUP(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_PULLUP(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOC_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_LOW(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_LOW(15U))

#define VAL_GPIOC_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 5U) | \
                           PIN_AFIO_AF(3U, 5U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 8U) | \
                           PIN_AFIO_AF(7U, 8U))

#define VAL_GPIOC_AFRH    (PIN_AFIO_AF(8U, 3U) | \
                           PIN_AFIO_AF(9U, 3U) | \
                           PIN_AFIO_AF(10U, 7U) | \
                           PIN_AFIO_AF(11U, 7U) | \
                           PIN_AFIO_AF(12U, 8U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTD:
 PD2 UART5_RX UART5 AF8
*/

#define VAL_GPIOD_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOD_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOD_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOD_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOD_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOD_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 8U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOD_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTE:
*/

#define VAL_GPIOE_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOE_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOE_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOE_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOE_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOE_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOE_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTF:
*/

#define VAL_GPIOF_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOF_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOF_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOF_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOF_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOF_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOF_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTG:
*/

#define VAL_GPIOG_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOG_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOG_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOG_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOG_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOG_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOG_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTH:
*/

#define VAL_GPIOH_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U))

#define VAL_GPIOH_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U))

#define VAL_GPIOH_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U))

#define VAL_GPIOH_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U))

#define VAL_GPIOH_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U))

#define VAL_GPIOH_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U))

#define VAL_GPIOH_AFRH    (0)

/* PORTI:
*/

#define VAL_GPIOI_MODER               0x0
#define VAL_GPIOI_OTYPER              0x0
#define VAL_GPIOI_OSPEEDR             0x0
#define VAL_GPIOI_PUPDR               0x0
#define VAL_GPIOI_ODR                 0x0
#define VAL_GPIOI_AFRL                0x0
#define VAL_GPIOI_AFRH                0x0



/* PORTJ:
*/

#define VAL_GPIOJ_MODER               0x0
#define VAL_GPIOJ_OTYPER              0x0
#define VAL_GPIOJ_OSPEEDR             0x0
#define VAL_GPIOJ_PUPDR               0x0
#define VAL_GPIOJ_ODR                 0x0
#define VAL_GPIOJ_AFRL                0x0
#define VAL_GPIOJ_AFRH                0x0



/* PORTK:
*/

#define VAL_GPIOK_MODER               0x0
#define VAL_GPIOK_OTYPER              0x0
#define VAL_GPIOK_OSPEEDR             0x0
#define VAL_GPIOK_PUPDR               0x0
#define VAL_GPIOK_ODR                 0x0
#define VAL_GPIOK_AFRL                0x0
#define VAL_GPIOK_AFRH                0x0




/* alternative configurations */
#define PAL_STM32_SPEED(n) ((n&3U)<<3U)
#define PAL_STM32_HIGH     0x8000U

#define HAL_PIN_ALT_CONFIG { \
    { 1, PAL_STM32_MODE_ALTERNATE|PAL_STM32_OTYPE_PUSHPULL|PAL_STM32_SPEED(2)|PAL_STM32_PUPDR_PULLUP|PAL_STM32_ALTERNATE(7), PAL_LINE(GPIOA,3U), PERIPH_TYPE::UART_RX, 2}, /* PA3 USART2_RX USART2 AF7 */ \
}


// normal defaults

// this file is inserted (by chibios_hwdef.py) into hwdef.h when
// configuring for "normal" builds - typically vehicle binaries but
// also examples.

#ifndef HAL_DSHOT_ALARM_ENABLED
#define HAL_DSHOT_ALARM_ENABLED (HAL_PWM_COUNT>0)
#endif

#ifndef HAL_BOARD_LOG_DIRECTORY
#define HAL_BOARD_LOG_DIRECTORY "/APM/LOGS"
#endif

#ifndef HAL_BOARD_TERRAIN_DIRECTORY
#define HAL_BOARD_TERRAIN_DIRECTORY "/APM/TERRAIN"
#endif

// enable terrain only if there's an SD card available:
#define AP_TERRAIN_AVAILABLE HAL_OS_FATFS_IO


// end normal defaults
