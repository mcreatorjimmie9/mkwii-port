/* Function at 0x807B76E0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807B76E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807B76E8
    *(0x14 + r1) = r0; // stw @ 0x807B76EC
    *(0xc + r1) = r31; // stw @ 0x807B76F0
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807B76F8
    FUN_8061D97C(r5); // bl 0x8061D97C
    FUN_8061E93C(); // bl 0x8061E93C
    r5 = *(4 + r31); // lwz @ 0x807B7704
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807B770C
    FUN_807B5FF0(r4); // bl 0x807B5FF0
    r0 = *(0x14 + r1); // lwz @ 0x807B7714
    r31 = *(0xc + r1); // lwz @ 0x807B7718
    return;
}