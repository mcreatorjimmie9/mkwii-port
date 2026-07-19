/* Function at 0x80829918, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80829918(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80829924
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x8082992C
    if (==) goto 0x0x80829954;
    /* lis r3, 0 */ // 0x80829938
    r4 = r31 + 0xb0; // 0x8082993C
    r3 = *(0 + r3); // lwz @ 0x80829940
    FUN_808161E8(r3, r4); // bl 0x808161E8
    r0 = *(0x7c + r31); // lwz @ 0x80829948
    r0 = r0 | 4; // 0x8082994C
    *(0x7c + r31) = r0; // stw @ 0x80829950
    r0 = *(0x74 + r31); // lwz @ 0x80829954
    r3 = r31;
    r0 = r0 | 4; // 0x8082995C
    *(0x74 + r31) = r0; // stw @ 0x80829960
    r12 = *(0 + r31); // lwz @ 0x80829964
    r12 = *(0x2c + r12); // lwz @ 0x80829968
    /* mtctr r12 */ // 0x8082996C
    /* bctrl  */ // 0x80829970
    r0 = *(0x14 + r1); // lwz @ 0x80829974
    r31 = *(0xc + r1); // lwz @ 0x80829978
    return;
}