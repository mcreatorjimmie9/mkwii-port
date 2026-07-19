/* Function at 0x8083136C, size=72 bytes */
/* Stack frame: 32 bytes */

int FUN_8083136C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0 */ // 0x80831370
    /* lis r3, 0 */ // 0x80831374
    r5 = *(0 + r6); // lwzu @ 0x80831378
    r3 = r3 + 0; // 0x8083137C
    *(8 + r1) = r5; // stw @ 0x80831380
    r4 = *(4 + r6); // lwz @ 0x80831384
    r0 = *(8 + r6); // lwz @ 0x80831388
    *(0xc + r1) = r4; // stw @ 0x8083138C
    *(0x10 + r1) = r0; // stw @ 0x80831390
    *(4 + r3) = r5; // stw @ 0x80831394
    *(8 + r3) = r4; // stw @ 0x80831398
    *(0xc + r3) = r0; // stw @ 0x8083139C
    *(0x20 + r3) = r5; // stw @ 0x808313A0
    *(0x24 + r3) = r4; // stw @ 0x808313A4
    *(0x28 + r3) = r0; // stw @ 0x808313A8
    return;
}