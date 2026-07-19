/* Function at 0x805C41D0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_805C41D0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x805C41D8
    *(0x14 + r1) = r0; // stw @ 0x805C41DC
    r0 = *(0x38 + r3); // lwz @ 0x805C41E0
    r4 = *(8 + r3); // lbz @ 0x805C41E4
    r0 = r0 | 0x20; // 0x805C41E8
    *(0x38 + r3) = r0; // stw @ 0x805C41EC
    r3 = *(0 + r5); // lwz @ 0x805C41F0
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* li r4, 1 */ // 0x805C41FC
    FUN_8060EBE0(r4); // bl 0x8060EBE0
    r0 = *(0x14 + r1); // lwz @ 0x805C4204
    return;
}