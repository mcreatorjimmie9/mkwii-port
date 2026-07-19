/* Function at 0x807D83F0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D83F0(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D83F8
    r3 = *(0x1f0 + r3); // lwz @ 0x807D83FC
    r3 = *(0 + r3); // lwz @ 0x807D8400
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D8408
    if (!=) goto 0x0x807d841c;
    /* li r0, 0 */ // 0x807D8414
    *(0x2bc + r3) = r0; // stw @ 0x807D8418
    r0 = *(0x14 + r1); // lwz @ 0x807D841C
    return;
}