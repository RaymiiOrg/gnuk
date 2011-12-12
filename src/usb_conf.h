/* USB configuration file for USB-FS-Device_Lib */
/*
 * For detail, please see the documentation of 
 * STM32F10x USB Full Speed Device Library (USB-FS-Device_Lib)
 * by STMicroelectronics
 */

#ifndef __USB_CONF_H
#define __USB_CONF_H

#ifdef PINPAD_DND_SUPPORT
# define EP_NUM                          (8)
#else
# ifdef ENABLE_VIRTUAL_COM_PORT
# define EP_NUM                          (6)
# else
# define EP_NUM                          (3)
# endif
#endif

#define BTABLE_ADDRESS      (0x00)

/* EP0  */
#define ENDP0_RXADDR        (0x40)
#define ENDP0_TXADDR        (0x80)

/* EP1 */
#define ENDP1_TXADDR        (0xc0)
/* EP2 */
#define ENDP2_RXADDR        (0x100)

/* EP3  */
#define ENDP3_TXADDR        (0x140)
/* EP4 */
#define ENDP4_TXADDR        (0x150)
/* EP5 */
#define ENDP5_RXADDR        (0x160)

/* EP6 */
#define ENDP6_TXADDR        (0x180)
/* EP7 */
#define ENDP7_RXADDR        (0x1c0)

#define IMR_MSK (CNTR_CTRM  | CNTR_SOFM  | CNTR_RESETM )

#endif /* __USB_CONF_H */
