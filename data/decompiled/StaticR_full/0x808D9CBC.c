/* Function at 0x808D9CBC, size=116 bytes */
/* Stack frame: 16 bytes */

void FUN_808D9CBC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    r0 = *(0x18c + r3); // lwz @ 0x808D9CC0
    if (>=) goto 0x0x808d9cd4;
    /* lfs f1, 0x10c(r3) */ // 0x808D9CCC
    /* b 0x808d9d28 */ // 0x808D9CD0
    r7 = *(0x108 + r3); // lwz @ 0x808D9CD4
    /* lis r0, 0x4330 */ // 0x808D9CD8
    /* lis r6, 0 */ // 0x808D9CDC
    /* lis r5, 0 */ // 0x808D9CE0
    /* subf r4, r7, r4 */ // 0x808D9CE4
    *(8 + r1) = r0; // stw @ 0x808D9CE8
    r0 = r4 * r4; // 0x808D9CEC
    /* lfd f4, 0(r6) */ // 0x808D9CF0
    /* lfs f2, 0(r5) */ // 0x808D9CF4
    /* lfs f1, 0x110(r3) */ // 0x808D9CF8
    /* lfs f0, 0x10c(r3) */ // 0x808D9CFC
    r0 = r0 * r4; // 0x808D9D00
    /* xoris r0, r0, 0x8000 */ // 0x808D9D04
    *(0xc + r1) = r0; // stw @ 0x808D9D08
    /* lfd f3, 8(r1) */ // 0x808D9D0C
    /* fsubs f3, f3, f4 */ // 0x808D9D10
    /* fmuls f2, f2, f3 */ // 0x808D9D14
    /* fadds f1, f1, f2 */ // 0x808D9D18
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x808D9D1C
    if (>=) goto 0x0x808d9d28;
    /* fmr f1, f0 */ // 0x808D9D24
    return;
}