/* Function at 0x807D922C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D922C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D9238
    r31 = r3;
    FUN_807D6404(); // bl 0x807D6404
    /* lis r4, 0 */ // 0x807D9244
    r3 = r31;
    r4 = r4 + 0; // 0x807D924C
    *(0x34 + r31) = r4; // stw @ 0x807D9250
    r31 = *(0xc + r1); // lwz @ 0x807D9254
    r0 = *(0x14 + r1); // lwz @ 0x807D9258
    return;
}