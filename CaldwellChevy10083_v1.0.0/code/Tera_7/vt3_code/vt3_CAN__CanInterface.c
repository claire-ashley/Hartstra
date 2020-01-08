/* device:       /project/Tera_7 */
/* device model: TERA7 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_C
#define INCLUDE__VT3_CAN__CANINTERFACE_C

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanInterface.h"
#include "vt3_vars.h"



/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU0_TPDO1 */
/* COB-ID:   0x00000181 */
/* CAN port: 0 */
static void canrx_0_00000181_IO_CORE_CPU0_TPDO1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;


	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x181 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU1_TPDO1 */
/* COB-ID:   0x00000182 */
/* CAN port: 0 */
static void canrx_0_00000182_IO_CORE_CPU1_TPDO1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: ReverseGear */
	if ( dlc >= 1 )
	{
		IO_ReverseGear = (BOOL)(((BOOL)db[0] & 0x01));
	}

	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x182 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU0_TPDO2 */
/* COB-ID:   0x00000281 */
/* CAN port: 0 */
static void canrx_0_00000281_IO_CORE_CPU0_TPDO2(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: kennel1Temp */
	if ( dlc >= 2 )
	{
		IO_kennel1Temp = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: kennel2Temp */
	if ( dlc >= 4 )
	{
		IO_kennel2Temp = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}
	/* extract variable: kennel3Temp */
	if ( dlc >= 6 )
	{
		IO_kennel3Temp = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}
	/* extract variable: kennel4Temp */
	if ( dlc >= 8 )
	{
		IO_kennel4Temp = (UINT)(((UINT)db[6] | ((UINT)db[7] << 8)));
	}

	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x281 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU1_TPDO2 */
/* COB-ID:   0x00000282 */
/* CAN port: 0 */
static void canrx_0_00000282_IO_CORE_CPU1_TPDO2(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;


	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x282 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU0_TPDO3 */
/* COB-ID:   0x00000381 */
/* CAN port: 0 */
static void canrx_0_00000381_IO_CORE_CPU0_TPDO3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: kennel5Temp */
	if ( dlc >= 2 )
	{
		IO_kennel5Temp = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: kennel6Temp */
	if ( dlc >= 4 )
	{
		IO_kennel6Temp = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}

	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x381 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU1_TPDO3 */
/* COB-ID:   0x00000382 */
/* CAN port: 0 */
static void canrx_0_00000382_IO_CORE_CPU1_TPDO3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;


	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x382 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU0_TPDO4 */
/* COB-ID:   0x00000481 */
/* CAN port: 0 */
static void canrx_0_00000481_IO_CORE_CPU0_TPDO4(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;


	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x481 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU1_TPDO4 */
/* COB-ID:   0x00000482 */
/* CAN port: 0 */
static void canrx_0_00000482_IO_CORE_CPU1_TPDO4(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;


	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x482 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU0_TPDO5 */
/* COB-ID:   0x00000501 */
/* CAN port: 0 */
static void canrx_0_00000501_IO_CORE_CPU0_TPDO5(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;


	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x501 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IO_CORE_CPU1_TPDO5 */
/* COB-ID:   0x00000502 */
/* CAN port: 0 */
static void canrx_0_00000502_IO_CORE_CPU1_TPDO5(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: VBPlus */
	if ( dlc >= 6 )
	{
		IO_VBPlus = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}

	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x502 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_Heartbeat_CPU01 */
/* COB-ID:   0x00000701 */
/* CAN port: 0 */
static void canrx_0_00000701_CAN_Heartbeat_CPU01(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: state */
	if ( dlc >= 1 )
	{
		IO1_state = (BYTE)((BYTE)db[0]);
	}

	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x701 );

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_Heartbeat_CPU02 */
/* COB-ID:   0x00000702 */
/* CAN port: 0 */
static void canrx_0_00000702_CAN_Heartbeat_CPU02(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: state */
	if ( dlc >= 1 )
	{
		IO2_state = (BYTE)((BYTE)db[0]);
	}

	/* Call function to reset PGN timestamp */
	vt3_j1939_PGN_reset_timestamp ( 0, 0x702 );

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanInterface[12] = {
	/*    cob-id  j1939    tout  alm  alm   mux   mux  call function                            */
	/*            j1939          off   on   pos    id                                           */
	{ 0x00000181, FALSE,    750,   3,   2,  255,    0, canrx_0_00000181_IO_CORE_CPU0_TPDO1      },
	{ 0x00000182, FALSE,    750,   3,   2,  255,    0, canrx_0_00000182_IO_CORE_CPU1_TPDO1      },
	{ 0x00000281, FALSE,    150,   3,   2,  255,    0, canrx_0_00000281_IO_CORE_CPU0_TPDO2      },
	{ 0x00000282, FALSE,    150,   3,   2,  255,    0, canrx_0_00000282_IO_CORE_CPU1_TPDO2      },
	{ 0x00000381, FALSE,    150,   3,   2,  255,    0, canrx_0_00000381_IO_CORE_CPU0_TPDO3      },
	{ 0x00000382, FALSE,    150,   3,   2,  255,    0, canrx_0_00000382_IO_CORE_CPU1_TPDO3      },
	{ 0x00000481, FALSE,    150,   3,   2,  255,    0, canrx_0_00000481_IO_CORE_CPU0_TPDO4      },
	{ 0x00000482, FALSE,    150,   3,   2,  255,    0, canrx_0_00000482_IO_CORE_CPU1_TPDO4      },
	{ 0x00000501, FALSE,    150,   3,   2,  255,    0, canrx_0_00000501_IO_CORE_CPU0_TPDO5      },
	{ 0x00000502, FALSE,    150,   3,   2,  255,    0, canrx_0_00000502_IO_CORE_CPU1_TPDO5      },
	{ 0x00000701, FALSE,   1500,   3,   1,  255,    0, canrx_0_00000701_CAN_Heartbeat_CPU01     },
	{ 0x00000702, FALSE,   1500,   3,   1,  255,    0, canrx_0_00000702_CAN_Heartbeat_CPU02     },
};

/* initializers for receive and transmit variables */
static const BOOL FAR __init_value__IO_ReverseGear = FALSE;
static const UINT FAR __init_value__IO_kennel1Temp = ((UINT)0U);
static const UINT FAR __init_value__IO_kennel2Temp = ((UINT)0U);
static const UINT FAR __init_value__IO_kennel3Temp = ((UINT)0U);
static const UINT FAR __init_value__IO_kennel4Temp = ((UINT)0U);
static const UINT FAR __init_value__IO_kennel5Temp = ((UINT)0U);
static const UINT FAR __init_value__IO_kennel6Temp = ((UINT)0U);
static const UINT FAR __init_value__IO_VBPlus = ((UINT)0U);
static const BYTE FAR __init_value__IO1_state = ((BYTE)0x0U);
static const BYTE FAR __init_value__IO2_state = ((BYTE)0x0U);
static const BYTE FAR __init_value__CO_cmd = ((BYTE)0x0U);
static const BYTE FAR __init_value__CO_nodeid = ((BYTE)0x0U);
static const BOOL FAR __init_value__IO_Fan = FALSE;
static const BOOL FAR __init_value__IO_AC = FALSE;
static const BOOL FAR __init_value__IO_ExteriorSceneLights = FALSE;
static const BOOL FAR __init_value__IO_Beacon = FALSE;
static const BOOL FAR __init_value__IO_Heat = FALSE;

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanInterface[] = {
	{ &IO_ReverseGear      , &__init_value__IO_ReverseGear, 1 },
	{ &IO_kennel1Temp      , &__init_value__IO_kennel1Temp, 2 },
	{ &IO_kennel2Temp      , &__init_value__IO_kennel2Temp, 2 },
	{ &IO_kennel3Temp      , &__init_value__IO_kennel3Temp, 2 },
	{ &IO_kennel4Temp      , &__init_value__IO_kennel4Temp, 2 },
	{ &IO_kennel5Temp      , &__init_value__IO_kennel5Temp, 2 },
	{ &IO_kennel6Temp      , &__init_value__IO_kennel6Temp, 2 },
	{ &IO_VBPlus           , &__init_value__IO_VBPlus, 2 },
	{ &IO1_state           , &__init_value__IO1_state, 1 },
	{ &IO2_state           , &__init_value__IO2_state, 1 },
	{ &CO_cmd              , &__init_value__CO_cmd, 1 },
	{ &CO_nodeid           , &__init_value__CO_nodeid, 1 },
	{ &IO_Fan              , &__init_value__IO_Fan, 1 },
	{ &IO_AC               , &__init_value__IO_AC , 1 },
	{ &IO_ExteriorSceneLights, &__init_value__IO_ExteriorSceneLights, 1 },
	{ &IO_Beacon           , &__init_value__IO_Beacon, 1 },
	{ &IO_Heat             , &__init_value__IO_Heat, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanInterface[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_CO_NMT = 0;
static WORD vt3_can_tx_timeout_IO_CORE_CPU0_RPDO1 = 0;
static WORD vt3_can_tx_timeout_IO_CORE_CPU0_RPDO5 = 0;


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanInterface; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_interface = FALSE;
	vt3_can_alarm_IO_CORE_CPU0_TPDO1 = FALSE;
	vt3_can_alarm_IO_CORE_CPU1_TPDO1 = FALSE;
	vt3_can_alarm_IO_CORE_CPU0_TPDO2 = FALSE;
	vt3_can_alarm_IO_CORE_CPU1_TPDO2 = FALSE;
	vt3_can_alarm_IO_CORE_CPU0_TPDO3 = FALSE;
	vt3_can_alarm_IO_CORE_CPU1_TPDO3 = FALSE;
	vt3_can_alarm_IO_CORE_CPU0_TPDO4 = FALSE;
	vt3_can_alarm_IO_CORE_CPU1_TPDO4 = FALSE;
	vt3_can_alarm_IO_CORE_CPU0_TPDO5 = FALSE;
	vt3_can_alarm_IO_CORE_CPU1_TPDO5 = FALSE;
	vt3_can_alarm_CAN_Heartbeat_CPU01 = FALSE;
	vt3_can_alarm_CAN_Heartbeat_CPU02 = FALSE;

	/* initialize can TX value */
	vt3_can_period_IO_CORE_CPU0_RPDO1 = 250;
	vt3_can_trigger_IO_CORE_CPU0_RPDO1 = FALSE;
	vt3_can_period_IO_CORE_CPU0_RPDO5 = 250;
	vt3_can_trigger_IO_CORE_CPU0_RPDO5 = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_CO_NMT = 0;
	vt3_can_tx_timeout_IO_CORE_CPU0_RPDO1 = 0;
	vt3_can_tx_timeout_IO_CORE_CPU0_RPDO5 = 0;

	/* initialize the interface */
	vt3_init_interface(0, 250, vt3_can_rx_init_CanInterface, 12);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(0) )
	{
		vt3_can_alarm_busoff_CAN_interface = TRUE;
	}

	/* RX message: CAN_Heartbeat_CPU01 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_HEARTBEAT_CPU01);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_CAN_Heartbeat_CPU01 = TRUE;

		IO1_state = __init_value__IO1_state;
	}
	else
	{
		vt3_can_alarm_CAN_Heartbeat_CPU01 = FALSE;
	}

	/* RX message: CAN_Heartbeat_CPU02 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_HEARTBEAT_CPU02);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_CAN_Heartbeat_CPU02 = TRUE;

		IO2_state = __init_value__IO2_state;
	}
	else
	{
		vt3_can_alarm_CAN_Heartbeat_CPU02 = FALSE;
	}


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/

	/* RX message: IO_CORE_CPU0_TPDO1 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU0_TPDO1);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO1 = TRUE;

	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO1 = FALSE;
	}

	/* RX message: IO_CORE_CPU1_TPDO1 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU1_TPDO1);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO1 = TRUE;

		IO_ReverseGear = __init_value__IO_ReverseGear;
	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO1 = FALSE;
	}

	/* RX message: IO_CORE_CPU0_TPDO2 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU0_TPDO2);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO2 = TRUE;

		IO_kennel1Temp = __init_value__IO_kennel1Temp;
		IO_kennel2Temp = __init_value__IO_kennel2Temp;
		IO_kennel3Temp = __init_value__IO_kennel3Temp;
		IO_kennel4Temp = __init_value__IO_kennel4Temp;
	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO2 = FALSE;
	}

	/* RX message: IO_CORE_CPU1_TPDO2 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU1_TPDO2);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO2 = TRUE;

	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO2 = FALSE;
	}

	/* RX message: IO_CORE_CPU0_TPDO3 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU0_TPDO3);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO3 = TRUE;

		IO_kennel5Temp = __init_value__IO_kennel5Temp;
		IO_kennel6Temp = __init_value__IO_kennel6Temp;
	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO3 = FALSE;
	}

	/* RX message: IO_CORE_CPU1_TPDO3 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU1_TPDO3);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO3 = TRUE;

	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO3 = FALSE;
	}

	/* RX message: IO_CORE_CPU0_TPDO4 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU0_TPDO4);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO4 = TRUE;

	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO4 = FALSE;
	}

	/* RX message: IO_CORE_CPU1_TPDO4 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU1_TPDO4);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO4 = TRUE;

	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO4 = FALSE;
	}

	/* RX message: IO_CORE_CPU0_TPDO5 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU0_TPDO5);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO5 = TRUE;

	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU0_TPDO5 = FALSE;
	}

	/* RX message: IO_CORE_CPU1_TPDO5 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_IO_CORE_CPU1_TPDO5);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO5 = TRUE;

		IO_VBPlus = __init_value__IO_VBPlus;
	}
	else
	{
		vt3_can_alarm_IO_CORE_CPU1_TPDO5 = FALSE;
	}


}

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void)
{
	BYTE txcounter = 0;
	BYTE save_txcounter = 0;
	BYTE db[8];

	/* TX message: IO_CORE_CPU0_RPDO1 */
	if ( (vt3_can_period_IO_CORE_CPU0_RPDO1 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_IO_CORE_CPU0_RPDO1)) ||
	     (vt3_can_trigger_IO_CORE_CPU0_RPDO1 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((IO_Fan & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((IO_AC & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((IO_ExteriorSceneLights & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((IO_Beacon & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((IO_Heat & 0x01) << 7));

		/* send message */
		if ( vt3_send_canmsg(0, vt3_tx_cobid_list[1], 1, db) == ERR_OK )
		{
			vt3_can_trigger_IO_CORE_CPU0_RPDO1 = 0;
			vt3_can_tx_timeout_IO_CORE_CPU0_RPDO1 = TIME_TO_TICKS_CAN_TX(vt3_can_period_IO_CORE_CPU0_RPDO1);
		}
	}

	/* TX message: IO_CORE_CPU0_RPDO5 */
	if ( (vt3_can_period_IO_CORE_CPU0_RPDO5 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_IO_CORE_CPU0_RPDO5)) ||
	     (vt3_can_trigger_IO_CORE_CPU0_RPDO5 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);

		/* send message */
		if ( vt3_send_canmsg(0, vt3_tx_cobid_list[2], 4, db) == ERR_OK )
		{
			vt3_can_trigger_IO_CORE_CPU0_RPDO5 = 0;
			vt3_can_tx_timeout_IO_CORE_CPU0_RPDO5 = TIME_TO_TICKS_CAN_TX(vt3_can_period_IO_CORE_CPU0_RPDO5);
		}
	}

}



/* function to send a CAN-bus message immediately from POU */
BOOL vt3_can_send_sync_CO_NMT(void)
{
	BOOL result = FALSE;

	{
		/* prepare the data bytes */
		BYTE db[8];
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((CO_cmd & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((CO_nodeid & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, vt3_tx_cobid_list[0], 2, db) == ERR_OK )
		{
			result = TRUE;
		}
	}

	/* return TRUE if the message has been sent with success */
	return result;

} /* vt3_can_send_sync_CO_NMT */



#endif /* INCLUDE__VT3_CAN__CANINTERFACE_C */

/* end of file */
