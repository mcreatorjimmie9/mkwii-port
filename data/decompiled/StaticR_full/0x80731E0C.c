/* Function at 0x80731E0C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80731E0C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 0x6f4; // 0x80731E14
    r8 = r3 + 0x7bc; // 0x80731E18
    *(0x14 + r1) = r0; // stw @ 0x80731E1C
    /* li r5, 0x16 */ // 0x80731E20
    /* li r6, 0x17 */ // 0x80731E24
    /* li r9, 1 */ // 0x80731E28
    *(0xc + r1) = r31; // stw @ 0x80731E2C
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80731E34
    FUN_807273A0(r6, r9); // bl 0x807273A0
    r4 = *(0x530 + r31); // lwz @ 0x80731E3C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731E44
    r8 = r31 + 0x7c8; // 0x80731E48
    /* li r5, 0x17 */ // 0x80731E4C
    /* li r6, 0x18 */ // 0x80731E50
    /* li r9, 1 */ // 0x80731E54
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80731E5C
    r31 = *(0xc + r1); // lwz @ 0x80731E60
    return;
}