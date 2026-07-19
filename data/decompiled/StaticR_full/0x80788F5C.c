/* Function at 0x80788F5C, size=64 bytes */
/* Stack frame: 0 bytes */

int FUN_80788F5C(int r3, int r4, int r5, int r6)
{
    r0 = *(0xb8 + r3); // lwz @ 0x80788F5C
    /* beqlr  */ // 0x80788F64
    /* mulli r0, r4, 0x1c */ // 0x80788F68
    r6 = r3 + r0; // 0x80788F6C
    /* lfs f2, 0x24(r6) */ // 0x80788F70
    /* fcmpu cr0, f2, f1 */ // 0x80788F74
    if (!=) goto 0x0x80788f8c;
    /* lis r4, 0 */ // 0x80788F7C
    /* lfs f0, 0(r4) */ // 0x80788F80
    /* fadds f0, f0, f2 */ // 0x80788F84
    /* stfs f0, 0x24(r6) */ // 0x80788F88
    r3 = r3 + r0; // 0x80788F8C
    r4 = r5;
    r3 = r3 + 0x10; // 0x80788F94
    /* b 0x805e3430 */ // 0x80788F98
}