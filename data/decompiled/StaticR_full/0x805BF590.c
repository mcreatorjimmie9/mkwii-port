/* Function at 0x805BF590, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805BF590(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BF5A0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BF5A8
    r30 = r3;
    if (==) goto 0x0x805bf630;
    /* addic. r3, r3, 0x1800 */ // 0x805BF5B4
    if (==) goto 0x0x805bf5d4;
    /* lis r4, 0 */ // 0x805BF5BC
    r3 = r3 + 8; // 0x805BF5C0
    r4 = r4 + 0; // 0x805BF5C4
    /* li r5, 0xf0 */ // 0x805BF5C8
    /* li r6, 0xc */ // 0x805BF5CC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0xc10 */ // 0x805BF5D4
    if (==) goto 0x0x805bf5f4;
    /* lis r4, 0 */ // 0x805BF5DC
    r3 = r3 + 8; // 0x805BF5E0
    r4 = r4 + 0; // 0x805BF5E4
    /* li r5, 0xf0 */ // 0x805BF5E8
    /* li r6, 0xc */ // 0x805BF5EC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0x20 */ // 0x805BF5F4
    if (==) goto 0x0x805bf614;
    /* lis r4, 0 */ // 0x805BF5FC
    r3 = r3 + 8; // 0x805BF600
    r4 = r4 + 0; // 0x805BF604
    /* li r5, 0xf0 */ // 0x805BF608
    /* li r6, 0xc */ // 0x805BF60C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x805BF618
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805bf630;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805BF634
    r30 = *(8 + r1); // lwz @ 0x805BF638
}