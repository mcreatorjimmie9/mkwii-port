/* Function at 0x807D7E64, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D7E64(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D7E6C
    r3 = *(0x1f0 + r3); // lwz @ 0x807D7E70
    r3 = *(0 + r3); // lwz @ 0x807D7E74
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D7E7C
    if (!=) goto 0x0x807d7e90;
    /* li r0, 0 */ // 0x807D7E88
    *(0x2bc + r3) = r0; // stw @ 0x807D7E8C
    r0 = *(0x14 + r1); // lwz @ 0x807D7E90
    return;
}