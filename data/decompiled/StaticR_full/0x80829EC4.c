/* Function at 0x80829EC4, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80829EC4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80829ED0
    *(0xc + r1) = r31; // stw @ 0x80829ED4
    r31 = r3;
    if (==) goto 0x0x80829efc;
    r0 = *(4 + r3); // lwz @ 0x80829EE0
    /* lis r3, 0 */ // 0x80829EE4
    r3 = r3 + 0; // 0x80829EE8
    /* mulli r0, r0, 0x74 */ // 0x80829EEC
    r3 = r3 + r0; // 0x80829EF0
    /* lfs f0, 0x3c(r3) */ // 0x80829EF4
    /* b 0x80829f14 */ // 0x80829EF8
    r0 = *(4 + r3); // lwz @ 0x80829EFC
    /* lis r3, 0 */ // 0x80829F00
    r3 = r3 + 0; // 0x80829F04
    /* mulli r0, r0, 0x74 */ // 0x80829F08
    r3 = r3 + r0; // 0x80829F0C
    /* lfs f0, 0x40(r3) */ // 0x80829F10
    /* lis r5, 0 */ // 0x80829F14
    /* lis r3, 0 */ // 0x80829F18
    r5 = r5 + 0; // 0x80829F1C
    /* lis r4, 0 */ // 0x80829F20
    r5 = r5 + r0; // 0x80829F24
    /* lfs f2, 0(r4) */ // 0x80829F28
    /* lfs f1, 0x48(r5) */ // 0x80829F2C
    r6 = r31;
    r3 = *(0 + r3); // lwz @ 0x80829F34
    r4 = r31 + 0x44; // 0x80829F38
    /* fmuls f1, f1, f0 */ // 0x80829F3C
    /* li r5, 1 */ // 0x80829F40
    FUN_80815CD4(r6, r4, r5); // bl 0x80815CD4
    *(0xb0 + r31) = r3; // stw @ 0x80829F48
    r31 = *(0xc + r1); // lwz @ 0x80829F4C
    r0 = *(0x14 + r1); // lwz @ 0x80829F50
    return;
}