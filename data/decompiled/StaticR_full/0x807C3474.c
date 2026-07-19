/* Function at 0x807C3474, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C3474(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0x64 */ // 0x807C347C
    *(0xc + r1) = r31; // stw @ 0x807C3484
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807C348C
    /* lis r30, 0 */ // 0x807C3490
    r3 = *(0 + r30); // lwz @ 0x807C3494
    FUN_807C03BC(); // bl 0x807C03BC
    r4 = *(0xc + r31); // lwz @ 0x807C349C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C34A4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C34AC
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C34B4
    r3 = *(0 + r30); // lwz @ 0x807C34B8
    r4 = *(0xc + r4); // lwz @ 0x807C34BC
    r3 = *(0x8c + r3); // lwz @ 0x807C34C0
    /* lwzx r4, r4, r0 */ // 0x807C34C4
    r4 = *(0x20 + r4); // lbz @ 0x807C34C8
    r4 = r4 + -1; // 0x807C34CC
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(7 + r3); // lbz @ 0x807C34D4
    /* clrlwi r3, r31, 0x18 */ // 0x807C34D8
    r31 = *(0xc + r1); // lwz @ 0x807C34DC
    /* subf r0, r0, r3 */ // 0x807C34E0
    r30 = *(8 + r1); // lwz @ 0x807C34E4
    /* srwi r3, r0, 0x1f */ // 0x807C34E8
    r0 = *(0x14 + r1); // lwz @ 0x807C34EC
    return;
}