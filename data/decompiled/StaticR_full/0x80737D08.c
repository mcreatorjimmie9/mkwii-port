/* Function at 0x80737D08, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80737D08(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x6f4; // 0x80737D10
    r8 = r3 + 0x7bc; // 0x80737D14
    *(0x14 + r1) = r0; // stw @ 0x80737D18
    /* li r5, 2 */ // 0x80737D1C
    /* li r6, 5 */ // 0x80737D20
    /* li r9, 1 */ // 0x80737D24
    *(0xc + r1) = r31; // stw @ 0x80737D28
    r31 = r3;
    r4 = *(0x52c + r3); // lwz @ 0x80737D30
    FUN_807271EC(r6, r9); // bl 0x807271EC
    r4 = *(0x52c + r31); // lwz @ 0x80737D38
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80737D40
    r8 = r31 + 0x7c8; // 0x80737D44
    /* li r5, 5 */ // 0x80737D48
    /* li r6, 8 */ // 0x80737D4C
    /* li r9, 1 */ // 0x80737D50
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    r0 = *(0x14 + r1); // lwz @ 0x80737D58
    r31 = *(0xc + r1); // lwz @ 0x80737D5C
    return;
}