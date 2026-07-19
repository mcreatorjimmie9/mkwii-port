/* Function at 0x805C32DC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_805C32DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805C32E4
    r0 = r4 rlwinm 2; // rlwinm
    r5 = *(0xc + r3); // lwz @ 0x805C32EC
    /* lis r3, 0 */ // 0x805C32F0
    /* lwzx r4, r5, r0 */ // 0x805C32F4
    r0 = *(0x38 + r4); // lwz @ 0x805C32F8
    r0 = r0 | 0x20; // 0x805C32FC
    *(0x38 + r4) = r0; // stw @ 0x805C3300
    r3 = *(0 + r3); // lwz @ 0x805C3304
    r4 = *(8 + r4); // lbz @ 0x805C3308
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* li r4, 1 */ // 0x805C3314
    FUN_8060EBE0(r4); // bl 0x8060EBE0
    r0 = *(0x14 + r1); // lwz @ 0x805C331C
    return;
}