/* Function at 0x80832278, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80832278(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80832280
    *(0x24 + r1) = r0; // stw @ 0x80832284
    *(0x1c + r1) = r31; // stw @ 0x80832288
    r31 = r3;
    r0 = *(0x78 + r3); // lwz @ 0x80832290
    r0 = r0 | 0x8000; // 0x80832294
    *(0x78 + r3) = r0; // stw @ 0x80832298
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x8083229C
    r5 = *(0 + r6); // lwzu @ 0x808322A0
    *(8 + r1) = r5; // stw @ 0x808322A4
    r4 = *(4 + r6); // lwz @ 0x808322A8
    r0 = *(8 + r6); // lwz @ 0x808322AC
    *(0xc + r1) = r4; // stw @ 0x808322B0
    *(0x10 + r1) = r0; // stw @ 0x808322B4
    if (!=) goto 0x0x808322c8;
    *(0x168 + r3) = r5; // stw @ 0x808322BC
    *(0x16c + r3) = r4; // stw @ 0x808322C0
    *(0x170 + r3) = r0; // stw @ 0x808322C4
    /* lis r7, 0 */ // 0x808322C8
    r6 = *(0 + r7); // lwzu @ 0x808322CC
    r0 = *(4 + r3); // lwz @ 0x808322D0
    /* lis r4, 0 */ // 0x808322D4
    r5 = *(4 + r7); // lwz @ 0x808322D8
    r4 = r4 + 0; // 0x808322DC
    /* mulli r0, r0, 0x74 */ // 0x808322E0
    *(0x178 + r3) = r5; // stw @ 0x808322E4
    *(0x174 + r3) = r6; // stw @ 0x808322E8
    r4 = r4 + r0; // 0x808322EC
    r0 = *(8 + r7); // lwz @ 0x808322F0
    *(0x17c + r3) = r0; // stw @ 0x808322F4
    r0 = *(0x58 + r4); // lbz @ 0x808322F8
    if (!=) goto 0x0x8083231c;
    r3 = r3 + 0x10; // 0x80832304
    r4 = r31 + 0x20; // 0x80832308
    FUN_8083F414(r3, r4); // bl 0x8083F414
    r0 = *(0x78 + r31); // lwz @ 0x80832310
    r0 = r0 | 0x100; // 0x80832314
    *(0x78 + r31) = r0; // stw @ 0x80832318
    r3 = *(0xa4 + r31); // lwz @ 0x8083231C
    r0 = *(0x20 + r3); // lwz @ 0x80832320
    r0 = r0 | 0x10; // 0x80832324
    *(0x20 + r3) = r0; // stw @ 0x80832328
    r31 = *(0x1c + r1); // lwz @ 0x8083232C
    r0 = *(0x24 + r1); // lwz @ 0x80832330
    return;
}