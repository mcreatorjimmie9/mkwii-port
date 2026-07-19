/* Function at 0x80871E20, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80871E20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80871E30
    r30 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x80871E3C
    if (>) goto 0x0x80871e54;
    /* lis r3, 0 */ // 0x80871E48
    /* lfs f0, 0(r3) */ // 0x80871E4C
    /* stfs f0, 0x258(r30) */ // 0x80871E50
    /* lis r4, 0 */ // 0x80871E54
    r3 = r30 + 0xa8; // 0x80871E58
    r4 = r4 + 0; // 0x80871E5C
    r4 = r4 + 0x224; // 0x80871E60
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    *(0x25c + r30) = r3; // stw @ 0x80871E68
    /* li r31, 0 */ // 0x80871E6C
    /* b 0x80871e94 */ // 0x80871E70
    r3 = r30;
    FUN_8064A340(r3); // bl 0x8064A340
    if (!=) goto 0x0x80871e90;
    r3 = r30;
    r4 = r31;
    FUN_80871F0C(r3, r4); // bl 0x80871F0C
    r31 = r31 + 1; // 0x80871E90
    FUN_808CFA50(r3, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x80871E98
    if (<) goto 0x0x80871e74;
    r0 = *(0x14 + r1); // lwz @ 0x80871EA4
    r31 = *(0xc + r1); // lwz @ 0x80871EA8
    r30 = *(8 + r1); // lwz @ 0x80871EAC
    return;
}