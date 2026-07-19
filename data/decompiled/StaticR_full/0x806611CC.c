/* Function at 0x806611CC, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806611CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 1 */ // 0x806611D4
    r3 = r3 + 0x98; // 0x806611D8
    *(0x14 + r1) = r0; // stw @ 0x806611DC
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806611E4
    r0 = r3 + -5; // 0x806611E8
    /* cntlzw r0, r0 */ // 0x806611EC
    /* srwi r3, r0, 5 */ // 0x806611F0
    r0 = *(0x14 + r1); // lwz @ 0x806611F4
    return;
}