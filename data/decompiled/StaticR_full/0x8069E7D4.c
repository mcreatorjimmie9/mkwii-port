/* Function at 0x8069E7D4, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8069E7D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x8069E7DC
    r3 = r3 + 0x98; // 0x8069E7E0
    *(0x14 + r1) = r0; // stw @ 0x8069E7E4
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x8069E7EC
    /* cntlzw r0, r0 */ // 0x8069E7F0
    /* srwi r3, r0, 5 */ // 0x8069E7F4
    r0 = *(0x14 + r1); // lwz @ 0x8069E7F8
    return;
}