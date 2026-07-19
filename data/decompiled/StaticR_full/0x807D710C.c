/* Function at 0x807D710C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D710C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D7114
    r3 = *(0x1f0 + r3); // lwz @ 0x807D7118
    r3 = *(0 + r3); // lwz @ 0x807D711C
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D7124
    if (!=) goto 0x0x807d7138;
    /* li r0, 0 */ // 0x807D7130
    *(0x2bc + r3) = r0; // stw @ 0x807D7134
    r0 = *(0x14 + r1); // lwz @ 0x807D7138
    return;
}