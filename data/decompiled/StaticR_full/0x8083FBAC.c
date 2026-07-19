/* Function at 0x8083FBAC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083FBAC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083FBB8
    r31 = r3;
    /* lis r3, 0 */ // 0x8083FBC0
    r3 = *(0 + r3); // lwz @ 0x8083FBC4
    r4 = *(0x28 + r31); // lhz @ 0x8083FBC8
    r5 = *(0x2a + r31); // lbz @ 0x8083FBCC
    r6 = *(0x1c + r31); // lwz @ 0x8083FBD0
    r7 = *(0x2b + r31); // lbz @ 0x8083FBD4
    FUN_80840F10(); // bl 0x80840F10
    r0 = *(0x1c + r31); // lwz @ 0x8083FBDC
    *(0x18 + r31) = r0; // stw @ 0x8083FBE0
    *(0x1c + r31) = r3; // stw @ 0x8083FBE4
    r31 = *(0xc + r1); // lwz @ 0x8083FBE8
    r0 = *(0x14 + r1); // lwz @ 0x8083FBEC
    return;
}