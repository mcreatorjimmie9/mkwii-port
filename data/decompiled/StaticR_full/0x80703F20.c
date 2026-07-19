/* Function at 0x80703F20, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80703F20(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r6 = r3 + 0x18; // 0x80703F28
    r7 = r4 + 0x104; // 0x80703F2C
    *(0x24 + r1) = r0; // stw @ 0x80703F30
    r8 = r6;
    /* li r10, 0 */ // 0x80703F38
    *(0x1c + r1) = r31; // stw @ 0x80703F3C
    r31 = r3;
    /* b 0x80703f58 */ // 0x80703F44
    *(0 + r8) = r7; // stw @ 0x80703F48
    r7 = r7 + 0x50; // 0x80703F4C
    r8 = r8 + 4; // 0x80703F50
    r9 = *(0 + r4); // lwz @ 0x80703F58
    if (<) goto 0x0x80703f48;
    /* lis r7, 0 */ // 0x80703F64
    r10 = r5;
    r7 = r7 + 0; // 0x80703F6C
    *(8 + r1) = r7; // stw @ 0x80703F70
    r7 = r4 + 4; // 0x80703F74
    r8 = r4 + 0x84; // 0x80703F78
    *(0xc + r1) = r3; // stw @ 0x80703F7C
    /* li r3, 0x697 */ // 0x80703F80
    r4 = *(0xc + r31); // lbz @ 0x80703F84
    r5 = *(0x98 + r31); // lwz @ 0x80703F88
    FUN_80706EE4(r8, r3); // bl 0x80706EE4
    r5 = r3;
    if (==) goto 0x0x80703fb0;
    r3 = r31;
    /* li r4, 7 */ // 0x80703FA0
    FUN_80704D38(r5, r3, r4); // bl 0x80704D38
    /* li r3, 0 */ // 0x80703FA8
    /* b 0x80703fd8 */ // 0x80703FAC
    /* li r4, 7 */ // 0x80703FB0
    /* li r3, 2 */ // 0x80703FB4
    /* li r0, 0 */ // 0x80703FB8
    *(0x10 + r31) = r4; // stw @ 0x80703FBC
    *(0 + r31) = r3; // stw @ 0x80703FC0
    *(4 + r31) = r0; // stw @ 0x80703FC4
    FUN_805E3430(r3); // bl 0x805E3430
    *(0xa0 + r31) = r3; // stw @ 0x80703FCC
    /* li r3, 1 */ // 0x80703FD0
    *(0xa4 + r31) = r4; // stw @ 0x80703FD4
    r0 = *(0x24 + r1); // lwz @ 0x80703FD8
    r31 = *(0x1c + r1); // lwz @ 0x80703FDC
}