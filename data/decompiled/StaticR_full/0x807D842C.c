/* Function at 0x807D842C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D842C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D8434
    r3 = *(0x1f0 + r3); // lwz @ 0x807D8438
    r3 = *(0 + r3); // lwz @ 0x807D843C
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D8444
    if (!=) goto 0x0x807d8458;
    /* li r0, 0 */ // 0x807D8450
    *(0x2bc + r3) = r0; // stw @ 0x807D8454
    r0 = *(0x14 + r1); // lwz @ 0x807D8458
    return;
}