/* Function at 0x807C33EC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C33EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0x64 */ // 0x807C33F4
    *(0xc + r1) = r31; // stw @ 0x807C33FC
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807C3404
    /* lis r30, 0 */ // 0x807C3408
    r3 = *(0 + r30); // lwz @ 0x807C340C
    FUN_807C03BC(); // bl 0x807C03BC
    r4 = *(0xc + r31); // lwz @ 0x807C3414
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C341C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C3424
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C342C
    r3 = *(0 + r30); // lwz @ 0x807C3430
    r4 = *(0xc + r4); // lwz @ 0x807C3434
    r3 = *(0x8c + r3); // lwz @ 0x807C3438
    /* lwzx r4, r4, r0 */ // 0x807C343C
    r4 = *(0x20 + r4); // lbz @ 0x807C3440
    r4 = r4 + -1; // 0x807C3444
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(6 + r3); // lbz @ 0x807C344C
    /* clrlwi r3, r31, 0x18 */ // 0x807C3450
    r31 = *(0xc + r1); // lwz @ 0x807C3454
    /* subf r0, r0, r3 */ // 0x807C3458
    r30 = *(8 + r1); // lwz @ 0x807C345C
    /* srwi r3, r0, 0x1f */ // 0x807C3460
    r0 = *(0x14 + r1); // lwz @ 0x807C3464
    return;
}