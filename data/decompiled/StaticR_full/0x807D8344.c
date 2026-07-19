/* Function at 0x807D8344, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D8344(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807D834C
    r3 = *(0x1f0 + r3); // lwz @ 0x807D8350
    r3 = *(0 + r3); // lwz @ 0x807D8354
    FUN_8061E2BC(); // bl 0x8061E2BC
    r0 = *(0x2bc + r3); // lwz @ 0x807D835C
    if (!=) goto 0x0x807d8370;
    /* li r0, 0 */ // 0x807D8368
    *(0x2bc + r3) = r0; // stw @ 0x807D836C
    r0 = *(0x14 + r1); // lwz @ 0x807D8370
    return;
}