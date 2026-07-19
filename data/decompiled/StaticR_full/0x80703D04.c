/* Function at 0x80703D04, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80703D04(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = *(0x1c + r4); // lwz @ 0x80703D0C
    /* li r8, 0 */ // 0x80703D10
    *(0x14 + r1) = r0; // stw @ 0x80703D14
    /* li r0, 1 */ // 0x80703D18
    *(0xc + r1) = r31; // stw @ 0x80703D1C
    r31 = r6;
    *(0xc + r3) = r5; // stb @ 0x80703D24
    r5 = r31;
    *(8 + r3) = r8; // stw @ 0x80703D2C
    *(0x98 + r3) = r7; // stw @ 0x80703D30
    *(0 + r3) = r0; // stw @ 0x80703D34
    *(0xa8 + r3) = r6; // stb @ 0x80703D38
    /* li r3, 0x697 */ // 0x80703D3C
    FUN_805E3430(r3); // bl 0x805E3430
}