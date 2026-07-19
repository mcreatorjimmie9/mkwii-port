/* Function at 0x807DAF1C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DAF1C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807DAF28
    r31 = r3;
    FUN_807D9874(); // bl 0x807D9874
    /* lis r3, 0 */ // 0x807DAF34
    /* li r0, 0 */ // 0x807DAF38
    r3 = r3 + 0; // 0x807DAF3C
    *(0 + r31) = r3; // stw @ 0x807DAF40
    r3 = r31;
    *(0x34 + r31) = r0; // stw @ 0x807DAF48
    r31 = *(0xc + r1); // lwz @ 0x807DAF4C
    r0 = *(0x14 + r1); // lwz @ 0x807DAF50
    return;
}