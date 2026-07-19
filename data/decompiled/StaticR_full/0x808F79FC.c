/* Function at 0x808F79FC, size=116 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_808F79FC(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* li r4, 0 */ // 0x808F7A04
    *(0x34 + r1) = r0; // stw @ 0x808F7A08
    /* li r0, -1 */ // 0x808F7A0C
    /* stmw r25, 0x14(r1) */ // 0x808F7A10
    r25 = r3;
    *(0x3fec + r3) = r4; // stw @ 0x808F7A18
    *(0x3ff0 + r3) = r4; // stw @ 0x808F7A1C
    *(0x3ff4 + r3) = r4; // stw @ 0x808F7A20
    *(0x3ff8 + r3) = r4; // stw @ 0x808F7A24
    *(0x3ffc + r3) = r4; // stw @ 0x808F7A28
    *(0x4000 + r3) = r4; // stw @ 0x808F7A2C
    *(0x4004 + r3) = r4; // stw @ 0x808F7A30
    *(0x4008 + r3) = r4; // stw @ 0x808F7A34
    *(0x400c + r3) = r4; // stw @ 0x808F7A38
    *(0x4010 + r3) = r4; // stw @ 0x808F7A3C
    *(0x4014 + r3) = r4; // stw @ 0x808F7A40
    *(0x4018 + r3) = r4; // stw @ 0x808F7A44
    *(0x3f4c + r3) = r0; // stw @ 0x808F7A48
    *(0x3f54 + r3) = r0; // sth @ 0x808F7A4C
    *(0x3f50 + r3) = r4; // stw @ 0x808F7A50
    *(0x42a0 + r3) = r4; // stw @ 0x808F7A54
    r3 = *(0x3fe8 + r3); // lwz @ 0x808F7A58
    r12 = *(8 + r3); // lwz @ 0x808F7A5C
    r12 = *(8 + r12); // lwz @ 0x808F7A60
    /* mtctr r12 */ // 0x808F7A64
    /* bctrl  */ // 0x808F7A68
    FUN_805E3430(); // bl 0x805E3430
}