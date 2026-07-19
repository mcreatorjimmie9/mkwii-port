/* Function at 0x8074FEF8, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8074FEF8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8074FF08
    /* lfs f2, 0(r31) */ // 0x8074FF0C
    *(0x18 + r1) = r30; // stw @ 0x8074FF10
    /* lis r30, 0 */ // 0x8074FF14
    /* lfs f1, 0(r30) */ // 0x8074FF18
    *(0x14 + r1) = r29; // stw @ 0x8074FF1C
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x8074FF24
    r3 = *(0x28 + r4); // lwz @ 0x8074FF28
    /* li r4, 0 */ // 0x8074FF2C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x8074FF34
    /* li r4, 0 */ // 0x8074FF38
    /* lfs f1, 0(r30) */ // 0x8074FF3C
    /* li r5, 1 */ // 0x8074FF40
    r3 = *(0x28 + r3); // lwz @ 0x8074FF44
    /* lfs f2, 0(r31) */ // 0x8074FF48
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r0 = *(0x24 + r1); // lwz @ 0x8074FF50
    r31 = *(0x1c + r1); // lwz @ 0x8074FF54
    r30 = *(0x18 + r1); // lwz @ 0x8074FF58
    r29 = *(0x14 + r1); // lwz @ 0x8074FF5C
    return;
}