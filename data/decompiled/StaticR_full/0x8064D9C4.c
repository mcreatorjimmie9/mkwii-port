/* Function at 0x8064D9C4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8064D9C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8064D9CC
    /* li r0, 1 */ // 0x8064D9D4
    *(0xc + r1) = r31; // stw @ 0x8064D9D8
    /* lis r31, 0 */ // 0x8064D9DC
    /* lfs f1, 0(r31) */ // 0x8064D9E0
    *(8 + r1) = r30; // stw @ 0x8064D9E4
    r30 = r3;
    *(0xa50 + r3) = r0; // stw @ 0x8064D9EC
    FUN_80671C48(); // bl 0x80671C48
    r3 = *(0x824 + r30); // lwz @ 0x8064D9F4
    if (==) goto 0x0x8064da18;
    r12 = *(0 + r3); // lwz @ 0x8064DA00
    r4 = r30;
    /* lfs f1, 0(r31) */ // 0x8064DA08
    r12 = *(8 + r12); // lwz @ 0x8064DA0C
    /* mtctr r12 */ // 0x8064DA10
    /* bctrl  */ // 0x8064DA14
    r0 = *(0x14 + r1); // lwz @ 0x8064DA18
    r31 = *(0xc + r1); // lwz @ 0x8064DA1C
    r30 = *(8 + r1); // lwz @ 0x8064DA20
    return;
}