/* Function at 0x80620050, size=116 bytes */
/* Stack frame: 0 bytes */

int FUN_80620050(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r5, 0 */ // 0x80620050
    /* li r6, 0 */ // 0x80620054
    r8 = *(0 + r5); // lwz @ 0x80620058
    r7 = *(0xb70 + r8); // lwz @ 0x8062005C
    r5 = r7 + -3; // 0x80620060
    if (>) goto 0x0x80620080;
    /* li r0, 1 */ // 0x8062006C
    r0 = r0 << r5; // slw
    /* andi. r0, r0, 0xc1 */ // 0x80620074
    if (==) goto 0x0x80620080;
    /* li r6, 1 */ // 0x8062007C
    if (==) goto 0x0x80620090;
    r3 = r3 + 3; // 0x80620088
    /* b 0x806200a8 */ // 0x8062008C
    if (!=) goto 0x0x806200a8;
    r0 = *(0xbe4 + r8); // lhz @ 0x80620098
    if (!=) goto 0x0x806200a8;
    r3 = r3 + 6; // 0x806200A4
    /* lis r5, 0 */ // 0x806200A8
    /* slwi r0, r3, 6 */ // 0x806200AC
    r5 = *(0 + r5); // lwz @ 0x806200B0
    /* slwi r3, r4, 5 */ // 0x806200B4
    r0 = r5 + r0; // 0x806200B8
    r3 = r3 + r0; // 0x806200BC
    return;
}