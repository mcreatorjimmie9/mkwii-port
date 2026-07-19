/* Function at 0x80648EAC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80648EAC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80648EB8
    r31 = r3;
    FUN_805EBBF4(); // bl 0x805EBBF4
    r3 = r31;
    FUN_805EEFE4(r3); // bl 0x805EEFE4
    r4 = r31;
    FUN_805F32F4(r3, r4); // bl 0x805F32F4
    r3 = r31;
    FUN_80648F00(r3, r4, r3); // bl 0x80648F00
    r0 = *(0x14 + r1); // lwz @ 0x80648EDC
    r31 = *(0xc + r1); // lwz @ 0x80648EE0
    return;
}