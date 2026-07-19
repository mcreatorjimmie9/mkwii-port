/* Function at 0x806C1898, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806C1898(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x806C18A4
    *(0xc + r1) = r31; // stw @ 0x806C18A8
    r31 = r3;
    *(0x248c + r3) = r0; // stb @ 0x806C18B0
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    /* stfs f1, 0x2490(r31) */ // 0x806C18BC
    r31 = *(0xc + r1); // lwz @ 0x806C18C0
    r0 = *(0x14 + r1); // lwz @ 0x806C18C4
    return;
}