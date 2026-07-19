/* Function at 0x80638720, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80638720(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80638730
    *(8 + r1) = r30; // stw @ 0x80638734
    if (==) goto 0x0x80638750;
    if (==) goto 0x0x80638810;
    if (==) goto 0x0x80638818;
    /* b 0x806388d4 */ // 0x8063874C
    /* li r3, 0x10c */ // 0x80638750
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80638774;
    /* li r4, 0 */ // 0x80638764
    /* li r5, 0 */ // 0x80638768
    FUN_805F553C(r4, r5); // bl 0x805F553C
    r31 = r3;
    /* li r3, 4 */ // 0x80638774
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}