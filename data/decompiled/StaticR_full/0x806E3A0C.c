/* Function at 0x806E3A0C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E3A0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806E3A14
    *(0x14 + r1) = r0; // stw @ 0x806E3A18
    /* li r0, 0xbb8 */ // 0x806E3A1C
    *(0xc + r1) = r31; // stw @ 0x806E3A20
    r31 = r3;
    *(0 + r3) = r4; // stb @ 0x806E3A28
    *(1 + r3) = r4; // stb @ 0x806E3A2C
    *(4 + r3) = r4; // stw @ 0x806E3A30
    *(8 + r3) = r4; // stw @ 0x806E3A34
    *(0xc + r3) = r4; // stw @ 0x806E3A38
    *(0x10 + r3) = r4; // sth @ 0x806E3A3C
    *(0x12 + r3) = r0; // sth @ 0x806E3A40
    FUN_806EAF6C(); // bl 0x806EAF6C
    FUN_806F0E14(); // bl 0x806F0E14
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806E3A50
    r0 = *(0x14 + r1); // lwz @ 0x806E3A54
    return;
}