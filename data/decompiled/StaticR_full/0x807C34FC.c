/* Function at 0x807C34FC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_807C34FC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807C3504
    r3 = *(0xc + r3); // lwz @ 0x807C3508
    r3 = *(0 + r3); // lwz @ 0x807C350C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C3514
    /* lis r5, 0 */ // 0x807C3518
    r4 = *(0 + r4); // lwz @ 0x807C351C
    r0 = r3 rlwinm 2; // rlwinm
    r5 = *(0 + r5); // lwz @ 0x807C3524
    r4 = *(0xc + r4); // lwz @ 0x807C3528
    r3 = *(0x8c + r5); // lwz @ 0x807C352C
    /* lwzx r4, r4, r0 */ // 0x807C3530
    r4 = *(0x20 + r4); // lbz @ 0x807C3534
    r4 = r4 + -1; // 0x807C3538
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(0x14 + r1); // lwz @ 0x807C3540
    return;
}