/* Function at 0x80832340, size=164 bytes */
/* Stack frame: 32 bytes */

void FUN_80832340(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x80832344
    r4 = r4 + 0; // 0x80832348
    r0 = *(4 + r3); // lwz @ 0x8083234C
    r5 = *(0x78 + r3); // lwz @ 0x80832350
    /* mulli r0, r0, 0x74 */ // 0x80832354
    r5 = r5 rlwinm 0; // rlwinm
    r5 = r5 | 4; // 0x8083235C
    *(0x78 + r3) = r5; // stw @ 0x80832360
    r4 = r4 + r0; // 0x80832364
    r0 = *(0x16 + r4); // lbz @ 0x80832368
    if (!=) goto 0x0x808323a4;
    /* lis r6, 0 */ // 0x80832374
    /* rlwinm. r0, r5, 0, 0x18, 0x19 */ // 0x80832378
    r5 = *(0 + r6); // lwzu @ 0x8083237C
    *(8 + r1) = r5; // stw @ 0x80832380
    r4 = *(4 + r6); // lwz @ 0x80832384
    r0 = *(8 + r6); // lwz @ 0x80832388
    *(0xc + r1) = r4; // stw @ 0x8083238C
    *(0x10 + r1) = r0; // stw @ 0x80832390
    if (!=) goto 0x0x808323a4;
    *(0x168 + r3) = r5; // stw @ 0x80832398
    *(0x16c + r3) = r4; // stw @ 0x8083239C
    *(0x170 + r3) = r0; // stw @ 0x808323A0
    /* lis r7, 0 */ // 0x808323A4
    r6 = *(0 + r7); // lwzu @ 0x808323A8
    r0 = *(0x78 + r3); // lwz @ 0x808323AC
    r5 = *(4 + r7); // lwz @ 0x808323B0
    *(0x178 + r3) = r5; // stw @ 0x808323B4
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0xa4 + r3); // lwz @ 0x808323BC
    *(0x174 + r3) = r6; // stw @ 0x808323C0
    r5 = *(8 + r7); // lwz @ 0x808323C4
    *(0x17c + r3) = r5; // stw @ 0x808323C8
    *(0x78 + r3) = r0; // stw @ 0x808323CC
    r0 = *(0x20 + r4); // lwz @ 0x808323D0
    r0 = r0 | 0x10; // 0x808323D4
    *(0x20 + r4) = r0; // stw @ 0x808323D8
    return;
}