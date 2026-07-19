/* Function at 0x8087E0F8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8087E0F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x8087E100
    *(0x14 + r1) = r0; // stw @ 0x8087E104
    /* li r0, 1 */ // 0x8087E108
    *(0x80 + r3) = r0; // stb @ 0x8087E10C
    r3 = r3 + 0x98; // 0x8087E110
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8087E118
    /* li r4, 0 */ // 0x8087E11C
    /* lfs f1, 0(r5) */ // 0x8087E120
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8087E128
    return;
}