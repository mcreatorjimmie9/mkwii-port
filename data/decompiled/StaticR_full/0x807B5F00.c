/* Function at 0x807B5F00, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807B5F00(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807B5F08
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807B5F10
    /* lis r3, 0 */ // 0x807B5F14
    /* mulli r0, r0, 0xf0 */ // 0x807B5F18
    r3 = *(0 + r3); // lwz @ 0x807B5F1C
    r3 = r3 + r0; // 0x807B5F20
    r0 = *(0x38 + r3); // lwz @ 0x807B5F24
    /* cntlzw r0, r0 */ // 0x807B5F28
    /* srwi r3, r0, 5 */ // 0x807B5F2C
    r0 = *(0x14 + r1); // lwz @ 0x807B5F30
    return;
}