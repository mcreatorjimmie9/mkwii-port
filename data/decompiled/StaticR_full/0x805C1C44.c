/* Function at 0x805C1C44, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805C1C44(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805C1C4C
    *(0xc + r1) = r31; // stw @ 0x805C1C54
    *(8 + r1) = r30; // stw @ 0x805C1C58
    r4 = *(0 + r4); // lwz @ 0x805C1C5C
    r0 = *(0xb78 + r4); // lwz @ 0x805C1C60
    if (!=) goto 0x0x805c1ca8;
    r30 = *(0x3c + r3); // lwz @ 0x805C1C6C
    r31 = *(0x24 + r4); // lbz @ 0x805C1C70
    r4 = *(0xb68 + r4); // lwz @ 0x805C1C74
    r3 = r30;
    FUN_805C789C(r3); // bl 0x805C789C
    /* extsh r3, r3 */ // 0x805C1C80
    r0 = r31 + -2; // 0x805C1C84
    /* mulli r3, r3, 0x16 */ // 0x805C1C88
    r4 = *(4 + r30); // lwz @ 0x805C1C8C
    /* slwi r0, r0, 1 */ // 0x805C1C90
    r3 = r4 + r3; // 0x805C1C94
    r3 = r3 + r0; // 0x805C1C98
    r0 = *(0x10 + r3); // lha @ 0x805C1C9C
    /* clrlwi r3, r0, 0x10 */ // 0x805C1CA0
    /* b 0x805c1ce0 */ // 0x805C1CA4
    r30 = *(0x3c + r3); // lwz @ 0x805C1CA8
    r31 = *(0x24 + r4); // lbz @ 0x805C1CAC
    r4 = *(0xb68 + r4); // lwz @ 0x805C1CB0
    r3 = r30;
    FUN_805C789C(r3); // bl 0x805C789C
    /* extsh r3, r3 */ // 0x805C1CBC
    r0 = r31 + -2; // 0x805C1CC0
    /* mulli r3, r3, 0x16 */ // 0x805C1CC4
    r4 = *(4 + r30); // lwz @ 0x805C1CC8
    /* slwi r0, r0, 1 */ // 0x805C1CCC
    r3 = r4 + r3; // 0x805C1CD0
    r3 = r3 + r0; // 0x805C1CD4
    r0 = *(0x1dc + r3); // lha @ 0x805C1CD8
    /* clrlwi r3, r0, 0x10 */ // 0x805C1CDC
    r0 = *(0x14 + r1); // lwz @ 0x805C1CE0
    r31 = *(0xc + r1); // lwz @ 0x805C1CE4
    r30 = *(8 + r1); // lwz @ 0x805C1CE8
    return;
}