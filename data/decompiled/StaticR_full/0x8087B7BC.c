/* Function at 0x8087B7BC, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8087B7BC(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, -1 */ // 0x8087B7C4
    /* lis r5, 0 */ // 0x8087B7C8
    *(0x14 + r1) = r0; // stw @ 0x8087B7CC
    /* li r0, 0 */ // 0x8087B7D0
    *(0xc + r1) = r31; // stw @ 0x8087B7D4
    r31 = r3;
    *(3 + r3) = r4; // stb @ 0x8087B7DC
    *(0x14 + r3) = r6; // stw @ 0x8087B7E0
    *(0 + r3) = r0; // stb @ 0x8087B7E4
    *(0x18 + r3) = r6; // stw @ 0x8087B7E8
    *(1 + r3) = r0; // stb @ 0x8087B7EC
    *(0x1c + r3) = r6; // stw @ 0x8087B7F0
    *(2 + r3) = r0; // stb @ 0x8087B7F4
    r3 = *(0 + r5); // lwz @ 0x8087B7F8
    FUN_805C14C8(); // bl 0x805C14C8
    /* extsb r0, r3 */ // 0x8087B800
    *(0x14 + r31) = r0; // stw @ 0x8087B804
    r31 = *(0xc + r1); // lwz @ 0x8087B808
    r0 = *(0x14 + r1); // lwz @ 0x8087B80C
    return;
}