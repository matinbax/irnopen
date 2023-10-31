// See SetupX_Template.h for all options available
// name: Setup_FW_WROOM32_ILI9341_parallel_TFT_016.h
// prepared June 1, 2021
//
// TFT 016 = 320*240 ILI 9341 3.5 inch display Uno shield Velleman
// for Bodmer's TFT_eSPI librray
//
// Floris Wouterlood
// public domain
//
//
   #define ESP32_PARALLEL
   #define ILI9486_DRIVER 

// ESP32 pins used for the parallel interface TFT
   #define TFT_CS   33     // Chip select control pin
   #define TFT_DC   18    // Data Command control pin - must use a pin in the range 0-31
   #define TFT_RST  32     // Reset pin
   #define TFT_WR   19     // Write strobe control pin - must use a pin in the range 0-31
   #define TFT_RD   23
   #define TFT_D0   13     // Must use pins in the range 0-31 for the data bus
   #define TFT_D1   12      // so a single register write sets/clears all bits
   #define TFT_D2   14
   #define TFT_D3   27
   #define TFT_D4   26
   #define TFT_D5   15
   #define TFT_D6   2
   #define TFT_D7   4
   #define LOAD_GLCD      // Font 1.    Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
   #define LOAD_FONT2     // Font 2.    Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
   #define LOAD_FONT4     // Font 4.    Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
   #define LOAD_FONT6     // Font 6.    Large 48 pixel font, needs ~2666 bytes in FLSH, only characters 
   #define LOAD_FONT7     // Font 7.    7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 
   #define LOAD_FONT8     // Font 8.    Large 75 pixel font needs ~3256 bytes in FLASH, only characters 
   #define LOAD_GFXFF     // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom 
   #define SMOOTH_FONT