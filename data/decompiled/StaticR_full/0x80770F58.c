/* Function at 0x80770F58, size=72 bytes */
/* Stack frame: 0 bytes */

void FUN_80770F58(int r3, int r4, int r5, int r6, int r7)
{
    r7 = *(0xc + r3); // lha @ 0x80770F58
    r0 = *(0x10 + r3); // lbz @ 0x80770F5C
    r6 = *(8 + r3); // lwz @ 0x80770F60
    /* subf r0, r0, r7 */ // 0x80770F64
    if (<) goto 0x0x80770f84;
    r0 = *(0xe + r3); // lha @ 0x80770F70
    /* subf r3, r4, r7 */ // 0x80770F74
    /* subf r0, r3, r0 */ // 0x80770F78
    /* extsh r0, r0 */ // 0x80770F7C
    /* b 0x80770f94 */ // 0x80770F80
    r0 = *(0x17 + r3); // lbz @ 0x80770F84
    r0 = r4 * r0; // 0x80770F88
    r0 = r5 + r0; // 0x80770F8C
    /* extsh r0, r0 */ // 0x80770F90
    /* slwi r0, r0, 2 */ // 0x80770F94
    /* lwzx r3, r6, r0 */ // 0x80770F98
    return;
}