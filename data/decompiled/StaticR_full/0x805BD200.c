/* Function at 0x805BD200, size=112 bytes */
/* Stack frame: 16 bytes */

int FUN_805BD200(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x805BD204
    /* li r0, 0 */ // 0x805BD208
    /* li r8, 0 */ // 0x805BD20C
    *(8 + r1) = r0; // stw @ 0x805BD210
    r7 = *(0 + r4); // lwz @ 0x805BD218
    /* b 0x805bd248 */ // 0x805BD21C
    /* clrlwi r0, r8, 0x18 */ // 0x805BD220
    r8 = r8 + 1; // 0x805BD224
    /* mulli r0, r0, 0xf0 */ // 0x805BD228
    r4 = r3 + r0; // 0x805BD22C
    r6 = *(0xd4 + r4); // lwz @ 0x805BD230
    r0 = *(0xe0 + r4); // lhz @ 0x805BD234
    /* slwi r6, r6, 1 */ // 0x805BD238
    /* lhzx r4, r5, r6 */ // 0x805BD23C
    r0 = r4 + r0; // 0x805BD240
    /* sthx r0, r5, r6 */ // 0x805BD244
    r0 = *(0x24 + r7); // lbz @ 0x805BD248
    /* clrlwi r4, r8, 0x18 */ // 0x805BD24C
    if (<) goto 0x0x805bd220;
    r3 = *(8 + r1); // lhz @ 0x805BD258
    r0 = *(0xa + r1); // lhz @ 0x805BD25C
    /* subf r0, r0, r3 */ // 0x805BD260
    /* srwi r3, r0, 0x1f */ // 0x805BD264
    return;
}