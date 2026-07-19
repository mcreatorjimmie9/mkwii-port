/* Function at 0x8064C908, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8064C908(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x8064C910
    *(0x14 + r1) = r0; // stw @ 0x8064C914
    *(0xc + r1) = r31; // stw @ 0x8064C918
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x8064C920
    *(0xc9c + r3) = r4; // stw @ 0x8064C924
    if (!=) goto 0x0x8064c94c;
    /* li r4, 0 */ // 0x8064C930
    r3 = r3 + 0x418; // 0x8064C934
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31 + 0xb24; // 0x8064C93C
    /* li r4, 0x10d9 */ // 0x8064C940
    /* li r5, 0 */ // 0x8064C944
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x8064C94C
    r31 = *(0xc + r1); // lwz @ 0x8064C950
    return;
}