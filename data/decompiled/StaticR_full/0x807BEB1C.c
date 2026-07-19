/* Function at 0x807BEB1C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BEB1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807BEB24
    /* lis r5, 0 */ // 0x807BEB28
    *(0x14 + r1) = r0; // stw @ 0x807BEB2C
    *(0xc + r1) = r31; // stw @ 0x807BEB30
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807BEB38
    r4 = *(0 + r4); // lha @ 0x807BEB3C
    FUN_807C03BC(); // bl 0x807C03BC
    *(0x1a8 + r31) = r3; // stw @ 0x807BEB44
    r31 = *(0xc + r1); // lwz @ 0x807BEB48
    r0 = *(0x14 + r1); // lwz @ 0x807BEB4C
    return;
}