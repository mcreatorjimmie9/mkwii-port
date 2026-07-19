/* Function at 0x806B5F24, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B5F24(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B5F34
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B5F3C
    r30 = r3;
    if (==) goto 0x0x806b5fb0;
    /* lis r4, 0 */ // 0x806B5F48
    /* li r5, 0x174 */ // 0x806B5F4C
    r4 = r4 + 0; // 0x806B5F50
    /* li r6, 0xc */ // 0x806B5F54
    r3 = r3 + 0x5fc; // 0x806B5F58
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* addic. r3, r30, 0x488 */ // 0x806B5F60
    if (==) goto 0x0x806b5f70;
    /* li r4, 0 */ // 0x806B5F68
    FUN_806A0540(r3, r4); // bl 0x806A0540
    r3 = r30 + 0x314; // 0x806B5F70
    /* li r4, -1 */ // 0x806B5F74
    FUN_806A0540(r4, r3, r4); // bl 0x806A0540
}