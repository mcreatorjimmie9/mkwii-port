/* Function at 0x8076666C, size=116 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8076666C(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    *(0x8c + r1) = r31; // stw @ 0x80766678
    r31 = r3;
    r3 = *(0xd0 + r3); // lwz @ 0x80766680
    r12 = *(0 + r3); // lwz @ 0x80766684
    r12 = *(0x18 + r12); // lwz @ 0x80766688
    /* mtctr r12 */ // 0x8076668C
    /* bctrl  */ // 0x80766690
    r0 = *(0xf8 + r31); // lbz @ 0x80766694
    if (!=) goto 0x0x807666ec;
    /* lis r4, 0 */ // 0x807666A0
    r4 = r4 + 0; // 0x807666A8
    /* li r5, 0 */ // 0x807666AC
    r4 = r4 + 0x59; // 0x807666B0
    FUN_805E3430(r4, r3, r4, r5, r4); // bl 0x805E3430
    FUN_805E3430(r4, r5, r4, r3); // bl 0x805E3430
    r4 = r31 + 0x30; // 0x807666C4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    /* lfs f1, 0x3c(r31) */ // 0x807666CC
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    FUN_805E3430(r3, r3); // bl 0x805E3430
}