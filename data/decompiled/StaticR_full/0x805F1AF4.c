/* Function at 0x805F1AF4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F1AF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F1AFC
    /* lis r4, 0 */ // 0x805F1B00
    *(0x14 + r1) = r0; // stw @ 0x805F1B04
    r5 = r5 + 0; // 0x805F1B08
    r5 = r5 + 0x98; // 0x805F1B0C
    /* li r6, 0 */ // 0x805F1B10
    *(0xc + r1) = r31; // stw @ 0x805F1B14
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x805F1B1C
    /* li r4, 5 */ // 0x805F1B20
    FUN_805CFD60(r6, r4); // bl 0x805CFD60
    if (==) goto 0x0x805f1b4c;
    r5 = *(0x20 + r31); // lwz @ 0x805F1B30
    r4 = r3;
    r3 = *(0x20 + r5); // lwz @ 0x805F1B38
    r12 = *(0 + r3); // lwz @ 0x805F1B3C
    r12 = *(8 + r12); // lwz @ 0x805F1B40
    /* mtctr r12 */ // 0x805F1B44
    /* bctrl  */ // 0x805F1B48
    r0 = *(0x14 + r1); // lwz @ 0x805F1B4C
    r31 = *(0xc + r1); // lwz @ 0x805F1B50
    return;
}