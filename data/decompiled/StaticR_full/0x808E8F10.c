/* Function at 0x808E8F10, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808E8F10(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808E8F28
    r29 = r3;
    /* li r3, 0x7c */ // 0x808E8F30
    r31 = *(0x240 + r5); // lwz @ 0x808E8F34
    FUN_808E74E4(r3); // bl 0x808E74E4
    *(0x83c + r3) = r31; // stw @ 0x808E8F3C
    r3 = r29;
    r5 = r30;
    /* li r4, 0x7c */ // 0x808E8F48
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808E8F50
    r31 = *(0x1c + r1); // lwz @ 0x808E8F54
    r30 = *(0x18 + r1); // lwz @ 0x808E8F58
    r29 = *(0x14 + r1); // lwz @ 0x808E8F5C
    return;
}