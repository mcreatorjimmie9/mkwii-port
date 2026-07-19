/* Function at 0x80704C54, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80704C54(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x80704C64
    r0 = r4;
    *(0xc + r1) = r31; // stw @ 0x80704C6C
    r31 = r5;
    r6 = *(0x1c + r5); // lwz @ 0x80704C74
    *(0 + r6) = r4; // stw @ 0x80704C78
    if (<=) goto 0x0x80704c94;
    r4 = *(0x10 + r5); // lwz @ 0x80704C80
    r3 = r31;
    /* li r5, 8 */ // 0x80704C88
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
    /* b 0x80704cac */ // 0x80704C90
    r3 = *(0x18 + r5); // lwz @ 0x80704C94
    r4 = r7;
    r5 = r0;
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r0, 1 */ // 0x80704CA4
    *(4 + r31) = r0; // stw @ 0x80704CA8
    r0 = *(0x14 + r1); // lwz @ 0x80704CAC
    r31 = *(0xc + r1); // lwz @ 0x80704CB0
}