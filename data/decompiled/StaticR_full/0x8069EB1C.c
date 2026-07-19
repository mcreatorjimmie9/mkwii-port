/* Function at 0x8069EB1C, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8069EB1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8069EB30
    r0 = *(8 + r3); // lwz @ 0x8069EB34
    if (<) goto 0x0x8069ec34;
    if (>) goto 0x0x8069ec34;
    r0 = *(0x1cc + r3); // lbz @ 0x8069EB48
    if (!=) goto 0x0x8069eb6c;
    /* lis r3, 0 */ // 0x8069EB54
    /* li r4, 0 */ // 0x8069EB58
    r3 = *(0 + r3); // lwz @ 0x8069EB5C
    r3 = r3 + 0x34; // 0x8069EB60
    FUN_8067F430(r3, r4, r3); // bl 0x8067F430
    *(0x1cc + r31) = r3; // stb @ 0x8069EB68
    r3 = r31 + 0xdc; // 0x8069EB6C
    /* li r4, 0 */ // 0x8069EB70
    FUN_8069F4B0(r3, r3, r4); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x8069EB78
    if (!=) goto 0x0x8069ec34;
    /* lis r3, 0 */ // 0x8069EB84
    r3 = *(0 + r3); // lwz @ 0x8069EB88
    r3 = *(0 + r3); // lwz @ 0x8069EB8C
    r3 = *(0x400 + r3); // lwz @ 0x8069EB90
    FUN_80670954(r3); // bl 0x80670954
    if (==) goto 0x0x8069ec34;
    r3 = r31 + 0xdc; // 0x8069EBA0
    /* li r4, 0 */ // 0x8069EBA4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069EBAC
    r30 = r3;
    if (==) goto 0x0x8069ebc8;
    if (==) goto 0x0x8069ebdc;
    /* b 0x8069ec2c */ // 0x8069EBC4
    /* lis r5, 0 */ // 0x8069EBC8
    /* li r4, 1 */ // 0x8069EBCC
    /* lfs f1, 0(r5) */ // 0x8069EBD0
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069ec2c */ // 0x8069EBD8
    r3 = *(0 + r3); // lwz @ 0x8069EBDC
    /* slwi r0, r0, 4 */ // 0x8069EBE0
    /* lwzx r3, r3, r0 */ // 0x8069EBE4
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069EBEC
    /* lis r0, 0x4330 */ // 0x8069EBF0
    *(0xc + r1) = r4; // stw @ 0x8069EBF4
    /* lis r3, 0 */ // 0x8069EBF8
    /* lfd f3, 0(r3) */ // 0x8069EBFC
    /* lis r5, 0 */ // 0x8069EC00
    *(8 + r1) = r0; // stw @ 0x8069EC04
    r3 = r30;
}