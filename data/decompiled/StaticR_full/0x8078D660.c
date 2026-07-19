/* Function at 0x8078D660, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8078D660(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8078D668
    *(0xc + r1) = r31; // stw @ 0x8078D670
    *(8 + r1) = r30; // stw @ 0x8078D674
    r31 = *(0 + r4); // lwz @ 0x8078D678
    if (==) goto 0x0x8078d6fc;
    /* li r0, 0 */ // 0x8078D684
    *(0 + r4) = r0; // stw @ 0x8078D688
    if (==) goto 0x0x8078d6fc;
    if (==) goto 0x0x8078d6f4;
    /* lis r3, 0 */ // 0x8078D694
    r3 = r3 + 0; // 0x8078D698
    *(0 + r31) = r3; // stw @ 0x8078D69C
    r30 = *(0 + r4); // lwz @ 0x8078D6A0
    if (==) goto 0x0x8078d6e8;
    *(0 + r4) = r0; // stw @ 0x8078D6AC
    if (==) goto 0x0x8078d6e8;
    if (==) goto 0x0x8078d6e0;
    *(0 + r30) = r3; // stw @ 0x8078D6B8
    r3 = *(0 + r4); // lwz @ 0x8078D6BC
    if (==) goto 0x0x8078d6d4;
    *(0 + r4) = r0; // stw @ 0x8078D6C8
    /* li r4, 1 */ // 0x8078D6CC
    FUN_8078D7E4(r4); // bl 0x8078D7E4
    r3 = r30;
    /* li r4, 0 */ // 0x8078D6D8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8078D6EC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x8078D6FC
    r31 = *(0xc + r1); // lwz @ 0x8078D700
    r30 = *(8 + r1); // lwz @ 0x8078D704
    return;
}