/* Function at 0x8078E0B8, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8078E0B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078E0CC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078E0D4
    r29 = r3;
    if (==) goto 0x0x8078e15c;
    /* addic. r31, r3, 0xb4 */ // 0x8078E0E0
    if (==) goto 0x0x8078e10c;
    /* lis r4, 0 */ // 0x8078E0E8
    r3 = r31 + 0x28; // 0x8078E0EC
    r4 = r4 + 0; // 0x8078E0F0
    /* li r5, 0xc */ // 0x8078E0F4
    /* li r6, 2 */ // 0x8078E0F8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, -1 */ // 0x8078E104
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078e14c;
    r3 = r29 + 0x94; // 0x8078E114
    /* li r4, 0 */ // 0x8078E118
    FUN_8078FDC8(r3, r4); // bl 0x8078FDC8
    if (==) goto 0x0x8078e14c;
    /* lis r4, 0 */ // 0x8078E128
    r3 = r29 + 0x80; // 0x8078E12C
    r4 = r4 + 0; // 0x8078E130
    /* li r5, 4 */ // 0x8078E134
    /* li r6, 4 */ // 0x8078E138
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8078E144
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078e15c;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8078E15C
    r3 = r29;
}