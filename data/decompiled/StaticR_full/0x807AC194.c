/* Function at 0x807AC194, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807AC194(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807AC19C
    *(0x14 + r1) = r0; // stw @ 0x807AC1A0
    r6 = r6 + 0; // 0x807AC1A4
    *(0xc + r1) = r31; // stw @ 0x807AC1A8
    r31 = r3;
    *(0xc + r3) = r4; // stw @ 0x807AC1B0
    *(0 + r3) = r6; // stw @ 0x807AC1B4
    *(0x10 + r3) = r5; // stw @ 0x807AC1B8
    /* li r3, 0x2c */ // 0x807AC1BC
    FUN_805E3430(r3); // bl 0x805E3430
}