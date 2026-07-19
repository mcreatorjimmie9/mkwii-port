/* Function at 0x80708808, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80708808(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80708814
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x8070881C
    if (==) goto 0x0x80708834;
    if (==) goto 0x0x8070884c;
    /* b 0x80708870 */ // 0x80708830
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x80708840
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x80708870 */ // 0x80708848
    r3 = r4;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x80708854
    r3 = r31;
    /* li r4, 0x7a */ // 0x8070885C
    /* li r5, 1 */ // 0x80708860
    r12 = *(0x1c + r12); // lwz @ 0x80708864
    /* mtctr r12 */ // 0x80708868
    /* bctrl  */ // 0x8070886C
    r0 = *(0x14 + r1); // lwz @ 0x80708870
    r31 = *(0xc + r1); // lwz @ 0x80708874
    return;
}