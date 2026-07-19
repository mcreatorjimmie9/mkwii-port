/* Function at 0x80800F4C, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80800F4C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80800F60
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80800F68
    r29 = r3;
    if (==) goto 0x0x80801034;
    /* lis r5, 0 */ // 0x80800F74
    /* lis r4, 0 */ // 0x80800F78
    r5 = r5 + 0; // 0x80800F7C
    *(0 + r3) = r5; // stw @ 0x80800F80
    r31 = *(0 + r4); // lwz @ 0x80800F84
    if (==) goto 0x0x80801018;
    /* li r0, 0 */ // 0x80800F90
    *(0 + r4) = r0; // stw @ 0x80800F94
    if (==) goto 0x0x80801018;
    /* lis r3, 0 */ // 0x80800F9C
    r3 = r3 + 0; // 0x80800FA0
    *(0x10 + r31) = r3; // stw @ 0x80800FA4
    r3 = *(0x5c + r31); // lwz @ 0x80800FA8
    if (==) goto 0x0x80800fcc;
    if (==) goto 0x0x80800fcc;
    r12 = *(0 + r3); // lwz @ 0x80800FB8
    /* li r4, 1 */ // 0x80800FBC
    r12 = *(8 + r12); // lwz @ 0x80800FC0
    /* mtctr r12 */ // 0x80800FC4
    /* bctrl  */ // 0x80800FC8
    /* li r0, 0 */ // 0x80800FD0
    *(0x5c + r31) = r0; // stw @ 0x80800FD4
    if (==) goto 0x0x80801010;
    /* lis r3, 0 */ // 0x80800FDC
    /* lis r4, 0 */ // 0x80800FE0
    r3 = r3 + 0; // 0x80800FE4
    *(0 + r31) = r3; // stw @ 0x80800FE8
    r3 = *(0 + r4); // lwz @ 0x80800FEC
    if (==) goto 0x0x80801004;
    *(0 + r4) = r0; // stw @ 0x80800FF8
    /* li r4, 1 */ // 0x80800FFC
    FUN_80801284(r4); // bl 0x80801284
    r3 = r31;
    /* li r4, 0 */ // 0x80801008
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8080101C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80801034;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80801034
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8080103C
    r29 = *(0x14 + r1); // lwz @ 0x80801040
}