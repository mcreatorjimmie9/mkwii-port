/* Function at 0x8084A3AC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8084A3AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8084A3BC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8084A3C4
    r30 = r3;
    if (==) goto 0x0x8084a3ec;
    r3 = *(0 + r3); // lwz @ 0x8084A3D0
    /* li r4, 1 */ // 0x8084A3D4
    FUN_808433FC(r4); // bl 0x808433FC
    if (<=) goto 0x0x8084a3ec;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8084A3F0
    r30 = *(8 + r1); // lwz @ 0x8084A3F4
    r0 = *(0x14 + r1); // lwz @ 0x8084A3F8
    return;
}