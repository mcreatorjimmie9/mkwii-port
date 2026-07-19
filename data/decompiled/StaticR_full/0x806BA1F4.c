/* Function at 0x806BA1F4, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806BA1F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806BA200
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806BA20C
    r3 = r31;
    r4 = r4 + 0; // 0x806BA214
    *(0 + r31) = r4; // stw @ 0x806BA218
    r31 = *(0xc + r1); // lwz @ 0x806BA21C
    r0 = *(0x14 + r1); // lwz @ 0x806BA220
    return;
}