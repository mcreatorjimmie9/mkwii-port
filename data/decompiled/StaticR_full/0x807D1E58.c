/* Function at 0x807D1E58, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_807D1E58(int r3, int r4, int r5, int r6)
{
    /* clrlwi r0, r4, 0x18 */ // 0x807D1E58
    /* lis r4, 0 */ // 0x807D1E5C
    /* mulli r0, r0, 0xf0 */ // 0x807D1E60
    r4 = *(0 + r4); // lwz @ 0x807D1E64
    /* li r6, 0 */ // 0x807D1E68
    r4 = r4 + r0; // 0x807D1E6C
    r0 = *(0xf4 + r4); // lwz @ 0x807D1E70
    if (!=) goto 0x0x807d1e8c;
    r3 = *(0xc4 + r3); // lwz @ 0x807D1E7C
    /* slwi r0, r5, 2 */ // 0x807D1E80
    /* lwzx r6, r3, r0 */ // 0x807D1E84
    /* b 0x807d1ea0 */ // 0x807D1E88
    if (!=) goto 0x0x807d1ea0;
    r3 = *(0xc0 + r3); // lwz @ 0x807D1E94
    /* slwi r0, r5, 2 */ // 0x807D1E98
    /* lwzx r6, r3, r0 */ // 0x807D1E9C
    r3 = r6;
    return;
}