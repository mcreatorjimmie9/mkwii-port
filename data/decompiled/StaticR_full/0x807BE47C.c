/* Function at 0x807BE47C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BE47C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BE488
    r31 = r3;
    FUN_807BD2B0(); // bl 0x807BD2B0
    /* lis r3, 0 */ // 0x807BE494
    /* li r0, 0 */ // 0x807BE498
    r3 = r3 + 0; // 0x807BE49C
    *(0x34 + r31) = r3; // stw @ 0x807BE4A0
    r3 = r31;
    *(0x1a8 + r31) = r0; // stw @ 0x807BE4A8
    *(0x1ac + r31) = r0; // stb @ 0x807BE4AC
    r31 = *(0xc + r1); // lwz @ 0x807BE4B0
    r0 = *(0x14 + r1); // lwz @ 0x807BE4B4
    return;
}