/* Function at 0x807E3938, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E3938(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807E3948
    r31 = r31 + 0; // 0x807E394C
    *(8 + r1) = r30; // stw @ 0x807E3950
    r30 = r3;
    r0 = *(0x19c + r3); // lwz @ 0x807E3958
    if (!=) goto 0x0x807e3998;
    /* li r0, 1 */ // 0x807E3964
    *(0x19c + r3) = r0; // stw @ 0x807E3968
    r3 = *(8 + r3); // lwz @ 0x807E396C
    /* li r4, 5 */ // 0x807E3970
    /* lfs f1, 0(r31) */ // 0x807E3974
    /* li r5, 1 */ // 0x807E3978
    r3 = *(0x28 + r3); // lwz @ 0x807E397C
    /* lfs f2, 0xb0(r31) */ // 0x807E3980
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lfs f0, 0xc4(r31) */ // 0x807E3988
    r3 = r30;
    /* stfs f0, 0x12c(r30) */ // 0x807E3990
    FUN_807E35E4(r3); // bl 0x807E35E4
    r0 = *(0x14 + r1); // lwz @ 0x807E3998
    r31 = *(0xc + r1); // lwz @ 0x807E399C
    r30 = *(8 + r1); // lwz @ 0x807E39A0
    return;
}