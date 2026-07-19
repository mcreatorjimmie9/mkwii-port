/* Function at 0x808F69B4, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808F69B4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808F69C4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808F69CC
    r30 = r3;
    if (==) goto 0x0x808f6a30;
    /* lis r5, 0 */ // 0x808F69D8
    /* lis r4, 0 */ // 0x808F69DC
    r5 = r5 + 0; // 0x808F69E0
    *(0 + r3) = r5; // stw @ 0x808F69E4
    r3 = *(0 + r4); // lwz @ 0x808F69E8
    if (==) goto 0x0x808f6a14;
    /* li r0, 0 */ // 0x808F69F4
    *(0 + r4) = r0; // stw @ 0x808F69F8
    if (==) goto 0x0x808f6a14;
    r12 = *(0 + r3); // lwz @ 0x808F6A00
    /* li r4, 1 */ // 0x808F6A04
    r12 = *(8 + r12); // lwz @ 0x808F6A08
    /* mtctr r12 */ // 0x808F6A0C
    /* bctrl  */ // 0x808F6A10
    r3 = r30;
    /* li r4, 0 */ // 0x808F6A18
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808f6a30;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808F6A34
    r30 = *(8 + r1); // lwz @ 0x808F6A38
}