/* Function at 0x806ABFC8, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

void FUN_806ABFC8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0x5b */ // 0x806ABFD0
    /* li r5, 0 */ // 0x806ABFD4
    *(0x24 + r1) = r0; // stw @ 0x806ABFD8
    /* stfd f31, 0x18(r1) */ // 0x806ABFDC
    /* fmr f31, f1 */ // 0x806ABFE0
    *(0x14 + r1) = r31; // stw @ 0x806ABFE4
    /* lis r31, 0 */ // 0x806ABFE8
    r3 = *(0 + r31); // lwz @ 0x806ABFEC
    FUN_80698C44(); // bl 0x80698C44
    /* fctiwz f0, f31 */ // 0x806ABFF4
    r3 = *(0 + r31); // lwz @ 0x806ABFF8
    /* li r5, 0xff */ // 0x806ABFFC
    /* stfd f0, 8(r1) */ // 0x806AC000
    r4 = *(0xc + r1); // lwz @ 0x806AC004
    FUN_80698CD0(r5); // bl 0x80698CD0
    /* lis r3, 0 */ // 0x806AC00C
    r3 = *(0 + r3); // lwz @ 0x806AC010
    FUN_8078819C(r3); // bl 0x8078819C
    /* lis r3, 0 */ // 0x806AC018
    /* li r0, 1 */ // 0x806AC01C
    r3 = *(0 + r3); // lwz @ 0x806AC020
    *(0xc + r3) = r0; // stb @ 0x806AC024
    /* lfd f31, 0x18(r1) */ // 0x806AC028
    r31 = *(0x14 + r1); // lwz @ 0x806AC02C
    r0 = *(0x24 + r1); // lwz @ 0x806AC030
    return;
}