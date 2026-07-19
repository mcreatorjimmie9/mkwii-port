/* Function at 0x8062DE88, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8062DE88(int r3, int r4)
{
    r4 = *(0x334 + r3); // lhz @ 0x8062DE88
    /* li r0, -0x802 */ // 0x8062DE8C
    r0 = r4 & r0; // 0x8062DE90
    *(0x334 + r3) = r0; // sth @ 0x8062DE94
    return;
}