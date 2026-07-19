/* Function at 0x80708DD4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80708DD4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x80708DDC
    r3 = r3 + 0x98; // 0x80708DE0
    *(0x14 + r1) = r0; // stw @ 0x80708DE4
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x80708DEC
    r0 = r3 + -3; // 0x80708DF0
    /* cntlzw r0, r0 */ // 0x80708DF4
    /* srwi r3, r0, 5 */ // 0x80708DF8
    r0 = *(0x14 + r1); // lwz @ 0x80708DFC
    return;
}