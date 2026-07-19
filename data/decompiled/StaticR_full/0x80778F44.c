/* Function at 0x80778F44, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80778F44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x80778F50
    *(0xc + r1) = r31; // stw @ 0x80778F54
    r31 = r3;
    *(0xbc + r3) = r0; // stw @ 0x80778F5C
    FUN_80777BB8(); // bl 0x80777BB8
    /* lfs f5, 0xe8(r31) */ // 0x80778F64
    /* li r0, 0 */ // 0x80778F68
    /* lfs f1, 0xec(r31) */ // 0x80778F6C
    /* lis r5, 0 */ // 0x80778F70
    /* lfs f2, 0xf0(r31) */ // 0x80778F74
    /* lis r3, 0 */ // 0x80778F78
    /* lfs f4, 0x124(r31) */ // 0x80778F7C
    /* li r4, 0 */ // 0x80778F80
    /* lfs f3, 0x128(r31) */ // 0x80778F84
    /* lfs f0, 0x12c(r31) */ // 0x80778F88
    /* stfs f1, 0x534(r31) */ // 0x80778F8C
    r6 = *(8 + r31); // lwz @ 0x80778F90
    /* stfs f2, 0x538(r31) */ // 0x80778F94
    /* lfs f1, 0(r5) */ // 0x80778F98
    /* stfs f5, 0x530(r31) */ // 0x80778F9C
    /* lfs f2, 0(r3) */ // 0x80778FA0
    /* stfs f4, 0x53c(r31) */ // 0x80778FA4
    /* stfs f3, 0x540(r31) */ // 0x80778FA8
    /* stfs f0, 0x544(r31) */ // 0x80778FAC
    *(0x558 + r31) = r0; // stw @ 0x80778FB0
    r3 = *(0x28 + r6); // lwz @ 0x80778FB4
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = r31;
    /* li r4, 0 */ // 0x80778FC0
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x80778FC8
    r31 = *(0xc + r1); // lwz @ 0x80778FCC
    return;
}