/* Function at 0x807916AC, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807916AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807916C0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807916C8
    r29 = r3;
    if (==) goto 0x0x80791768;
    if (==) goto 0x0x80791758;
    /* addic. r3, r3, 0xf8 */ // 0x807916D8
    if (==) goto 0x0x807916e4;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80791758;
    /* addic. r31, r29, 0xb4 */ // 0x807916EC
    if (==) goto 0x0x80791718;
    /* lis r4, 0 */ // 0x807916F4
    r3 = r31 + 0x28; // 0x807916F8
    r4 = r4 + 0; // 0x807916FC
    /* li r5, 0xc */ // 0x80791700
    /* li r6, 2 */ // 0x80791704
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, -1 */ // 0x80791710
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x80791758;
    r3 = r29 + 0x94; // 0x80791720
    /* li r4, 0 */ // 0x80791724
    FUN_8078FDC8(r3, r4); // bl 0x8078FDC8
    if (==) goto 0x0x80791758;
    /* lis r4, 0 */ // 0x80791734
    r3 = r29 + 0x80; // 0x80791738
    r4 = r4 + 0; // 0x8079173C
    /* li r5, 4 */ // 0x80791740
    /* li r6, 4 */ // 0x80791744
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80791750
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80791768;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80791768
    r3 = r29;
}