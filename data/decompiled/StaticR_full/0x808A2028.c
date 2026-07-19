/* Function at 0x808A2028, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808A2028(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808A203C
    r29 = r3;
    r30 = *(8 + r3); // lwz @ 0x808A2044
    if (==) goto 0x0x808a208c;
    r0 = *(0x98 + r3); // lbz @ 0x808A2050
    if (!=) goto 0x0x808a208c;
    /* li r31, 0 */ // 0x808A205C
    r3 = *(0x14 + r30); // lwz @ 0x808A2060
    r3 = *(0 + r3); // lwz @ 0x808A2064
    if (==) goto 0x0x808a207c;
    r5 = r29 + 0x58; // 0x808A2070
    /* li r4, 0 */ // 0x808A2074
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x808A207C
    r30 = r30 + 4; // 0x808A2080
    if (<) goto 0x0x808a2060;
    r0 = *(0x90 + r29); // lbz @ 0x808A208C
    if (==) goto 0x0x808a20d8;
    r0 = *(0x98 + r29); // lbz @ 0x808A2098
    if (==) goto 0x0x808a20d8;
    r30 = *(0xc + r29); // lwz @ 0x808A20A4
    /* li r31, 0 */ // 0x808A20A8
    r3 = *(0x14 + r30); // lwz @ 0x808A20AC
    r3 = *(0 + r3); // lwz @ 0x808A20B0
    if (==) goto 0x0x808a20c8;
    r5 = r29 + 0x58; // 0x808A20BC
    /* li r4, 0 */ // 0x808A20C0
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x808A20C8
    r30 = r30 + 4; // 0x808A20CC
    if (<) goto 0x0x808a20ac;
    r0 = *(0x24 + r1); // lwz @ 0x808A20D8
    r31 = *(0x1c + r1); // lwz @ 0x808A20DC
    r30 = *(0x18 + r1); // lwz @ 0x808A20E0
    r29 = *(0x14 + r1); // lwz @ 0x808A20E4
    return;
}