/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_H
#define INCLUDE__VT3_CAN__CANINTERFACE_H

#include "vt3_base.h"


/* received messages */

#define VT3_RXMSG_IO_CORE_CPU0_TPDO1   (0)
#define VT3_RXMSG_IO_CORE_CPU1_TPDO1   (1)
#define VT3_RXMSG_IO_CORE_CPU0_TPDO2   (2)
#define VT3_RXMSG_IO_CORE_CPU1_TPDO2   (3)
#define VT3_RXMSG_IO_CORE_CPU0_TPDO3   (4)
#define VT3_RXMSG_IO_CORE_CPU1_TPDO3   (5)
#define VT3_RXMSG_IO_CORE_CPU0_TPDO4   (6)
#define VT3_RXMSG_IO_CORE_CPU1_TPDO4   (7)
#define VT3_RXMSG_IO_CORE_CPU0_TPDO5   (8)
#define VT3_RXMSG_IO_CORE_CPU1_TPDO5   (9)
#define VT3_RXMSG_CAN_HEARTBEAT_CPU01  (10)
#define VT3_RXMSG_CAN_HEARTBEAT_CPU02  (11)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void);

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void);

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void);


#endif /* INCLUDE__VT3_CAN__CANINTERFACE_H */

/* end of file */
