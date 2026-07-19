/* Function at 0x80648FE8, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80648FE8(int r3, int r4, int r5)
{
    r5 = *(0x10 + r3); // lwz @ 0x80648FE8
    /* slwi r4, r4, 2 */ // 0x80648FEC
    r3 = *(0x64 + r3); // lwz @ 0x80648FF0
    r0 = *(4 + r5); // lwz @ 0x80648FF4
    /* lwzx r4, r3, r4 */ // 0x80648FF8
    if (!=) goto 0x0x8064900c;
    r3 = *(0 + r5); // lwz @ 0x80649004
    /* b 0x80649010 */ // 0x80649008
    /* li r3, 0 */ // 0x8064900C
    *(0x168 + r3) = r4; // stw @ 0x80649010
    return;
}