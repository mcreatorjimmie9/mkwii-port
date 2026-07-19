/* Function at 0x806AE930, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806AE930(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AE940
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AE948
    r30 = r3;
    if (==) goto 0x0x806ae96c;
    /* li r4, 0 */ // 0x806AE954
    FUN_806498AC(r4); // bl 0x806498AC
    if (<=) goto 0x0x806ae96c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AE970
    r30 = *(8 + r1); // lwz @ 0x806AE974
    r0 = *(0x14 + r1); // lwz @ 0x806AE978
    return;
}