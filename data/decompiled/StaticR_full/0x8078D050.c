/* Function at 0x8078D050, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_8078D050(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8078D068
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8078D070
    r28 = r3;
    if (==) goto 0x0x8078d110;
    /* addic. r31, r3, 0xf0 */ // 0x8078D07C
    if (==) goto 0x0x8078d0d8;
    /* lis r4, 0 */ // 0x8078D084
    /* lis r3, 0 */ // 0x8078D088
    r4 = r4 + 0; // 0x8078D08C
    *(0 + r31) = r4; // stw @ 0x8078D090
    r30 = *(0 + r3); // lwz @ 0x8078D094
    if (==) goto 0x0x8078d0cc;
    /* li r0, 0 */ // 0x8078D0A0
    *(0 + r3) = r0; // stw @ 0x8078D0A4
    if (==) goto 0x0x8078d0cc;
    r3 = r30 + 0xf0; // 0x8078D0AC
    /* li r4, -1 */ // 0x8078D0B0
    FUN_8078CC1C(r3, r4); // bl 0x8078CC1C
    r3 = r30;
    /* li r4, 0 */ // 0x8078D0BC
    FUN_8078CFE4(r3, r4, r3, r4); // bl 0x8078CFE4
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8078D0D0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078d100;
    /* lis r4, 0 */ // 0x8078D0E0
    r3 = r28;
    r4 = r4 + 0; // 0x8078D0E8
    *(0 + r28) = r4; // stw @ 0x8078D0EC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r28 + 4; // 0x8078D0F4
    /* li r4, -1 */ // 0x8078D0F8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078d110;
    r3 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8078D110
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x8078D118
    r29 = *(0x14 + r1); // lwz @ 0x8078D11C
    r28 = *(0x10 + r1); // lwz @ 0x8078D120
    r0 = *(0x24 + r1); // lwz @ 0x8078D124
}