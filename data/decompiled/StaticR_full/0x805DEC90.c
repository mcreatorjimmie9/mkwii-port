/* Function at 0x805DEC90, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805DEC90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x805DEC98
    /* li r5, 0x1f0 */ // 0x805DEC9C
    *(0x14 + r1) = r0; // stw @ 0x805DECA0
    *(0xc + r1) = r31; // stw @ 0x805DECA4
    /* lis r31, 0 */ // 0x805DECA8
    r31 = r31 + 0; // 0x805DECAC
    *(8 + r1) = r30; // stw @ 0x805DECB0
    r30 = r3;
    r3 = r31 + 0; // 0x805DECB8
    FUN_805E3430(r3); // bl 0x805E3430
}