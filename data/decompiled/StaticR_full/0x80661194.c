/* Function at 0x80661194, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80661194(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 1 */ // 0x8066119C
    r3 = r3 + 0x98; // 0x806611A0
    *(0x14 + r1) = r0; // stw @ 0x806611A4
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806611AC
    r0 = r3 + -2; // 0x806611B0
    /* cntlzw r0, r0 */ // 0x806611B4
    /* srwi r3, r0, 5 */ // 0x806611B8
    r0 = *(0x14 + r1); // lwz @ 0x806611BC
    return;
}