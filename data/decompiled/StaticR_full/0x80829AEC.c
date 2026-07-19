/* Function at 0x80829AEC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80829AEC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80829AF4
    /* li r9, 0 */ // 0x80829AF8
    *(0x14 + r1) = r0; // stw @ 0x80829AFC
    r6 = r6 + 0; // 0x80829B00
    *(0xc + r1) = r31; // stw @ 0x80829B04
    r31 = r3;
    /* lfs f2, 0x44(r3) */ // 0x80829B0C
    /* lfs f1, 0x48(r3) */ // 0x80829B10
    /* lfs f0, 0x4c(r3) */ // 0x80829B14
    /* stfs f2, 0xbc(r3) */ // 0x80829B18
    r5 = *(0x74 + r3); // lwz @ 0x80829B1C
    *(0x164 + r3) = r9; // stw @ 0x80829B20
    r8 = r5 | 0x40; // 0x80829B24
    r0 = *(4 + r3); // lwz @ 0x80829B28
    /* stfs f1, 0xc0(r3) */ // 0x80829B2C
    /* mulli r5, r0, 0x74 */ // 0x80829B30
    r0 = *(4 + r3); // lwz @ 0x80829B34
    /* stfs f0, 0xc4(r3) */ // 0x80829B38
    /* lfs f2, 0x68(r3) */ // 0x80829B3C
    /* lfs f0, 0x88(r4) */ // 0x80829B40
    r7 = r6 + r5; // 0x80829B44
    /* stfs f0, 0x50(r3) */ // 0x80829B48
    /* mulli r0, r0, 0x74 */ // 0x80829B4C
    r5 = *(0xa4 + r3); // lwz @ 0x80829B50
    /* lfs f0, 0x8c(r4) */ // 0x80829B54
    /* stfs f0, 0x54(r3) */ // 0x80829B58
    r6 = r6 + r0; // 0x80829B5C
    /* lfs f0, 0x90(r4) */ // 0x80829B60
    /* stfs f0, 0x58(r3) */ // 0x80829B64
    *(0x74 + r3) = r8; // stw @ 0x80829B68
}