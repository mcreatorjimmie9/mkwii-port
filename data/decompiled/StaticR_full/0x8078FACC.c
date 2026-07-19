/* Function at 0x8078FACC, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8078FACC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078FAE0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078FAE8
    r29 = r3;
    if (==) goto 0x0x8078fb74;
    if (==) goto 0x0x8078fb64;
    /* addic. r31, r3, 0xb4 */ // 0x8078FAF8
    if (==) goto 0x0x8078fb24;
    /* lis r4, 0 */ // 0x8078FB00
    r3 = r31 + 0x28; // 0x8078FB04
    r4 = r4 + 0; // 0x8078FB08
    /* li r5, 0xc */ // 0x8078FB0C
    /* li r6, 2 */ // 0x8078FB10
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, -1 */ // 0x8078FB1C
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078fb64;
    r3 = r29 + 0x94; // 0x8078FB2C
    /* li r4, 0 */ // 0x8078FB30
    FUN_8078FDC8(r3, r4); // bl 0x8078FDC8
    if (==) goto 0x0x8078fb64;
    /* lis r4, 0 */ // 0x8078FB40
    r3 = r29 + 0x80; // 0x8078FB44
    r4 = r4 + 0; // 0x8078FB48
    /* li r5, 4 */ // 0x8078FB4C
    /* li r6, 4 */ // 0x8078FB50
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8078FB5C
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078fb74;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8078FB74
    r3 = r29;
}