/* Function at 0x80915E1C, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80915E1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80915E30
    r30 = r5;
    r0 = *(0x174 + r3); // lwz @ 0x80915E38
    if (!=) goto 0x0x80915e4c;
    /* li r3, 0 */ // 0x80915E44
    /* b 0x80915f2c */ // 0x80915E48
    if (==) goto 0x0x80915e5c;
    if (!=) goto 0x0x80915f28;
    if (==) goto 0x0x80915e88;
    r3 = r4;
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lfs f0, 0(r3) */ // 0x80915E6C
    /* stfs f0, 0x158(r31) */ // 0x80915E70
    /* lfs f0, 4(r3) */ // 0x80915E74
    /* stfs f0, 0x15c(r31) */ // 0x80915E78
    /* lfs f0, 8(r3) */ // 0x80915E7C
    /* stfs f0, 0x160(r31) */ // 0x80915E80
    /* b 0x80915ea0 */ // 0x80915E84
    /* lfs f2, 0x30(r3) */ // 0x80915E88
    /* lfs f1, 0x34(r3) */ // 0x80915E8C
    /* lfs f0, 0x38(r3) */ // 0x80915E90
    /* stfs f2, 0x158(r3) */ // 0x80915E94
    /* stfs f1, 0x15c(r3) */ // 0x80915E98
    /* stfs f0, 0x160(r3) */ // 0x80915E9C
    /* li r0, 0 */ // 0x80915EA0
    /* li r3, 2 */ // 0x80915EA4
    *(0x174 + r31) = r3; // stw @ 0x80915EA8
    r3 = r31;
    *(0x178 + r31) = r0; // stw @ 0x80915EB0
    *(0x17c + r31) = r0; // stw @ 0x80915EB4
    r12 = *(0 + r31); // lwz @ 0x80915EB8
    r12 = *(0x24 + r12); // lwz @ 0x80915EBC
    /* mtctr r12 */ // 0x80915EC0
    /* bctrl  */ // 0x80915EC4
    /* lis r4, 0 */ // 0x80915EC8
    /* lis r5, 0 */ // 0x80915ECC
    r6 = *(0 + r4); // lwz @ 0x80915ED0
    /* clrlwi r4, r3, 0x10 */ // 0x80915ED4
    r3 = *(0 + r5); // lwz @ 0x80915ED8
    r0 = *(0xb70 + r6); // lwz @ 0x80915EDC
    if (!=) goto 0x0x80915f28;
    r0 = *(0xb9e + r6); // lhz @ 0x80915EE8
    if (!=) goto 0x0x80915f28;
    r31 = *(0x10 + r3); // lwz @ 0x80915EF8
    if (<) goto 0x0x80915f1c;
    r12 = *(0 + r31); // lwz @ 0x80915F00
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x80915F08
    /* mtctr r12 */ // 0x80915F0C
    /* bctrl  */ // 0x80915F10
    if (==) goto 0x0x80915f28;
    r3 = *(8 + r31); // lwz @ 0x80915F1C
    r0 = r3 + 1; // 0x80915F20
    *(8 + r31) = r0; // stw @ 0x80915F24
}