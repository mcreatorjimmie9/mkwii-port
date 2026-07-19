/* Function at 0x805B0B58, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_805B0B58(int r3, int r4)
{
    r0 = *(4 + r3); // lwz @ 0x805B0B58
    *(0xc0 + r3) = r4; // sth @ 0x805B0B5C
    /* beqlr  */ // 0x805B0B64
    r3 = *(4 + r3); // lwz @ 0x805B0B68
    /* clrlwi r4, r4, 0x10 */ // 0x805B0B6C
    /* neg r0, r4 */ // 0x805B0B70
    r12 = *(0 + r3); // lwz @ 0x805B0B74
    r0 = r0 | r4; // 0x805B0B78
    /* srwi r4, r0, 0x1f */ // 0x805B0B7C
    r12 = *(0x38 + r12); // lwz @ 0x805B0B80
    /* mtctr r12 */ // 0x805B0B84
    /* bctr  */ // 0x805B0B88
}