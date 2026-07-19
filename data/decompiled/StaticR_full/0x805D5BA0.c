/* Function at 0x805D5BA0, size=148 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5BA0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r6, 1 */ // 0x805D5BA0
    r10 = *(0 + r4); // lwz @ 0x805D5BA4
    r0 = r6 + -0x7340; // 0x805D5BA8
    r9 = *(4 + r4); // lwz @ 0x805D5BAC
    r0 = r5 * r0; // 0x805D5BB0
    r8 = *(8 + r4); // lwz @ 0x805D5BB4
    r7 = *(0xc + r4); // lwz @ 0x805D5BB8
    r6 = *(0x10 + r4); // lwz @ 0x805D5BBC
    r5 = *(0x14 + r4); // lwz @ 0x805D5BC0
    r11 = *(0x18 + r4); // lwz @ 0x805D5BC4
    r12 = r3 + r0; // 0x805D5BC8
    r0 = *(0x1c + r4); // lwz @ 0x805D5BCC
    *(0x48 + r12) = r10; // stw @ 0x805D5BD0
    r10 = *(0x20 + r4); // lwz @ 0x805D5BD4
    *(0x4c + r12) = r9; // stw @ 0x805D5BD8
    r9 = *(0x24 + r4); // lwz @ 0x805D5BDC
    *(0x50 + r12) = r8; // stw @ 0x805D5BE0
    r8 = *(0x28 + r4); // lwz @ 0x805D5BE4
    *(0x54 + r12) = r7; // stw @ 0x805D5BE8
    r7 = *(0x2c + r4); // lwz @ 0x805D5BEC
    *(0x58 + r12) = r6; // stw @ 0x805D5BF0
    r6 = *(0x30 + r4); // lwz @ 0x805D5BF4
    *(0x5c + r12) = r5; // stw @ 0x805D5BF8
    r5 = *(0x34 + r4); // lwz @ 0x805D5BFC
    *(0x60 + r12) = r11; // stw @ 0x805D5C00
    r3 = *(0x38 + r4); // lwz @ 0x805D5C04
    *(0x64 + r12) = r0; // stw @ 0x805D5C08
    r0 = *(0x3c + r4); // lwz @ 0x805D5C0C
    *(0x68 + r12) = r10; // stw @ 0x805D5C10
    *(0x6c + r12) = r9; // stw @ 0x805D5C14
    *(0x70 + r12) = r8; // stw @ 0x805D5C18
    *(0x74 + r12) = r7; // stw @ 0x805D5C1C
    *(0x78 + r12) = r6; // stw @ 0x805D5C20
    *(0x7c + r12) = r5; // stw @ 0x805D5C24
    *(0x80 + r12) = r3; // stw @ 0x805D5C28
    *(0x84 + r12) = r0; // stw @ 0x805D5C2C
    return;
}