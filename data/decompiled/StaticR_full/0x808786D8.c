/* Function at 0x808786D8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808786D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x808786E0
    r3 = r3 + 0x98; // 0x808786E4
    *(0x14 + r1) = r0; // stw @ 0x808786E8
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r3 = *(0x38 + r3); // lwz @ 0x808786F0
    r0 = r3 + -1; // 0x808786F4
    /* cntlzw r0, r0 */ // 0x808786F8
    /* srwi r3, r0, 5 */ // 0x808786FC
    r0 = *(0x14 + r1); // lwz @ 0x80878700
    return;
}