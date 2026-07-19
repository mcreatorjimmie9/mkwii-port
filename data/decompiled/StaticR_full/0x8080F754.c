/* Function at 0x8080F754, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8080F754(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080F764
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8080F76C
    r30 = r5;
    if (!=) goto 0x0x8080f780;
    r3 = r30;
    /* b 0x8080f838 */ // 0x8080F77C
    if (==) goto 0x0x8080f794;
    if (==) goto 0x0x8080f820;
    /* b 0x8080f834 */ // 0x8080F790
    r12 = *(0 + r3); // lwz @ 0x8080F794
    r5 = r7;
    r12 = *(0x10c + r12); // lwz @ 0x8080F79C
    /* mtctr r12 */ // 0x8080F7A0
    /* bctrl  */ // 0x8080F7A4
    r12 = *(0 + r31); // lwz @ 0x8080F7A8
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x8080F7B0
    /* mtctr r12 */ // 0x8080F7B4
    /* bctrl  */ // 0x8080F7B8
    /* lis r4, 0 */ // 0x8080F7BC
    /* lis r5, 0 */ // 0x8080F7C0
    r6 = *(0 + r4); // lwz @ 0x8080F7C4
    /* clrlwi r4, r3, 0x10 */ // 0x8080F7C8
    r3 = *(0 + r5); // lwz @ 0x8080F7CC
    r0 = *(0xb70 + r6); // lwz @ 0x8080F7D0
    if (!=) goto 0x0x8080f834;
    r0 = *(0xb9e + r6); // lhz @ 0x8080F7DC
    if (!=) goto 0x0x8080f834;
    r31 = *(0x10 + r3); // lwz @ 0x8080F7EC
    if (<) goto 0x0x8080f810;
    r12 = *(0 + r31); // lwz @ 0x8080F7F4
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x8080F7FC
    /* mtctr r12 */ // 0x8080F800
    /* bctrl  */ // 0x8080F804
    if (==) goto 0x0x8080f834;
    r3 = *(8 + r31); // lwz @ 0x8080F810
    r0 = r3 + 1; // 0x8080F814
    *(8 + r31) = r0; // stw @ 0x8080F818
    /* b 0x8080f834 */ // 0x8080F81C
    r12 = *(0 + r3); // lwz @ 0x8080F820
    r5 = r7;
    r12 = *(0x110 + r12); // lwz @ 0x8080F828
    /* mtctr r12 */ // 0x8080F82C
    /* bctrl  */ // 0x8080F830
    r3 = r30;
    r0 = *(0x14 + r1); // lwz @ 0x8080F838
    r31 = *(0xc + r1); // lwz @ 0x8080F83C
    r30 = *(8 + r1); // lwz @ 0x8080F840
    return;
}