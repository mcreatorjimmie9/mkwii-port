/* Function at 0x80648900, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_80648900(int r3, int r4, int r5)
{
    r4 = *(0x1c + r3); // lwz @ 0x80648900
    /* li r5, 0 */ // 0x80648904
    if (!=) goto 0x0x80648920;
    r0 = *(0x28 + r3); // lwz @ 0x80648910
    if (!=) goto 0x0x80648920;
    /* li r5, 1 */ // 0x8064891C
    if (==) goto 0x0x8064894c;
    r0 = *(0x28 + r3); // lwz @ 0x80648928
    if (!=) goto 0x0x8064894c;
    /* lis r4, 0 */ // 0x80648934
    /* lfs f1, 0x20(r3) */ // 0x80648938
    /* lfs f0, 0(r4) */ // 0x8064893C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80648940
    if (>=) goto 0x0x8064894c;
    /* li r5, 1 */ // 0x80648948
    r3 = r5;
    return;
}