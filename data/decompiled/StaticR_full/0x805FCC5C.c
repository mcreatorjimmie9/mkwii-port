/* Function at 0x805FCC5C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FCC5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3 + 0x108; // 0x805FCC6C
    r30 = r3 + 0xa8; // 0x805FCC74
    *(0x14 + r1) = r29; // stw @ 0x805FCC78
    /* li r29, 0 */ // 0x805FCC7C
    *(0x10 + r1) = r28; // stw @ 0x805FCC80
    r28 = r3;
    r3 = r28;
    FUN_8061ED38(r3); // bl 0x8061ED38
    r5 = r3;
    r4 = r30;
    r6 = r31;
    r3 = r28 + 0x254; // 0x805FCC9C
    FUN_808589CC(r5, r4, r6, r3); // bl 0x808589CC
    r29 = r29 + 1; // 0x805FCCA4
    r30 = r30 + 0x30; // 0x805FCCA8
    r31 = r31 + 0x30; // 0x805FCCB0
    if (<) goto 0x0x805fcc88;
    r0 = *(0x24 + r1); // lwz @ 0x805FCCB8
    r31 = *(0x1c + r1); // lwz @ 0x805FCCBC
    r30 = *(0x18 + r1); // lwz @ 0x805FCCC0
    r29 = *(0x14 + r1); // lwz @ 0x805FCCC4
    r28 = *(0x10 + r1); // lwz @ 0x805FCCC8
    return;
}