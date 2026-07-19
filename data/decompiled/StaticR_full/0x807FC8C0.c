/* Function at 0x807FC8C0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FC8C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FC8CC
    r31 = r3;
    FUN_8080F158(); // bl 0x8080F158
    /* lis r4, 0 */ // 0x807FC8D8
    r3 = r31;
    r4 = r4 + 0; // 0x807FC8E0
    *(0 + r31) = r4; // stw @ 0x807FC8E4
    r31 = *(0xc + r1); // lwz @ 0x807FC8E8
    r0 = *(0x14 + r1); // lwz @ 0x807FC8EC
    return;
}