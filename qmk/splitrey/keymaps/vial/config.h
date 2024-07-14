#pragma once

// split
#define MASTER_LEFT

#define SERIAL_PIO_USE_PIO1
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP16     // USART TX pin
#define SERIAL_USART_RX_PIN GP17     // USART RX pin

// vial
#define VIAL_KEYBOARD_UID {0x9F, 0x5D, 0xD9, 0x1C, 0xF1, 0xD5, 0x62, 0x51}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
