/*
 * Southeastcon 2017 Stage 1 relay tree control patterns
 *
 * Table consists of binary pattern to the 16 relays, followed
 *    by the number of turns required at stage 3
 *
 * The table contains the bit patterns for the relay (active
 *    low), and the number of turns for the pad. The number of
 *    turns is encoded in a 5-digit integer, with MSB the number
 *    of turns for pad 1 (12 o'clock, and LSB being the number of
 *    turns for pad 5 (9-10 o'clock).
 * This does not allow all possible combinations), but is a reasonable
 *    enough size tree of values (88 combinations) that it is not 
 *    possible to guess), and uses only 16 relays (as compared to 25 
 *    for a simplistic approach that allows all combinations).
 *
 * This table was computer generated - do not hand edit!!
 */

#define RELAY_TABLE_LENGTH (sizeof(relayTable) / sizeof(relayTable[0]))

const uint16_t relayTable[][2] PROGMEM = {

//     Relay bit pattern   turns       pad
//     __d_W__R__C__I__D_  12345       12345   ID
     { 0b0000000001101001, 21534 }, // RWDCI - #0
     { 0b1000000001101001, 21534 }, // RWdCI - #1
     { 0b0000000101001101, 21453 }, // RWIDC - #2
     { 0b1000000101001101, 21453 }, // RWIdC - #3
     { 0b0000010000101101, 31254 }, // CWRDI - #4
     { 0b1000010000101101, 31254 }, // CWRdI - #5
     { 0b0000010001101000, 51234 }, // DWRCI - #6
     { 0b1000010001101000, 51234 }, // dWRCI - #7  
     { 0b0000010101000101, 41253 }, // IWRDC - #8
     { 0b1000010101000101, 41253 }, // IWRdC - #9
     { 0b0000001000101001, 31524 }, // CWDRI - #10
     { 0b1000001000101001, 31524 }, // CWdRI - #11
     { 0b0000001101000001, 41523 }, // IWDRC - #12
     { 0b1000001101000001, 41523 }, // IWdRC - #13
     { 0b0000001101001000, 51423 }, // DWIRC - #14
     { 0b1000001101001000, 51423 }, // dWIRC - #15
     { 0b0000101000001101, 31452 }, // CWIDR - #16
     { 0b1000101000001101, 31452 }, // CWIdR - #17
     { 0b0000101001000001, 41532 }, // IWDCR - #18
     { 0b1000101001000001, 41532 }, // IWdCR - #19
     { 0b0000101001001000, 51432 }, // DWICR - #20
     { 0b1000101001001000, 51432 }, // dWICR - #21
     { 0b0010000010101101, 23154 }, // RCWDI - #22
     { 0b1010000010101101, 23154 }, // RCWdI - #23
     { 0b0010000001101010, 25134 }, // RDWCI - #24
     { 0b1010000001101010, 25134 }, // RdWCI - #25
     { 0b0010000101010101, 24153 }, // RIWDC - #26
     { 0b1010000101010101, 24153 }, // RIWdC - #27
     { 0b0010001000101010, 35124 }, // CDWRI - #28
     { 0b1010001000101010, 35124 }, // CdWRI - #29
     { 0b0010001010101000, 53124 }, // DCWRI - #30
     { 0b1010001010101000, 53124 }, // dCWRI - #31
     { 0b0010001101000010, 45123 }, // IDWRC - #32
     { 0b1010001101000010, 45123 }, // IdWRC - #33
     { 0b0010001101010000, 54123 }, // DIWRC - #34
     { 0b1010001101010000, 54123 }, // dIWRC - #35
     { 0b0010101000010101, 34152 }, // CIWDR - #36
     { 0b1010101000010101, 34152 }, // CIWdR - #37
     { 0b0010101010000101, 43152 }, // ICWDR - #38
     { 0b1010101010000101, 43152 }, // ICWdR - #39
     { 0b0010101001000010, 45132 }, // IDWCR - #40
     { 0b1010101001000010, 45132 }, // IdWCR - #41
     { 0b0010101001010000, 54132 }, // DIWCR - #42
     { 0b1010101001010000, 54132 }, // dIWCR - #43
     { 0b0001000010101001, 23514 }, // RCDWI - #44
     { 0b1001000010101001, 23514 }, // RCdWI - #45
     { 0b0001000101010001, 24513 }, // RIDWC - #46
     { 0b1001000101010001, 24513 }, // RIdWC - #47
     { 0b0001000101001010, 25413 }, // RDIWC - #48
     { 0b1001000101001010, 25413 }, // RdIWC - #49
     { 0b0001010000101010, 35214 }, // CDRWI - #50
     { 0b1001010000101010, 35214 }, // CdRWI - #51
     { 0b0001010010101000, 53214 }, // DCRWI - #52
     { 0b1001010010101000, 53214 }, // dCRWI - #53
     { 0b0001010101000010, 45213 }, // IDRWC - #54
     { 0b1001010101000010, 45213 }, // IdRWC - #55
     { 0b0001010101010000, 54213 }, // DIRWC - #56
     { 0b1001010101010000, 54213 }, // dIRWC - #57
     { 0b0001101000010001, 34512 }, // CIDWR - #58
     { 0b1001101000010001, 34512 }, // CIdWR - #59
     { 0b0001101000001010, 35412 }, // CDIWR - #60
     { 0b1001101000001010, 35412 }, // CdIWR - #61
     { 0b0001101010000001, 43512 }, // ICDWR - #62
     { 0b1001101010000001, 43512 }, // ICdWR - #63
     { 0b0001101010001000, 53412 }, // DCIWR - #64
     { 0b1001101010001000, 53412 }, // dCIWR - #65
     { 0b0101000010001101, 23451 }, // RCIDW - #66
     { 0b1101000010001101, 23451 }, // RCIdW - #67
     { 0b0101000001010001, 24531 }, // RIDCW - #68
     { 0b1101000001010001, 24531 }, // RIdCW - #69
     { 0b0101000001001010, 25431 }, // RDICW - #70
     { 0b1101000001001010, 25431 }, // RdICW - #71
     { 0b0101010000010101, 34251 }, // CIRDW - #72
     { 0b1101010000010101, 34251 }, // CIRdW - #73
     { 0b0101010010000101, 43251 }, // ICRDW - #74
     { 0b1101010010000101, 43251 }, // ICRdW - #75
     { 0b0101010001000010, 45231 }, // IDRCW - #76
     { 0b1101010001000010, 45231 }, // IdRCW - #77
     { 0b0101010001010000, 54231 }, // DIRCW - #78
     { 0b1101010001010000, 54231 }, // dIRCW - #79
     { 0b0101001000010001, 34521 }, // CIDRW - #80
     { 0b1101001000010001, 34521 }, // CIdRW - #81
     { 0b0101001000001010, 35421 }, // CDIRW - #82
     { 0b1101001000001010, 35421 }, // CdIRW - #83
     { 0b0101001010000001, 43521 }, // ICDRW - #84
     { 0b1101001010000001, 43521 }, // ICdRW - #85
     { 0b0101001010001000, 53421 }, // DCIRW - #86
     { 0b1101001010001000, 53421 }, // dCIRW - #87
};
