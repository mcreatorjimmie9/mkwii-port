/* Function at 0x806A5BD8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806A5BD8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 1 */ // 0x806A5BE0
    r3 = r3 + 0x98; // 0x806A5BE4
    *(0x14 + r1) = r0; // stw @ 0x806A5BE8
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806A5BF0
    r0 = r3 + -2; // 0x806A5BF4
    /* cntlzw r0, r0 */ // 0x806A5BF8
    /* srwi r3, r0, 5 */ // 0x806A5BFC
    r0 = *(0x14 + r1); // lwz @ 0x806A5C00
    return;
}