/* Function at 0x80704624, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80704624(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x80704630
    *(0x1c + r1) = r31; // stw @ 0x80704634
    r31 = r6;
    if (==) goto 0x0x80704654;
    r4 = *(0x10 + r6); // lwz @ 0x80704640
    r3 = r31;
    /* li r5, 0xa */ // 0x80704648
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
    /* b 0x807046a8 */ // 0x80704650
    r3 = *(0x1c + r6); // lwz @ 0x80704654
    FUN_805E3430(r3, r5); // bl 0x805E3430
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x80704680;
    r4 = *(0x10 + r31); // lwz @ 0x8070466C
}