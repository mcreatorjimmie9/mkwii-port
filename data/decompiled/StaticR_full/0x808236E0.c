/* Function at 0x808236E0, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808236E0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808236EC
    r31 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060CC14(); // bl 0x8060CC14
    /* li r0, 1 */ // 0x808236FC
    *(0x238 + r31) = r0; // stb @ 0x80823700
    r31 = *(0xc + r1); // lwz @ 0x80823704
    r0 = *(0x14 + r1); // lwz @ 0x80823708
    return;
}