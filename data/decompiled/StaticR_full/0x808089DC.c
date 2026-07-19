/* Function at 0x808089DC, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808089DC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808089EC
    r31 = r31 + 0; // 0x808089F0
    *(0x18 + r1) = r30; // stw @ 0x808089F4
    r30 = r5;
    r5 = r31 + 0xf1; // 0x808089FC
    *(0x14 + r1) = r29; // stw @ 0x80808A00
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80808A0C
    *(0xb0 + r29) = r30; // stw @ 0x80808A10
    r4 = r4 + 0; // 0x80808A14
    /* li r3, 0x7c */ // 0x80808A18
    *(0 + r29) = r4; // stw @ 0x80808A1C
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}