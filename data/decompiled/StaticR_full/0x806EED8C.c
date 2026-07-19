/* Function at 0x806EED8C, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 3 function(s) */

int FUN_806EED8C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    *(0x34 + r1) = r0; // stw @ 0x806EED98
    /* stmw r24, 0x10(r1) */ // 0x806EED9C
    r24 = r3;
    if (!=) goto 0x0x806eedb4;
    /* li r0, 0 */ // 0x806EEDA8
    *(0x3e4 + r3) = r0; // stw @ 0x806EEDAC
    /* b 0x806eee80 */ // 0x806EEDB0
    *(0x3e4 + r3) = r4; // stw @ 0x806EEDB4
    /* lis r3, 0 */ // 0x806EEDB8
    r3 = *(0 + r3); // lwz @ 0x806EEDBC
    FUN_806E6A5C(r3); // bl 0x806E6A5C
    if (==) goto 0x0x806eee80;
    r27 = r24 + 0x9c; // 0x806EEDCC
    /* li r25, 0 */ // 0x806EEDD0
    /* li r28, 0 */ // 0x806EEDD4
    r0 = *(0x3e4 + r24); // lwz @ 0x806EEDD8
    r3 = r0 + r28; // 0x806EEDDC
    /* lwzx r30, r28, r0 */ // 0x806EEDE0
    r29 = *(4 + r3); // lwz @ 0x806EEDE4
    /* or. r0, r29, r30 */ // 0x806EEDE8
    if (==) goto 0x0x806eee4c;
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x806eee64;
    r26 = r24 + 0x9c; // 0x806EEE00
    /* li r31, 0 */ // 0x806EEE04
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
}