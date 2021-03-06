// are you using an I2S microphone - comment this out if you want to use an analog mic and ADC input
#define USE_I2S_MIC_INPUT

// I2S Microphone Settings Atom Echo Mic 
// Which channel is the I2S microphone on? I2S_CHANNEL_FMT_ONLY_LEFT or I2S_CHANNEL_FMT_ONLY_RIGHT
#define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_LEFT
// #define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_RIGHT

//M5Stack Atom Echo Mic https://docs.m5stack.com/#/en/atom/atomecho
// #define I2S_MIC_LEFT_RIGHT_CLOCK GPIO_NUM_33
// #define I2S_MIC_SERIAL_DATA GPIO_NUM_23

//M5StickC Mic https://docs.m5stack.com/#/en/core/m5stickc?id=pinmap
#define I2S_MIC_LEFT_RIGHT_CLOCK GPIO_NUM_0
#define I2S_MIC_SERIAL_DATA GPIO_NUM_34

// Analog Microphone Settings - ADC1_CHANNEL_7 is GPIO35
#define ADC_MIC_CHANNEL ADC1_CHANNEL_7
