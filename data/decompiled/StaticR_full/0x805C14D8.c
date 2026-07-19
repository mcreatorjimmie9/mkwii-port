/* Function at 0x805C14D8, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_805C14D8(int r3, int r4, int r5, int r6, int r7)
{
    r0 = *(0xb70 + r3); // lwz @ 0x805C14D8
    /* bnelr  */ // 0x805C14E0
    r4 = *(0xb8c + r3); // lbz @ 0x805C14E4
    /* bgelr  */ // 0x805C14EC
    r3 = *(0xb88 + r3); // lwz @ 0x805C14F0
    /* lis r5, 0 */ // 0x805C14F4
    r0 = r4 + 1; // 0x805C14F8
    /* lis r7, 0 */ // 0x805C14FC
    /* slwi r6, r3, 4 */ // 0x805C1500
    r5 = r5 + 0; // 0x805C1504
    /* slwi r4, r0, 2 */ // 0x805C1508
    r3 = *(0 + r7); // lwz @ 0x805C150C
    r0 = r5 + r6; // 0x805C1510
    /* lwzx r4, r4, r0 */ // 0x805C1514
    /* b 0x805d0510 */ // 0x805C1518
}