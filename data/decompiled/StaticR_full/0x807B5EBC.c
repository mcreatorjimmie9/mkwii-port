/* Function at 0x807B5EBC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807B5EBC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807B5EC4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807B5ECC
    /* lis r3, 0 */ // 0x807B5ED0
    /* mulli r0, r0, 0xf0 */ // 0x807B5ED4
    r3 = *(0 + r3); // lwz @ 0x807B5ED8
    r3 = r3 + r0; // 0x807B5EDC
    r3 = *(0x38 + r3); // lwz @ 0x807B5EE0
    r0 = r3 + -1; // 0x807B5EE4
    /* cntlzw r0, r0 */ // 0x807B5EE8
    /* srwi r3, r0, 5 */ // 0x807B5EEC
    r0 = *(0x14 + r1); // lwz @ 0x807B5EF0
    return;
}