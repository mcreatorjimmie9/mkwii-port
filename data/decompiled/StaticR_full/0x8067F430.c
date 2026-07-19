/* Function at 0x8067F430, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_8067F430(int r3, int r4, int r5, int r6, int r7)
{
    /* slwi r7, r4, 4 */ // 0x8067F430
    /* li r5, 0 */ // 0x8067F434
    r4 = r3 + r7; // 0x8067F438
    /* li r6, 0 */ // 0x8067F43C
    r0 = *(0xc + r4); // lwz @ 0x8067F440
    if (!=) goto 0x0x8067f45c;
    r0 = *(4 + r4); // lwz @ 0x8067F44C
    if (==) goto 0x0x8067f45c;
    /* li r6, 1 */ // 0x8067F458
    if (==) goto 0x0x8067f47c;
    r4 = r3 + r7; // 0x8067F464
    r3 = *(4 + r4); // lwz @ 0x8067F468
    r0 = *(8 + r4); // lwz @ 0x8067F46C
    if (!=) goto 0x0x8067f47c;
    /* li r5, 1 */ // 0x8067F478
    r3 = r5;
    return;
}