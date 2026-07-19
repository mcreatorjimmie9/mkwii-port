/* Function at 0x807A4778, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807A4778(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807A478C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807A4794
    r29 = r3;
    if (==) goto 0x0x807a47fc;
    if (==) goto 0x0x807a47ec;
    /* lis r5, 0 */ // 0x807A47A4
    /* lis r4, 0 */ // 0x807A47A8
    r5 = r5 + 0; // 0x807A47AC
    *(0 + r3) = r5; // stw @ 0x807A47B0
    r31 = *(0 + r4); // lwz @ 0x807A47B4
    if (==) goto 0x0x807a47e0;
    /* li r0, 0 */ // 0x807A47C0
    *(0 + r4) = r0; // stw @ 0x807A47C4
    if (==) goto 0x0x807a47e0;
    r3 = r31;
    /* li r4, -1 */ // 0x807A47D0
    FUN_807A44BC(r3, r4); // bl 0x807A44BC
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807A47E4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807a47fc;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807A47FC
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807A4804
    r29 = *(0x14 + r1); // lwz @ 0x807A4808
    r0 = *(0x24 + r1); // lwz @ 0x807A480C
    return;
}