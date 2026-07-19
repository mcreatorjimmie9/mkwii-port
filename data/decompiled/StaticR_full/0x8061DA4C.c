/* Function at 0x8061DA4C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061DA4C(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8061DA54
    *(0x14 + r1) = r0; // stw @ 0x8061DA58
    *(0xc + r1) = r31; // stw @ 0x8061DA5C
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x8061DA64
    FUN_8061D97C(r5); // bl 0x8061D97C
    r0 = *(0 + r3); // lwz @ 0x8061DA6C
    *(0 + r31) = r0; // stw @ 0x8061DA70
    r31 = *(0xc + r1); // lwz @ 0x8061DA74
    r0 = *(0x14 + r1); // lwz @ 0x8061DA78
    return;
}