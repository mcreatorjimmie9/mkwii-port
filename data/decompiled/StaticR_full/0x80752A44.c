/* Function at 0x80752A44, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80752A44(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80752A54
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80752A5C
    r30 = r3;
    if (==) goto 0x0x80752ac0;
    /* lis r5, 0 */ // 0x80752A68
    /* li r4, 1 */ // 0x80752A6C
    r5 = r5 + 0; // 0x80752A70
    *(0 + r3) = r5; // stw @ 0x80752A74
    r0 = r5 + 0xec; // 0x80752A78
    *(0xb0 + r3) = r0; // stw @ 0x80752A7C
    r3 = *(0xe4 + r3); // lwz @ 0x80752A80
    FUN_80773040(r5); // bl 0x80773040
    r3 = *(0xe8 + r30); // lwz @ 0x80752A88
    /* li r4, 1 */ // 0x80752A8C
    FUN_80773040(r4); // bl 0x80773040
    /* addic. r0, r30, 0xb0 */ // 0x80752A94
    if (==) goto 0x0x80752ab0;
    /* lis r4, 0 */ // 0x80752A9C
    r3 = *(0xc4 + r30); // lwz @ 0x80752AA0
    r4 = r4 + 0; // 0x80752AA4
    *(0xb0 + r30) = r4; // stw @ 0x80752AA8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80752ac0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80752AC4
    r30 = *(8 + r1); // lwz @ 0x80752AC8
    r0 = *(0x14 + r1); // lwz @ 0x80752ACC
    return;
}