/* Function at 0x80811160, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80811160(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8081116C
    r31 = r3;
    r0 = *(0xb0 + r3); // lbz @ 0x80811174
    if (!=) goto 0x0x808111b8;
    /* li r0, 1 */ // 0x80811180
    *(0xb0 + r3) = r0; // stb @ 0x80811184
    /* lis r3, 0 */ // 0x80811188
    /* lis r4, 0 */ // 0x8081118C
    /* lfs f1, 0(r3) */ // 0x80811190
    r4 = r4 + 0; // 0x80811198
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x808111A0
    /* stfs f0, 0xb4(r31) */ // 0x808111A4
    /* lfs f0, 0xc(r1) */ // 0x808111A8
    /* stfs f0, 0xb8(r31) */ // 0x808111AC
    /* lfs f0, 0x10(r1) */ // 0x808111B0
    /* stfs f0, 0xbc(r31) */ // 0x808111B4
    r0 = *(0x24 + r1); // lwz @ 0x808111B8
    r31 = *(0x1c + r1); // lwz @ 0x808111BC
    return;
}