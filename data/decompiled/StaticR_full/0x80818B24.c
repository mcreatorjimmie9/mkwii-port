/* Function at 0x80818B24, size=128 bytes */
/* Stack frame: 0 bytes */

int FUN_80818B24(int r3, int r4, int r5, int r7, int r8)
{
    /* slwi r8, r5, 2 */ // 0x80818B24
    r5 = r3 + r8; // 0x80818B28
    r0 = *(0x100 + r5); // lwz @ 0x80818B2C
    if (<) goto 0x0x80818b9c;
    r7 = *(0x10 + r5); // lwz @ 0x80818B38
    *(0xd0 + r5) = r4; // stw @ 0x80818B3C
    r0 = *(0x2bc + r7); // lwz @ 0x80818B40
    if (==) goto 0x0x80818b54;
    if (!=) goto 0x0x80818b68;
    /* lis r5, 0 */ // 0x80818B54
    /* li r0, 2 */ // 0x80818B58
    /* lfs f0, 0(r5) */ // 0x80818B5C
    /* stfs f0, 0x2b8(r7) */ // 0x80818B60
    *(0x2bc + r7) = r0; // stw @ 0x80818B64
    r0 = *(0x2bc + r7); // lwz @ 0x80818B68
    if (!=) goto 0x0x80818b8c;
    /* lfs f0, 0(r4) */ // 0x80818B74
    /* stfs f0, 0x2a8(r7) */ // 0x80818B78
    /* lfs f0, 4(r4) */ // 0x80818B7C
    /* stfs f0, 0x2ac(r7) */ // 0x80818B80
    /* lfs f0, 8(r4) */ // 0x80818B84
    /* stfs f0, 0x2b0(r7) */ // 0x80818B88
    r4 = r3 + r8; // 0x80818B8C
    /* li r3, 1 */ // 0x80818B90
    *(0x130 + r4) = r6; // stw @ 0x80818B94
    return;
    /* li r3, 0 */ // 0x80818B9C
    return;
}