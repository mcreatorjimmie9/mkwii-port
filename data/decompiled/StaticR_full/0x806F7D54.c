/* Function at 0x806F7D54, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806F7D54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806F7D64
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806F7D6C
    if (!=) goto 0x0x806f7ddc;
    r4 = *(0x7578 + r3); // lwz @ 0x806F7D78
    r0 = r4 + -0xd; // 0x806F7D7C
    if (<=) goto 0x0x806f7d9c;
    r0 = r4 + -8; // 0x806F7D88
    if (<=) goto 0x0x806f7dac;
    if (!=) goto 0x0x806f7dd4;
    /* li r0, 1 */ // 0x806F7D9C
    *(0x28 + r3) = r0; // stb @ 0x806F7DA0
    /* li r3, 1 */ // 0x806F7DA4
    /* b 0x806f7de0 */ // 0x806F7DA8
    /* li r31, 0 */ // 0x806F7DAC
    *(0x14 + r3) = r31; // stw @ 0x806F7DB0
    /* lis r3, 0 */ // 0x806F7DB4
    r3 = *(0 + r3); // lwz @ 0x806F7DB8
    FUN_80703B58(r3); // bl 0x80703B58
    *(0x28 + r30) = r31; // stb @ 0x806F7DC0
    /* li r3, 1 */ // 0x806F7DC4
    *(0x7578 + r30) = r31; // stw @ 0x806F7DC8
    *(0x10 + r30) = r31; // stw @ 0x806F7DCC
    /* b 0x806f7de0 */ // 0x806F7DD0
    /* li r3, 0 */ // 0x806F7DD4
    /* b 0x806f7de0 */ // 0x806F7DD8
    /* li r3, 0 */ // 0x806F7DDC
    r0 = *(0x14 + r1); // lwz @ 0x806F7DE0
    r31 = *(0xc + r1); // lwz @ 0x806F7DE4
    r30 = *(8 + r1); // lwz @ 0x806F7DE8
    return;
}