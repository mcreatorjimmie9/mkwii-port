/* Function at 0x80707DD0, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80707DD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80707DE0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80707DE8
    r30 = r3;
    if (==) goto 0x0x80707e50;
    /* li r4, -1 */ // 0x80707DF4
    r3 = r3 + 0x4d8; // 0x80707DF8
    FUN_8066D0F8(r4, r3); // bl 0x8066D0F8
    r3 = r30 + 0x364; // 0x80707E00
    /* li r4, -1 */ // 0x80707E04
    FUN_8066CEF8(r4, r3, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x1f0 */ // 0x80707E0C
    if (==) goto 0x0x80707e1c;
    /* li r4, 0 */ // 0x80707E14
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x7c; // 0x80707E1C
    /* li r4, -1 */ // 0x80707E20
    FUN_8066D42C(r4, r3, r4); // bl 0x8066D42C
    r3 = r30 + 0x6c; // 0x80707E28
    /* li r4, -1 */ // 0x80707E2C
    FUN_80668158(r3, r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x80707E38
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80707e50;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80707E54
    r30 = *(8 + r1); // lwz @ 0x80707E58
    r0 = *(0x14 + r1); // lwz @ 0x80707E5C
    return;
}