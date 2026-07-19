/* Function at 0x807D7148, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D7148(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D7154
    r31 = r4;
    r3 = *(0x1f0 + r3); // lwz @ 0x807D715C
    r3 = *(0 + r3); // lwz @ 0x807D7160
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D7168
    if (!=) goto 0x0x807d718c;
    /* lfs f0, 0(r31) */ // 0x807D7174
    /* stfs f0, 0x2a8(r3) */ // 0x807D7178
    /* lfs f0, 4(r31) */ // 0x807D717C
    /* stfs f0, 0x2ac(r3) */ // 0x807D7180
    /* lfs f0, 8(r31) */ // 0x807D7184
    /* stfs f0, 0x2b0(r3) */ // 0x807D7188
    r0 = *(0x14 + r1); // lwz @ 0x807D718C
    r31 = *(0xc + r1); // lwz @ 0x807D7190
    return;
}