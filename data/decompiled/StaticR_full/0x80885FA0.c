/* Function at 0x80885FA0, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80885FA0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80885FAC
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = r31 + 0x58; // 0x80885FB8
    r31 = *(0xc + r1); // lwz @ 0x80885FBC
    r0 = *(0x14 + r1); // lwz @ 0x80885FC0
    return;
}