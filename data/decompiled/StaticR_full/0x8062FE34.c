/* Function at 0x8062FE34, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8062FE34(int r3, int r4)
{
    r4 = *(0x334 + r3); // lhz @ 0x8062FE34
    /* li r0, 0x3c */ // 0x8062FE38
    *(0x33c + r3) = r0; // sth @ 0x8062FE3C
    r0 = r4 | 0x200; // 0x8062FE40
    *(0x334 + r3) = r0; // sth @ 0x8062FE44
    return;
}