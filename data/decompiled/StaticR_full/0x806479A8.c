/* Function at 0x806479A8, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806479A8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x806479B4
    *(0x1c + r1) = r31; // stw @ 0x806479B8
    r31 = r3;
    if (!=) goto 0x0x806479e8;
    r3 = *(0x18 + r3); // lwz @ 0x806479C4
    /* li r5, 0x40 */ // 0x806479CC
    /* li r6, 0x40 */ // 0x806479D0
    /* li r7, 0x80 */ // 0x806479D4
    /* li r8, 0x80 */ // 0x806479D8
    FUN_805E3430(r4, r5, r6, r7, r8); // bl 0x805E3430
    *(0xa0 + r31) = r3; // stw @ 0x806479E0
    /* b 0x806479ec */ // 0x806479E4
    FUN_805F2164(r7, r8); // bl 0x805F2164
    r0 = *(0x24 + r1); // lwz @ 0x806479EC
    r31 = *(0x1c + r1); // lwz @ 0x806479F0
}