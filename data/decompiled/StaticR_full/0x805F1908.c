/* Function at 0x805F1908, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F1908(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805F1910
    *(0x14 + r1) = r0; // stw @ 0x805F1914
    r4 = r4 + 0; // 0x805F1918
    *(0xc + r1) = r31; // stw @ 0x805F191C
    r31 = r3;
    r3 = r4 + 0x68; // 0x805F1924
    FUN_8061F57C(r4, r3); // bl 0x8061F57C
    r4 = r3;
    if (==) goto 0x0x805f194c;
    r3 = *(0x20 + r31); // lwz @ 0x805F1938
    r12 = *(0 + r3); // lwz @ 0x805F193C
    r12 = *(8 + r12); // lwz @ 0x805F1940
    /* mtctr r12 */ // 0x805F1944
    /* bctrl  */ // 0x805F1948
    r0 = *(0x14 + r1); // lwz @ 0x805F194C
    r31 = *(0xc + r1); // lwz @ 0x805F1950
    return;
}