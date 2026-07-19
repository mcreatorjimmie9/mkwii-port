/* Function at 0x8066DB80, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8066DB80(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8066DB8C
    r31 = r3;
    r3 = r3 + 0x30; // 0x8066DB94
    FUN_805B95A4(r3); // bl 0x805B95A4
    r3 = r31 + 0x64; // 0x8066DB9C
    FUN_805B95A4(r3, r3); // bl 0x805B95A4
    r0 = *(0x14 + r1); // lwz @ 0x8066DBA4
    r31 = *(0xc + r1); // lwz @ 0x8066DBA8
    return;
}