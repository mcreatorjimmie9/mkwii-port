/* Function at 0x8068D9FC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8068D9FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068DA0C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068DA14
    r30 = r3;
    if (==) goto 0x0x8068da54;
    /* lis r4, 0 */ // 0x8068DA20
    /* li r5, 0x18c */ // 0x8068DA24
    r4 = r4 + 0; // 0x8068DA28
    /* li r6, 8 */ // 0x8068DA2C
    r3 = r3 + 0x174; // 0x8068DA30
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068DA3C
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068da54;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}