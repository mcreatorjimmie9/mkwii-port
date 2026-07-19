/* Function at 0x807B30C8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B30C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807B30D0
    /* li r5, -1 */ // 0x807B30D4
    *(0x14 + r1) = r0; // stw @ 0x807B30D8
    /* li r6, 7 */ // 0x807B30DC
    *(0xc + r1) = r31; // stw @ 0x807B30E0
    r31 = r3;
    FUN_807B0D98(r5, r6); // bl 0x807B0D98
    /* li r0, 0 */ // 0x807B30EC
    *(0x1e4 + r31) = r0; // stw @ 0x807B30F0
    *(0x1e8 + r31) = r0; // stw @ 0x807B30F4
    *(0x1ec + r31) = r0; // stw @ 0x807B30F8
    *(0x1f0 + r31) = r0; // stw @ 0x807B30FC
    r31 = *(0xc + r1); // lwz @ 0x807B3100
    r0 = *(0x14 + r1); // lwz @ 0x807B3104
    return;
}