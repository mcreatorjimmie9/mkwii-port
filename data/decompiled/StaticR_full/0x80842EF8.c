/* Function at 0x80842EF8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80842EF8(int r3, int r4, int r5)
{
    r4 = *(4 + r3); // lwz @ 0x80842EF8
    /* li r5, 0x200 */ // 0x80842EFC
    /* li r0, 0 */ // 0x80842F00
    *(0 + r3) = r5; // stw @ 0x80842F04
    *(0xc + r3) = r4; // stw @ 0x80842F08
    *(4 + r3) = r0; // stw @ 0x80842F0C
    return;
}