/* Function at 0x807E42B4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E42B4(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807E42BC
    *(0x14 + r1) = r0; // stw @ 0x807E42C0
    r5 = r5 + 0; // 0x807E42C4
    r5 = r5 + 0xa8; // 0x807E42C8
    *(0xc + r1) = r31; // stw @ 0x807E42CC
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807E42D8
    /* li r0, 0 */ // 0x807E42DC
    r3 = r3 + 0; // 0x807E42E0
    *(0 + r31) = r3; // stw @ 0x807E42E4
    r3 = r31;
    *(0xe4 + r31) = r0; // stw @ 0x807E42EC
    r31 = *(0xc + r1); // lwz @ 0x807E42F0
    r0 = *(0x14 + r1); // lwz @ 0x807E42F4
    return;
}