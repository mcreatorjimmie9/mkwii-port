/* Function at 0x808D9BEC, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D9BEC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x808D9BF4
    *(0x34 + r1) = r0; // stw @ 0x808D9BF8
    *(0x2c + r1) = r31; // stw @ 0x808D9BFC
    r31 = r3;
    r6 = *(0 + r6); // lwz @ 0x808D9C04
    r5 = *(0x114 + r3); // lwz @ 0x808D9C08
    r6 = *(0x20 + r6); // lwz @ 0x808D9C0C
    r0 = *(0x118 + r3); // lwz @ 0x808D9C10
    *(0xc + r1) = r0; // stw @ 0x808D9C14
    /* subf r7, r4, r6 */ // 0x808D9C18
    *(8 + r1) = r5; // stw @ 0x808D9C1C
    r0 = *(0x11c + r3); // lwz @ 0x808D9C20
    *(0x10 + r1) = r0; // stw @ 0x808D9C24
    r0 = *(0x18c + r3); // lwz @ 0x808D9C28
    if (>=) goto 0x0x808d9c3c;
    /* lfs f1, 0x10c(r3) */ // 0x808D9C34
    /* b 0x808d9c90 */ // 0x808D9C38
    r6 = *(0x108 + r3); // lwz @ 0x808D9C3C
    /* lis r0, 0x4330 */ // 0x808D9C40
    /* lis r5, 0 */ // 0x808D9C44
    /* lis r4, 0 */ // 0x808D9C48
    /* subf r6, r6, r7 */ // 0x808D9C4C
    *(0x18 + r1) = r0; // stw @ 0x808D9C50
    r0 = r6 * r6; // 0x808D9C54
    /* lfd f4, 0(r5) */ // 0x808D9C58
    /* lfs f2, 0(r4) */ // 0x808D9C5C
    /* lfs f1, 0x110(r3) */ // 0x808D9C60
    /* lfs f0, 0x10c(r3) */ // 0x808D9C64
    r0 = r0 * r6; // 0x808D9C68
    /* xoris r0, r0, 0x8000 */ // 0x808D9C6C
    *(0x1c + r1) = r0; // stw @ 0x808D9C70
    /* lfd f3, 0x18(r1) */ // 0x808D9C74
    /* fsubs f3, f3, f4 */ // 0x808D9C78
    /* fmuls f2, f2, f3 */ // 0x808D9C7C
    /* fadds f1, f1, f2 */ // 0x808D9C80
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x808D9C84
    if (>=) goto 0x0x808d9c90;
    /* fmr f1, f0 */ // 0x808D9C8C
    /* stfs f1, 8(r1) */ // 0x808D9C90
    r3 = r3 + 0x15c; // 0x808D9C94
    r5 = r31 + 0x30; // 0x808D9C9C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}