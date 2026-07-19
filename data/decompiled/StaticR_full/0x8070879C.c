/* Function at 0x8070879C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8070879C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807087A4
    *(0x14 + r1) = r0; // stw @ 0x807087A8
    *(0xc + r1) = r31; // stw @ 0x807087AC
    r31 = r3;
    r3 = r3 + 0x578; // 0x807087B4
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31 + 0x290; // 0x807087BC
    /* li r4, 0x1a2c */ // 0x807087C0
    /* li r5, 0 */ // 0x807087C4
    FUN_806A0A34(r3, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x404; // 0x807087CC
    /* li r4, 0x1a2d */ // 0x807087D0
    /* li r5, 0 */ // 0x807087D4
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x14 + r1); // lwz @ 0x807087DC
    r31 = *(0xc + r1); // lwz @ 0x807087E0
    return;
}