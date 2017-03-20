/*
 * Southeastcon 2017 Stage 1 relay tree control patterns
 *
 * Table consists of binary pattern to the 16 relays, followed
 *    by the number of turns required at stage 3
 *
 * The table contains the bit patterns for the relay (active
 *    low), and the number of turns for the pad. The number of
 *    turns is encoded in a 5-digit integer, with LSB the number
 *    of turns for pad 0, and MSB being the number of turns for
 *    pad 5.
 * This does not allow all possible combinations), but is a reasonable
 *    enough size tree of values (88 combinations) that it is not 
 *    possible to guess), and uses only 16 relays (as compared to 25 
 *    for a simplistic approach that allows all combinations).
 *
 * This table was computer generated - do not hand edit!!
 */

#define RELAY_TABLE_LENGTH (sizeof(relayTable) / sizeof(relayTable[0]))

const uint16_t relayTable[][6] = {

//     Relay bit pattern   turns       pad     ID
     { 0b0000010001010101, 54321 }, // DICRW - #0
     { 0b1000010001010101, 54321 }, // dICRW - #1
     { 0b0000101001010010, 54123 }, // DIWRC - #2
     { 0b1000101001010010, 54123 }, // dIWRC - #3
     { 0b0000010101010001, 54312 }, // DICWR - #4
     { 0b1000010101010001, 54312 }, // dICWR - #5
     { 0b0000001101010010, 54132 }, // DIWCR - #6
     { 0b1000001101010010, 54132 }, // dIWCR - #7
     { 0b0000001010001101, 52431 }, // DRICW - #8
     { 0b1000001010001101, 52431 }, // dRICW - #9
     { 0b0000101010001001, 52413 }, // DRIWC - #10
     { 0b1000101010001001, 52413 }, // dRIWC - #11
     { 0b0000101001001000, 51423 }, // DWIRC - #12
     { 0b1000101001001000, 51423 }, // dWIRC - #13
     { 0b0000001101001000, 51432 }, // DWICR - #14
     { 0b1000001101001000, 51432 }, // dWICR - #15
     { 0b0000010010101001, 52314 }, // DRCWI - #16
     { 0b1000010010101001, 52314 }, // dRCWI - #17
     { 0b0000001010101010, 52134 }, // DRWCI - #18
     { 0b1000001010101010, 52134 }, // dRWCI - #19
     { 0b0000010001101000, 51324 }, // DWCRI - #20
     { 0b1000010001101000, 51324 }, // dWCRI - #21
     { 0b0010010001000101, 45321 }, // IDCRW - #22
     { 0b1010010001000101, 45321 }, // IdCRW - #23
     { 0b0010101001000010, 45123 }, // IDWRC - #24
     { 0b1010101001000010, 45123 }, // IdWRC - #25
     { 0b0010010101000001, 45312 }, // IDCWR - #26
     { 0b1010010101000001, 45312 }, // IdCWR - #27
     { 0b0010001101000010, 45132 }, // IDWCR - #28
     { 0b1010001101000010, 45132 }, // IdWCR - #29
     { 0b0010001000001101, 25431 }, // RDICW - #30
     { 0b1010001000001101, 25431 }, // RdICW - #31
     { 0b0010101000001001, 25413 }, // RDIWC - #32
     { 0b1010101000001001, 25413 }, // RdIWC - #33
     { 0b0010000001001101, 35421 }, // CDIRW - #34
     { 0b1010000001001101, 35421 }, // CdIRW - #35
     { 0b0010000101001001, 35412 }, // CDIWR - #36
     { 0b1010000101001001, 35412 }, // CdIWR - #37
     { 0b0010010000101001, 25314 }, // RDCWI - #38
     { 0b1010010000101001, 25314 }, // RdCWI - #39
     { 0b0010001000101010, 25134 }, // RDWCI - #40
     { 0b1010001000101010, 25134 }, // RdWCI - #41
     { 0b0010000001101010, 35124 }, // CDWRI - #42
     { 0b1010000001101010, 35124 }, // CdWRI - #43
     { 0b0001001010000101, 42531 }, // IRDCW - #44
     { 0b1001001010000101, 42531 }, // IRdCW - #45
     { 0b0001101010000001, 42513 }, // IRDWC - #46
     { 0b1001101010000001, 42513 }, // IRdWC - #47
     { 0b0001101001000000, 41523 }, // IWDRC - #48
     { 0b1001101001000000, 41523 }, // IWdRC - #49
     { 0b0001001101000000, 41532 }, // IWDCR - #50
     { 0b1001001101000000, 41532 }, // IWdCR - #51
     { 0b0001001000010101, 24531 }, // RIDCW - #52
     { 0b1001001000010101, 24531 }, // RIdCW - #53
     { 0b0001101000010001, 24513 }, // RIDWC - #54
     { 0b1001101000010001, 24513 }, // RIdWC - #55
     { 0b0001000001010101, 34521 }, // CIDRW - #56
     { 0b1001000001010101, 34521 }, // CIdRW - #57
     { 0b0001000101010001, 34512 }, // CIDWR - #58
     { 0b1001000101010001, 34512 }, // CIdWR - #59
     { 0b0001001000101000, 21534 }, // RWDCI - #60
     { 0b1001001000101000, 21534 }, // RWdCI - #61
     { 0b0001000010101001, 32514 }, // CRDWI - #62
     { 0b1001000010101001, 32514 }, // CRdWI - #63
     { 0b0001000001101000, 31524 }, // CWDRI - #64
     { 0b1001000001101000, 31524 }, // CWdRI - #65
     { 0b0101010010000101, 42351 }, // IRCDW - #66
     { 0b1101010010000101, 42351 }, // IRCdW - #67
     { 0b0101101010000010, 42153 }, // IRWDC - #68
     { 0b1101101010000010, 42153 }, // IRWdC - #69
     { 0b0101010101000000, 41352 }, // IWCDR - #70
     { 0b1101010101000000, 41352 }, // IWCdR - #71
     { 0b0101010000010101, 24351 }, // RICDW - #72
     { 0b1101010000010101, 24351 }, // RICdW - #73
     { 0b0101101000010010, 24153 }, // RIWDC - #74
     { 0b1101101000010010, 24153 }, // RIWdC - #75
     { 0b0101000101010010, 34152 }, // CIWDR - #76
     { 0b1101000101010010, 34152 }, // CIWdR - #77
     { 0b0101101000001000, 21453 }, // RWIDC - #78
     { 0b1101101000001000, 21453 }, // RWIdC - #79
     { 0b0101000010001101, 32451 }, // CRIDW - #80
     { 0b1101000010001101, 32451 }, // CRIdW - #81
     { 0b0101000101001000, 31452 }, // CWIDR - #82
     { 0b1101000101001000, 31452 }, // CWIdR - #83
     { 0b0101010000101000, 21354 }, // RWCDI - #84
     { 0b1101010000101000, 21354 }, // RWCdI - #85
     { 0b0101000010101010, 32154 }, // CRWDI - #86
     { 0b1101000010101010, 32154 }, // CRWdI - #87
};
