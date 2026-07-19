/* Function at 0x80685D38, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80685D38(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80685D44
    r31 = r3;
    r0 = *(0x400 + r3); // lwz @ 0x80685D4C
    if (==) goto 0x0x80685d60;
    r3 = r0;
    FUN_806709AC(r3); // bl 0x806709AC
    r3 = *(0x37c + r31); // lwz @ 0x80685D60
    if (<=) goto 0x0x80685d80;
    r0 = r3 + -1; // 0x80685D6C
    /* slwi r0, r0, 2 */ // 0x80685D70
    r3 = r31 + r0; // 0x80685D74
    r3 = *(0x354 + r3); // lwz @ 0x80685D78
    FUN_80671B4C(); // bl 0x80671B4C
    r3 = *(0x37c + r31); // lwz @ 0x80685D80
    if (<=) goto 0x0x80685dcc;
    r0 = r3 + -1; // 0x80685D8C
    /* lis r3, 0 */ // 0x80685D90
    /* slwi r0, r0, 2 */ // 0x80685D94
    r4 = *(0 + r3); // lwz @ 0x80685D98
    r3 = r31 + r0; // 0x80685D9C
    r3 = *(0x354 + r3); // lwz @ 0x80685DA0
    r31 = r4 + 0x34; // 0x80685DA4
    r3 = *(0x38 + r3); // lwz @ 0x80685DA8
    r12 = *(0 + r3); // lwz @ 0x80685DAC
    r12 = *(0x30 + r12); // lwz @ 0x80685DB0
    /* mtctr r12 */ // 0x80685DB4
    /* bctrl  */ // 0x80685DB8
    r4 = r3;
    r3 = r31;
    FUN_8067FD78(r4, r3); // bl 0x8067FD78
    /* b 0x80685de0 */ // 0x80685DC8
    /* lis r3, 0 */ // 0x80685DCC
    /* li r4, 0 */ // 0x80685DD0
    r3 = *(0 + r3); // lwz @ 0x80685DD4
    r3 = r3 + 0x34; // 0x80685DD8
    FUN_8067FD78(r3, r4, r3); // bl 0x8067FD78
    r0 = *(0x14 + r1); // lwz @ 0x80685DE0
    r31 = *(0xc + r1); // lwz @ 0x80685DE4
    return;
}