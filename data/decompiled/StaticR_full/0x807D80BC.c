/* Function at 0x807D80BC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D80BC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D80C4
    r3 = *(0x1f0 + r3); // lwz @ 0x807D80C8
    r3 = *(0 + r3); // lwz @ 0x807D80CC
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D80D4
    if (!=) goto 0x0x807d80e8;
    /* li r0, 0 */ // 0x807D80E0
    *(0x2bc + r3) = r0; // stw @ 0x807D80E4
    r0 = *(0x14 + r1); // lwz @ 0x807D80E8
    return;
}