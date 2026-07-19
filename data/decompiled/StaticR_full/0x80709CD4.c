/* Function at 0x80709CD4, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80709CD4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80709CDC
    /* li r5, 0 */ // 0x80709CE0
    *(0x14 + r1) = r0; // stw @ 0x80709CE4
    *(0xc + r1) = r31; // stw @ 0x80709CE8
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x80709CF0
    r12 = *(0x10 + r12); // lwz @ 0x80709CF4
    /* mtctr r12 */ // 0x80709CF8
    r3 = r3 + 0x44; // 0x80709CFC
    /* bctrl  */ // 0x80709D00
    r3 = r31;
    r4 = r31 + 0x44; // 0x80709D08
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x80709D14
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31 + 0x68; // 0x80709D1C
    FUN_806C9CD0(r3, r4, r3); // bl 0x806C9CD0
    /* lis r3, 3 */ // 0x80709D24
    /* li r4, 0x20 */ // 0x80709D28
    r3 = r3 + -0x3b48; // 0x80709D2C
    FUN_805E3430(r3, r3, r4, r3); // bl 0x805E3430
}