/* Function at 0x8077DDEC, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8077DDEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8077DDF8
    r31 = r3;
    FUN_80753F7C(); // bl 0x80753F7C
    r6 = *(0x20 + r31); // lwz @ 0x8077DE04
    /* li r4, 0 */ // 0x8077DE0C
    r3 = *(0x18 + r6); // lwz @ 0x8077DE10
    r0 = *(0x1c + r6); // lwz @ 0x8077DE14
    *(0xc + r1) = r0; // stw @ 0x8077DE18
    *(8 + r1) = r3; // stw @ 0x8077DE1C
    r0 = *(0x20 + r6); // lwz @ 0x8077DE20
    *(0x10 + r1) = r0; // stw @ 0x8077DE24
    /* lfs f0, 0x174(r31) */ // 0x8077DE28
    /* stfs f0, 0xc(r1) */ // 0x8077DE2C
    r3 = *(0xe4 + r31); // lwz @ 0x8077DE30
    FUN_80774234(); // bl 0x80774234
    r0 = *(0x24 + r1); // lwz @ 0x8077DE38
    r31 = *(0x1c + r1); // lwz @ 0x8077DE3C
    return;
}