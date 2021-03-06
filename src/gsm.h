#ifndef GSM_H
#define GSM_H

#include "config.h"
#include <stdbool.h>

#define CODE_OK 0
#define CODE_CONNECT 1
#define CODE_RING 2
#define CODE_NOCARRIER 3
#define CODE_ERROR 4
#define CODE_NODIALTONE 6
#define CODE_BUSY 7
#define CODE_CONNECT2400 10
#define CODE_CONNECT4800 30
#define CODE_CONNECT9600 32
#define CODE_CONNECT14400 33
#define CODE_CONNECT2400RLP 47
#define CODE_CONNECT4800RLP 48
#define CODE_CONNECT9600RLP 49
#define CODE_CONNECT14400RLP 50

#define TXT_OK "OK"
#define TXT_CONNECT "CONNECT"
#define TXT_RING "RING"
#define TXT_NOCARRIER "NO CARRIER"
#define TXT_ERROR "ERROR"
#define TXT_NODIALTONE "NO DIALTONE"
#define TXT_BUSY "BUSY"
#define TXT_CONNECT2400 "CONNECT 2400"
#define TXT_CONNECT4800 "CONNECT 4800"
#define TXT_CONNECT9600 "CONNECT 9600"
#define TXT_CONNECT14400 "CONNECT 14400"
#define TXT_CONNECT2400RLP "CONNECT 2400RLP"
#define TXT_CONNECT4800RLP "CONNECT 4800RLP"
#define TXT_CONNECT9600RLP "CONNECT 9600RLP"
#define TXT_CONNECT14400RLP "CONNECT 14400RLP"

// Internal codes
#define CODE_CPIN_REQUIRED 1337

void gsm_init();
void gsm_powersave(bool);
int gsm_exec(char*, bool, bool);
void gsm_send_sms(char *msg, char *number);

#endif /* GSM_H */
