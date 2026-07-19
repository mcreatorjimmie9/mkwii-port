/* Function at 0x808C19EC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C19EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C19FC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C1A04
    r30 = r3;
    if (==) goto 0x0x808c1ab0;
    /* lis r4, 0 */ // 0x808C1A10
    /* li r5, 0x184 */ // 0x808C1A14
    r4 = r4 + 0; // 0x808C1A18
    /* li r6, 2 */ // 0x808C1A1C
    r3 = r3 + 0x3f78; // 0x808C1A20
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808C1A28
    r3 = r30 + 0x24b0; // 0x808C1A2C
    r4 = r4 + 0; // 0x808C1A30
    /* li r5, 0x474 */ // 0x808C1A34
    /* li r6, 6 */ // 0x808C1A38
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808C1A40
}