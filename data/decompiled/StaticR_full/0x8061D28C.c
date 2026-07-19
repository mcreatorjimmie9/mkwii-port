/* Function at 0x8061D28C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8061D28C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8061D29C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061D2A4
    r30 = r3;
    if (==) goto 0x0x8061d308;
    /* lis r5, 0 */ // 0x8061D2B0
    /* lis r4, 0 */ // 0x8061D2B4
    r5 = r5 + 0; // 0x8061D2B8
    *(0 + r3) = r5; // stw @ 0x8061D2BC
    r3 = *(0 + r4); // lwz @ 0x8061D2C0
    if (==) goto 0x0x8061d2ec;
    /* li r0, 0 */ // 0x8061D2CC
    *(0 + r4) = r0; // stw @ 0x8061D2D0
    if (==) goto 0x0x8061d2ec;
    r12 = *(0 + r3); // lwz @ 0x8061D2D8
    /* li r4, 1 */ // 0x8061D2DC
    r12 = *(8 + r12); // lwz @ 0x8061D2E0
    /* mtctr r12 */ // 0x8061D2E4
    /* bctrl  */ // 0x8061D2E8
    r3 = r30;
    /* li r4, 0 */ // 0x8061D2F0
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8061d308;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8061D30C
    r30 = *(8 + r1); // lwz @ 0x8061D310
}