/* Function at 0x80781F08, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 6 function(s) */

int FUN_80781F08(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x80781F14
    r31 = r3;
    FUN_80781368(); // bl 0x80781368
    /* lis r3, 0 */ // 0x80781F20
    /* lis r30, 0 */ // 0x80781F24
    r3 = r3 + 0; // 0x80781F28
    *(0 + r31) = r3; // stw @ 0x80781F2C
    r3 = *(0 + r30); // lwz @ 0x80781F30
    FUN_808AB944(r3, r3); // bl 0x808AB944
    r28 = r3;
    /* li r27, 0 */ // 0x80781F3C
    /* lis r29, 0 */ // 0x80781F40
    /* b 0x80781f84 */ // 0x80781F44
    r3 = *(0 + r30); // lwz @ 0x80781F48
    r4 = r27;
    FUN_808AB934(r4); // bl 0x808AB934
    r12 = *(0 + r3); // lwz @ 0x80781F54
    r12 = *(0x28 + r12); // lwz @ 0x80781F58
    /* mtctr r12 */ // 0x80781F5C
    /* bctrl  */ // 0x80781F60
    r4 = r29 + 0; // 0x80781F64
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x80781f80;
    r3 = *(0xb8 + r31); // lwz @ 0x80781F74
    r0 = r3 + 1; // 0x80781F78
    *(0xb8 + r31) = r0; // stw @ 0x80781F7C
    r27 = r27 + 1; // 0x80781F80
    if (<) goto 0x0x80781f48;
    /* lis r30, 0 */ // 0x80781F8C
    /* li r26, 0 */ // 0x80781F90
    r30 = r30 + 0; // 0x80781F94
    /* li r25, 0 */ // 0x80781F98
    /* li r27, 0 */ // 0x80781F9C
    /* lis r29, 0 */ // 0x80781FA0
    /* b 0x8078202c */ // 0x80781FA4
    r3 = *(0 + r29); // lwz @ 0x80781FA8
    r4 = r25;
    FUN_808AB934(r4); // bl 0x808AB934
    r12 = *(0 + r3); // lwz @ 0x80781FB4
    r24 = r3;
    r12 = *(0x28 + r12); // lwz @ 0x80781FBC
    /* mtctr r12 */ // 0x80781FC0
    /* bctrl  */ // 0x80781FC4
    r23 = r3;
    r4 = r30 + 0xa; // 0x80781FCC
    FUN_805E3430(r4); // bl 0x805E3430
}