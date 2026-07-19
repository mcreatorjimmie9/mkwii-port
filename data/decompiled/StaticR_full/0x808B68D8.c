/* Function at 0x808B68D8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808B68D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808B68E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808B68F0
    r30 = r3;
    if (==) goto 0x0x808b6984;
    /* lis r4, 0 */ // 0x808B68FC
    /* li r5, 0x474 */ // 0x808B6900
    r4 = r4 + 0; // 0x808B6904
    /* li r6, 1 */ // 0x808B6908
    r3 = r3 + 0x16ec; // 0x808B690C
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808B6914
    r3 = r30 + 0x1124; // 0x808B6918
    r4 = r4 + 0; // 0x808B691C
    /* li r5, 0x5c8 */ // 0x808B6920
    /* li r6, 1 */ // 0x808B6924
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808B692C
}