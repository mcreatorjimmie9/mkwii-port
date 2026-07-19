/* Function at 0x808017C4, size=120 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808017C4(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x808017D4
    r31 = r31 + 0; // 0x808017D8
    *(0x48 + r1) = r30; // stw @ 0x808017DC
    *(0x44 + r1) = r29; // stw @ 0x808017E0
    *(0x40 + r1) = r28; // stw @ 0x808017E4
    r28 = r3;
    r29 = *(0x14 + r3); // lwz @ 0x808017EC
    if (==) goto 0x0x808018d4;
    r3 = *(0x10 + r29); // lwz @ 0x808017F8
    r3 = *(0 + r3); // lwz @ 0x808017FC
    if (==) goto 0x0x80801818;
    r3 = r3 + 0xc; // 0x80801808
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80801820 */ // 0x80801814
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x20(r28) */ // 0x80801820
    /* li r30, 0 */ // 0x80801824
    /* stfs f0, 0x14(r1) */ // 0x80801828
    /* lfs f0, 0x24(r28) */ // 0x8080182C
    /* stfs f0, 0x24(r1) */ // 0x80801830
    /* lfs f0, 0x28(r28) */ // 0x80801834
    /* stfs f0, 0x34(r1) */ // 0x80801838
}