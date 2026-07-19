/* Function at 0x8075CD58, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8075CD58(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8075CD68
    r31 = r31 + 0; // 0x8075CD6C
    *(0x28 + r1) = r30; // stw @ 0x8075CD70
    *(0x24 + r1) = r29; // stw @ 0x8075CD74
    r29 = r3;
    r0 = *(0x154 + r3); // lwz @ 0x8075CD7C
    if (!=) goto 0x0x8075cdd8;
    FUN_8089F7B0(); // bl 0x8089F7B0
    /* li r3, 0x6c */ // 0x8075CD8C
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x8075cdd0;
    r12 = *(0 + r29); // lwz @ 0x8075CDA0
    r4 = r29;
    r12 = *(0xe8 + r12); // lwz @ 0x8075CDAC
    /* mtctr r12 */ // 0x8075CDB0
    /* bctrl  */ // 0x8075CDB4
    /* lfs f1, 0x68(r31) */ // 0x8075CDB8
    r3 = r30;
    /* lfs f2, 0x7c(r31) */ // 0x8075CDC0
    FUN_808B2210(r3, r4); // bl 0x808B2210
    r30 = r3;
}