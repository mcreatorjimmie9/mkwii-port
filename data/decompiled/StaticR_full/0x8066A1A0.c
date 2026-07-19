/* Function at 0x8066A1A0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8066A1A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8066A1B0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066A1B8
    r30 = r3;
    if (==) goto 0x0x8066a1f8;
    /* lis r4, 0 */ // 0x8066A1C4
    /* li r5, 0x5c */ // 0x8066A1C8
    r4 = r4 + 0; // 0x8066A1CC
    /* li r6, 5 */ // 0x8066A1D0
    r3 = r3 + 0x54; // 0x8066A1D4
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x10; // 0x8066A1DC
    /* li r4, -1 */ // 0x8066A1E0
    FUN_805E3430(r6, r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8066a1f8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}