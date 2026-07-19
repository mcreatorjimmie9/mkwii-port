/* Function at 0x808F8DD8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F8DD8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F8DE4
    r31 = r3;
    FUN_805E34E4(); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x808F8DF0
    /* li r0, 0 */ // 0x808F8DF4
    r3 = r3 + 0; // 0x808F8DF8
    *(0 + r31) = r3; // stw @ 0x808F8DFC
    r3 = r31;
    *(0x28 + r31) = r0; // stb @ 0x808F8E04
    r31 = *(0xc + r1); // lwz @ 0x808F8E08
    r0 = *(0x14 + r1); // lwz @ 0x808F8E0C
    return;
}