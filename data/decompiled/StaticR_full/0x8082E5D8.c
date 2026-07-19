/* Function at 0x8082E5D8, size=108 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_8082E5D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lfs f2, 0x44(r3) */ // 0x8082E5E0
    /* lis r5, 0 */ // 0x8082E5E4
    /* lfs f1, 0x48(r3) */ // 0x8082E5E8
    /* lis r4, 0 */ // 0x8082E5EC
    /* lfs f0, 0x4c(r3) */ // 0x8082E5F0
    /* fctiwz f2, f2 */ // 0x8082E5F4
    *(0x24 + r1) = r0; // stw @ 0x8082E5F8
    /* fctiwz f1, f1 */ // 0x8082E5FC
    /* fctiwz f0, f0 */ // 0x8082E600
    r5 = r5 + 0; // 0x8082E604
    r3 = *(0 + r4); // lwz @ 0x8082E608
    /* stfd f2, 8(r1) */ // 0x8082E60C
    r7 = *(0xb68 + r3); // lwz @ 0x8082E610
    r3 = r5 + 0x93; // 0x8082E614
    /* stfd f1, 0x10(r1) */ // 0x8082E618
    r4 = *(0xc + r1); // lwz @ 0x8082E61C
    /* stfd f0, 0x18(r1) */ // 0x8082E620
    r5 = *(0x14 + r1); // lwz @ 0x8082E624
    r6 = *(0x1c + r1); // lwz @ 0x8082E628
    /* crclr cr1eq */ // 0x8082E62C
    FUN_808620C0(); // bl 0x808620C0
    r0 = *(0x24 + r1); // lwz @ 0x8082E634
    return;
}