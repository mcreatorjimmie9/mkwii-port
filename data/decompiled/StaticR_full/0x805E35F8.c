/* Function at 0x805E35F8, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_805E35F8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r4, -0x4d1c */ // 0x805E35F8
    r10 = *(0xc + r3); // lwz @ 0x805E35FC
    r7 = r4 + -0x2bcf; // 0x805E3600
    r9 = *(8 + r3); // lwz @ 0x805E3604
    /* lis r4, 0x51 */ // 0x805E3608
    /* lis r5, 0x6903 */ // 0x805E360C
    r0 = r4 + -0x7143; // 0x805E3610
    r6 = r10 * r7; // 0x805E3614
    r8 = r5 + 0x79b2; // 0x805E3618
    /* li r5, 0 */ // 0x805E361C
    r4 = r9 * r7; // 0x805E3620
    r7 = r10 * r7; // 0x805E3624
    r6 = r6 + r4; // 0x805E3628
    /* addc r0, r7, r0 */ // 0x805E362C
    *(0xc + r3) = r0; // stw @ 0x805E3630
    r4 = r10 * r8; // 0x805E3634
    r0 = r6 + r4; // 0x805E3638
    /* adde r0, r0, r5 */ // 0x805E363C
    *(8 + r3) = r0; // stw @ 0x805E3640
    r3 = r0;
    return;
}