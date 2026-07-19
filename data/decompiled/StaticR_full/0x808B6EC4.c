/* Function at 0x808B6EC4, size=312 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_808B6EC4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x808B6ED8
    *(0x54 + r1) = r29; // stw @ 0x808B6EDC
    r29 = r4;
    r5 = *(0x904 + r3); // lwz @ 0x808B6EE4
    if (>=) goto 0x0x808b6f3c;
    r5 = *(0x654 + r3); // lwz @ 0x808B6EF0
    /* mulli r30, r4, 0x188 */ // 0x808B6EF4
    r0 = *(0x914 + r3); // lwz @ 0x808B6EF8
    /* li r6, 0 */ // 0x808B6EFC
    r4 = r5 + 1; // 0x808B6F00
    *(0x654 + r3) = r4; // stw @ 0x808B6F04
    r4 = r5;
    r5 = r0 + r30; // 0x808B6F0C
    FUN_80671C2C(r6, r4, r4); // bl 0x80671C2C
    r0 = *(0x914 + r31); // lwz @ 0x808B6F14
    /* lis r4, 0 */ // 0x808B6F18
    r4 = r4 + 0; // 0x808B6F1C
    r5 = r29;
    r3 = r0 + r30; // 0x808B6F24
    r4 = r4 + 0xa; // 0x808B6F28
    FUN_806CA498(r4, r4, r5, r4); // bl 0x806CA498
    r0 = *(0x914 + r31); // lwz @ 0x808B6F30
    r3 = r0 + r30; // 0x808B6F34
    /* b 0x808b709c */ // 0x808B6F38
    /* slwi r0, r5, 1 */ // 0x808B6F3C
    if (>=) goto 0x0x808b7074;
    /* subf r29, r5, r4 */ // 0x808B6F4C
    if (!=) goto 0x0x808b6f74;
    /* lis r5, 0 */ // 0x808B6F54
    r5 = r5 + 0; // 0x808B6F5C
    /* li r4, 0x20 */ // 0x808B6F60
    r5 = r5 + 0x1f; // 0x808B6F64
    /* crclr cr1eq */ // 0x808B6F68
    FUN_805E3430(r3, r5, r4, r5); // bl 0x805E3430
    /* b 0x808b6fc0 */ // 0x808B6F70
    if (!=) goto 0x0x808b6fa0;
    /* lis r4, 0 */ // 0x808B6F7C
    r4 = r4 + 0; // 0x808B6F84
    r6 = r29 + 1; // 0x808B6F88
    r5 = r4 + 0x33; // 0x808B6F8C
    /* li r4, 0x20 */ // 0x808B6F90
    /* crclr cr1eq */ // 0x808B6F94
    FUN_805E3430(r4, r6, r5, r4); // bl 0x805E3430
    /* b 0x808b6fc0 */ // 0x808B6F9C
    /* lis r4, 0 */ // 0x808B6FA0
    r4 = r4 + 0; // 0x808B6FA8
    r6 = r29 + 1; // 0x808B6FAC
    r5 = r4 + 0x4b; // 0x808B6FB0
    /* li r4, 0x20 */ // 0x808B6FB4
    /* crclr cr1eq */ // 0x808B6FB8
    FUN_805E3430(r4, r6, r5, r4); // bl 0x805E3430
    /* mulli r30, r29, 0x178 */ // 0x808B6FC0
    r0 = *(0x910 + r31); // lwz @ 0x808B6FC4
    r3 = r31;
    /* li r6, 0 */ // 0x808B6FCC
    r4 = r0 + r30; // 0x808B6FD0
    *(0x174 + r4) = r29; // stw @ 0x808B6FD4
    r4 = *(0x654 + r31); // lwz @ 0x808B6FD8
    r0 = *(0x910 + r31); // lwz @ 0x808B6FDC
    r5 = r4 + 1; // 0x808B6FE0
    *(0x654 + r31) = r5; // stw @ 0x808B6FE4
    r5 = r0 + r30; // 0x808B6FE8
    FUN_80671C2C(r5); // bl 0x80671C2C
    r0 = *(0x910 + r31); // lwz @ 0x808B6FF0
    r4 = r0 + r30; // 0x808B6FF8
}