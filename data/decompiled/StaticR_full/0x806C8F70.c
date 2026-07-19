/* Function at 0x806C8F70, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806C8F70(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x806C8F78
    *(0x14 + r1) = r0; // stw @ 0x806C8F7C
    *(0xc + r1) = r31; // stw @ 0x806C8F80
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806C8F88
    *(0x1134 + r3) = r4; // stw @ 0x806C8F8C
    if (!=) goto 0x0x806c8fb4;
    /* li r4, 0 */ // 0x806C8F98
    r3 = r3 + 0x5c8; // 0x806C8F9C
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31 + 0xf28; // 0x806C8FA4
    /* li r4, 0x849 */ // 0x806C8FA8
    /* li r5, 0 */ // 0x806C8FAC
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x806C8FB4
    r31 = *(0xc + r1); // lwz @ 0x806C8FB8
    return;
}