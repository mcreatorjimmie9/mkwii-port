/* Function at 0x808580E8, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808580E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x808580FC
    *(8 + r1) = r30; // stw @ 0x80858100
    r30 = r3;
    r5 = *(0x6c + r3); // lwz @ 0x80858108
    r3 = *(0x28 + r5); // lwz @ 0x8085810C
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x80858134;
    r3 = *(0x6c + r30); // lwz @ 0x8085811C
    /* li r4, 0 */ // 0x80858120
    r3 = *(0x28 + r3); // lwz @ 0x80858124
    FUN_805E7060(r4); // bl 0x805E7060
    r3 = *(8 + r3); // lhz @ 0x8085812C
    /* b 0x80858138 */ // 0x80858130
    /* li r3, 0xff */ // 0x80858134
    /* li r0, 0x19 */ // 0x8085813C
    if (==) goto 0x0x80858148;
    /* li r0, 0x18 */ // 0x80858144
    /* subf r0, r0, r3 */ // 0x80858148
    r31 = *(0xc + r1); // lwz @ 0x8085814C
    /* cntlzw r0, r0 */ // 0x80858150
    r30 = *(8 + r1); // lwz @ 0x80858154
    /* srwi r3, r0, 5 */ // 0x80858158
    r0 = *(0x14 + r1); // lwz @ 0x8085815C
    return;
}