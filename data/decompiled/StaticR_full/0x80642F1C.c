/* Function at 0x80642F1C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80642F1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80642F24
    r5 = *(0 + r3); // lwz @ 0x80642F28
    r4 = *(4 + r5); // lwz @ 0x80642F2C
    r0 = *(0x1c + r4); // lwz @ 0x80642F30
    if (!=) goto 0x0x80642f58;
    r4 = *(4 + r5); // lwz @ 0x80642F3C
    r0 = *(8 + r4); // lwz @ 0x80642F40
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80642F44
    if (!=) goto 0x0x80642f58;
    FUN_8061E01C(); // bl 0x8061E01C
    /* li r4, 3 */ // 0x80642F50
    FUN_808F4CC0(r4); // bl 0x808F4CC0
    r0 = *(0x14 + r1); // lwz @ 0x80642F58
    return;
}