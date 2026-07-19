/* Function at 0x8074E100, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8074E100(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0x3c */ // 0x8074E108
    /* lis r31, 0 */ // 0x8074E114
    *(0x18 + r1) = r30; // stw @ 0x8074E118
    /* lis r30, 0 */ // 0x8074E11C
    r30 = r30 + 0; // 0x8074E120
    *(0x14 + r1) = r29; // stw @ 0x8074E124
    r29 = r3;
    r5 = *(0 + r31); // lwz @ 0x8074E12C
    r3 = *(4 + r5); // lwz @ 0x8074E130
    FUN_805E364C(); // bl 0x805E364C
    /* clrlwi r3, r3, 0x10 */ // 0x8074E138
    /* lfs f1, 0x8c(r30) */ // 0x8074E13C
    r0 = r3 + 0x64; // 0x8074E140
    *(0x158 + r29) = r0; // sth @ 0x8074E144
    r3 = *(0 + r31); // lwz @ 0x8074E148
    r3 = *(4 + r3); // lwz @ 0x8074E14C
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f0, 0x90(r30) */ // 0x8074E154
    /* li r4, 0 */ // 0x8074E158
    r3 = *(8 + r29); // lwz @ 0x8074E15C
    /* li r5, 1 */ // 0x8074E160
    /* fadds f0, f0, f1 */ // 0x8074E164
    /* lfs f1, 0(r30) */ // 0x8074E168
    /* lfs f2, 0x60(r30) */ // 0x8074E16C
    /* stfs f0, 0x180(r29) */ // 0x8074E170
    r3 = *(0x28 + r3); // lwz @ 0x8074E174
    FUN_805E73A4(); // bl 0x805E73A4
    r0 = *(0x24 + r1); // lwz @ 0x8074E17C
    r31 = *(0x1c + r1); // lwz @ 0x8074E180
    r30 = *(0x18 + r1); // lwz @ 0x8074E184
    r29 = *(0x14 + r1); // lwz @ 0x8074E188
    return;
}