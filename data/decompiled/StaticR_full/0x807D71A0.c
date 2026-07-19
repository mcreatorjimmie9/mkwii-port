/* Function at 0x807D71A0, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D71A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807D71AC
    r31 = r3;
    r4 = *(0x1f0 + r3); // lwz @ 0x807D71B4
    r3 = *(0 + r4); // lwz @ 0x807D71B8
    FUN_8061DFF8(); // bl 0x8061DFF8
    r0 = *(0x3c + r3); // lwz @ 0x807D71C0
    /* lis r4, 0 */ // 0x807D71C4
    *(0xc + r1) = r0; // stw @ 0x807D71C8
    r5 = *(0x38 + r3); // lwz @ 0x807D71CC
    /* lfs f1, 0xc(r1) */ // 0x807D71D0
    /* lfs f0, 0(r4) */ // 0x807D71D4
    r0 = *(0x40 + r3); // lwz @ 0x807D71D8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D71DC
    *(8 + r1) = r5; // stw @ 0x807D71E0
    *(0x10 + r1) = r0; // stw @ 0x807D71E4
    if (>=) goto 0x0x807d720c;
    r3 = *(0x1f0 + r31); // lwz @ 0x807D71EC
    r3 = *(0 + r3); // lwz @ 0x807D71F0
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D71F8
    if (!=) goto 0x0x807d720c;
    /* li r0, 0 */ // 0x807D7204
    *(0x2bc + r3) = r0; // stw @ 0x807D7208
    r0 = *(0x24 + r1); // lwz @ 0x807D720C
    r31 = *(0x1c + r1); // lwz @ 0x807D7210
    return;
}