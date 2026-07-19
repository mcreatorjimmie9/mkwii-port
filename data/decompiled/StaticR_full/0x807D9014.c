/* Function at 0x807D9014, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D9014(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D9020
    r31 = r3;
    FUN_807D6404(); // bl 0x807D6404
    /* lis r4, 0 */ // 0x807D902C
    r3 = r31;
    r4 = r4 + 0; // 0x807D9034
    *(0x34 + r31) = r4; // stw @ 0x807D9038
    r31 = *(0xc + r1); // lwz @ 0x807D903C
    r0 = *(0x14 + r1); // lwz @ 0x807D9040
    return;
}