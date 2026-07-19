/* Function at 0x807F0228, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F0228(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F0234
    r31 = r3;
    r0 = *(0xf2 + r3); // lbz @ 0x807F023C
    if (==) goto 0x0x807f0254;
    FUN_807F7E98(); // bl 0x807F7E98
    /* li r0, 0 */ // 0x807F024C
    *(0xf2 + r31) = r0; // stb @ 0x807F0250
    r0 = *(0x14 + r1); // lwz @ 0x807F0254
    r31 = *(0xc + r1); // lwz @ 0x807F0258
    return;
}