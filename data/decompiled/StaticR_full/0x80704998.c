/* Function at 0x80704998, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80704998(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    *(0x34 + r1) = r0; // stw @ 0x807049A4
    /* stmw r27, 0x1c(r1) */ // 0x807049A8
    r31 = r5;
    if (<=) goto 0x0x80704ab4;
    r3 = *(0 + r4); // lwz @ 0x807049B4
    r0 = *(0xc + r3); // lwz @ 0x807049B8
    r27 = *(8 + r3); // lwz @ 0x807049BC
    r30 = *(0x18 + r3); // lwz @ 0x807049C4
    if (!=) goto 0x0x80704a60;
    r28 = *(0x18 + r5); // lwz @ 0x807049CC
    r5 = r27;
    /* li r29, 0 */ // 0x807049D8
    r6 = r28;
    /* li r3, 0x79b */ // 0x807049E0
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    if (!=) goto 0x0x80704a4c;
    r3 = r27 + 0x4c; // 0x807049F0
    r4 = r28 + 0x4c; // 0x807049F4
    /* li r5, 8 */ // 0x807049F8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    if (!=) goto 0x0x80704a4c;
    r3 = *(0x54 + r27); // lwz @ 0x80704A08
    r0 = *(0x54 + r28); // lwz @ 0x80704A0C
    if (!=) goto 0x0x80704a4c;
    r3 = *(0x58 + r27); // lwz @ 0x80704A18
    r0 = *(0x58 + r28); // lwz @ 0x80704A1C
    if (!=) goto 0x0x80704a4c;
    r3 = *(0x5c + r27); // lhz @ 0x80704A28
    r0 = *(0x5c + r28); // lhz @ 0x80704A2C
    if (!=) goto 0x0x80704a4c;
    r3 = *(0x5e + r27); // lhz @ 0x80704A38
    r0 = *(0x5e + r28); // lhz @ 0x80704A3C
    if (!=) goto 0x0x80704a4c;
    /* li r29, 1 */ // 0x80704A48
    if (==) goto 0x0x80704a60;
    /* li r0, 1 */ // 0x80704A54
    *(4 + r31) = r0; // stw @ 0x80704A58
    /* b 0x80704b04 */ // 0x80704A5C
    /* lis r3, 0 */ // 0x80704A60
    r0 = *(0x18 + r31); // lwz @ 0x80704A64
}