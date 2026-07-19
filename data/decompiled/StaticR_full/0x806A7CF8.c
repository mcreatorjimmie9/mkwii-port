/* Function at 0x806A7CF8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A7CF8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806A7D00
    *(0x14 + r1) = r0; // stw @ 0x806A7D04
    *(0xc + r1) = r31; // stw @ 0x806A7D08
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x806A7D10
    r3 = *(0 + r3); // lwz @ 0x806A7D14
    r0 = *(0 + r3); // lwz @ 0x806A7D18
    if (==) goto 0x0x806a7d30;
    if (==) goto 0x0x806a7d58;
    /* b 0x806a7d7c */ // 0x806A7D2C
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806A7D38
    r3 = r31;
    /* li r4, 0x7d */ // 0x806A7D40
    /* li r5, 1 */ // 0x806A7D44
    r12 = *(0x1c + r12); // lwz @ 0x806A7D48
    /* mtctr r12 */ // 0x806A7D4C
    /* bctrl  */ // 0x806A7D50
    /* b 0x806a7d7c */ // 0x806A7D54
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806A7D60
    r3 = r31;
    /* li r4, 0x82 */ // 0x806A7D68
    /* li r5, 1 */ // 0x806A7D6C
    r12 = *(0x1c + r12); // lwz @ 0x806A7D70
    /* mtctr r12 */ // 0x806A7D74
    /* bctrl  */ // 0x806A7D78
    r0 = *(0x14 + r1); // lwz @ 0x806A7D7C
    r31 = *(0xc + r1); // lwz @ 0x806A7D80
    return;
}