/* Function at 0x807D1E00, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_807D1E00(int r3, int r4, int r5)
{
    /* clrlwi r0, r4, 0x18 */ // 0x807D1E00
    /* lis r4, 0 */ // 0x807D1E04
    /* mulli r0, r0, 0xf0 */ // 0x807D1E08
    r4 = *(0 + r4); // lwz @ 0x807D1E0C
    /* li r5, 0 */ // 0x807D1E10
    r4 = r4 + r0; // 0x807D1E14
    r0 = *(0xf4 + r4); // lwz @ 0x807D1E18
    if (!=) goto 0x0x807d1e30;
    r3 = *(0xc4 + r3); // lwz @ 0x807D1E24
    r5 = *(0x18 + r3); // lwz @ 0x807D1E28
    /* b 0x807d1e40 */ // 0x807D1E2C
    if (!=) goto 0x0x807d1e40;
    r3 = *(0xc0 + r3); // lwz @ 0x807D1E38
    r5 = *(0x18 + r3); // lwz @ 0x807D1E3C
    r3 = r5;
    return;
}