/* Function at 0x807B5FAC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807B5FAC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807B5FB4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807B5FBC
    /* lis r3, 0 */ // 0x807B5FC0
    /* mulli r0, r0, 0xf0 */ // 0x807B5FC4
    r3 = *(0 + r3); // lwz @ 0x807B5FC8
    r3 = r3 + r0; // 0x807B5FCC
    r3 = *(0x38 + r3); // lwz @ 0x807B5FD0
    r0 = r3 + -3; // 0x807B5FD4
    /* cntlzw r0, r0 */ // 0x807B5FD8
    /* srwi r3, r0, 5 */ // 0x807B5FDC
    r0 = *(0x14 + r1); // lwz @ 0x807B5FE0
    return;
}