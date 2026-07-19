/* Function at 0x807E23C4, size=136 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807E23C4(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807E23D4
    r31 = r31 + 0; // 0x807E23D8
    *(0x48 + r1) = r30; // stw @ 0x807E23DC
    r30 = r3;
    /* lfs f2, 0xb0(r31) */ // 0x807E23E4
    /* lfs f1, 0x128(r3) */ // 0x807E23E8
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x807E23EC
    if (>=) goto 0x0x807e24a8;
    /* lfs f0, 0xf0(r31) */ // 0x807E23F4
    /* fadds f0, f1, f0 */ // 0x807E23F8
    /* stfs f0, 0x128(r3) */ // 0x807E23FC
    r3 = *(0xc8 + r3); // lwz @ 0x807E2400
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = r3;
    r5 = r30 + 0x30; // 0x807E2410
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    /* lfs f0, 0(r31) */ // 0x807E2418
    /* stfs f0, 0x3c(r1) */ // 0x807E2420
    FUN_805E3430(r5, r3); // bl 0x805E3430
    r3 = r30;
    FUN_808A1BCC(r3, r3); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x807E2434
    /* li r5, 2 */ // 0x807E2438
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
    /* lfs f1, 0xb0(r31) */ // 0x807E2448
}