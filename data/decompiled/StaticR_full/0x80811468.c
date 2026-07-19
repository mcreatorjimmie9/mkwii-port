/* Function at 0x80811468, size=104 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80811468(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x44 + r1) = r29; // stw @ 0x8081147C
    r29 = r3;
    r30 = *(0x10 + r3); // lwz @ 0x80811484
    if (==) goto 0x0x80811500;
    r3 = *(0x10 + r30); // lwz @ 0x80811490
    r3 = *(0 + r3); // lwz @ 0x80811494
    if (==) goto 0x0x808114b0;
    r3 = r3 + 0xc; // 0x808114A0
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x808114b8 */ // 0x808114AC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0xc0(r29) */ // 0x808114B8
    /* li r31, 0 */ // 0x808114BC
    /* stfs f0, 0x14(r1) */ // 0x808114C0
    /* lfs f0, 0xc4(r29) */ // 0x808114C4
    /* stfs f0, 0x24(r1) */ // 0x808114C8
    /* lfs f0, 0xc8(r29) */ // 0x808114CC
}