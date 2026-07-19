/* Function at 0x805C3144, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805C3144(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805C314C
    *(0x14 + r1) = r0; // stw @ 0x805C3150
    /* li r0, 1 */ // 0x805C3154
    *(0xc + r1) = r31; // stw @ 0x805C3158
    r31 = r3;
    r5 = *(0x14 + r3); // lwz @ 0x805C3160
    *(0x41 + r5) = r0; // stb @ 0x805C3164
    r3 = *(0 + r4); // lwz @ 0x805C3168
    FUN_805C14D8(); // bl 0x805C14D8
    /* li r0, 2 */ // 0x805C3170
    *(0x28 + r31) = r0; // stw @ 0x805C3174
    r31 = *(0xc + r1); // lwz @ 0x805C3178
    r0 = *(0x14 + r1); // lwz @ 0x805C317C
    return;
}