/* Function at 0x80697F2C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80697F2C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, -1 */ // 0x80697F34
    /* li r4, 7 */ // 0x80697F38
    *(0x14 + r1) = r0; // stw @ 0x80697F3C
    /* li r0, 0xff */ // 0x80697F40
    *(0xc + r1) = r31; // stw @ 0x80697F44
    /* li r31, 0 */ // 0x80697F48
    *(8 + r1) = r30; // stw @ 0x80697F4C
    r30 = r3;
    *(0 + r3) = r31; // stw @ 0x80697F54
    *(4 + r3) = r5; // stw @ 0x80697F58
    *(8 + r3) = r5; // stw @ 0x80697F5C
    *(0xc + r3) = r5; // stw @ 0x80697F60
    *(0x10 + r3) = r5; // stw @ 0x80697F64
    *(0x14 + r3) = r31; // stw @ 0x80697F68
    *(0x18 + r3) = r31; // stw @ 0x80697F6C
    *(0x1c + r3) = r31; // stw @ 0x80697F70
    *(0x20 + r3) = r31; // stb @ 0x80697F74
    *(0x24 + r3) = r4; // stw @ 0x80697F78
    *(0x28 + r3) = r0; // stw @ 0x80697F7C
    *(0x2c + r3) = r5; // stw @ 0x80697F80
    *(0x30 + r3) = r31; // stw @ 0x80697F84
    r3 = r3 + 0x34; // 0x80697F88
    FUN_8067EED0(r3); // bl 0x8067EED0
    *(0x98 + r30) = r31; // stw @ 0x80697F90
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80697F98
    r30 = *(8 + r1); // lwz @ 0x80697F9C
    r0 = *(0x14 + r1); // lwz @ 0x80697FA0
    return;
}