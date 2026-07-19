/* Function at 0x8069EEFC, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8069EEFC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8069EF10
    r29 = r3;
    r0 = *(0x54 + r3); // lbz @ 0x8069EF18
    if (!=) goto 0x0x8069ef3c;
    /* lis r3, 0 */ // 0x8069EF24
    /* li r4, 0 */ // 0x8069EF28
    r3 = *(0 + r3); // lwz @ 0x8069EF2C
    r3 = r3 + 0x34; // 0x8069EF30
    FUN_8067F430(r3, r4, r3); // bl 0x8067F430
    *(0x54 + r29) = r3; // stb @ 0x8069EF38
    r0 = *(8 + r29); // lwz @ 0x8069EF3C
    if (!=) goto 0x0x8069efcc;
    r0 = *(0x54 + r29); // lbz @ 0x8069EF48
    /* lis r3, 0 */ // 0x8069EF4C
    r3 = *(0 + r3); // lwz @ 0x8069EF50
    r30 = *(0x39 + r3); // lbz @ 0x8069EF58
    if (!=) goto 0x0x8069ef68;
    if (==) goto 0x0x8069efcc;
    /* lis r31, 0 */ // 0x8069EF68
    r3 = *(0 + r31); // lwz @ 0x8069EF6C
    r0 = *(0x30 + r3); // lwz @ 0x8069EF70
    if (!=) goto 0x0x8069efcc;
    /* li r4, 0x3f */ // 0x8069EF7C
    /* li r5, 0 */ // 0x8069EF80
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x8069EF88
    /* li r4, 0 */ // 0x8069EF8C
    /* li r5, -1 */ // 0x8069EF90
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* lis r3, 0 */ // 0x8069EF98
    r3 = *(0 + r3); // lwz @ 0x8069EFA0
    /* li r0, 1 */ // 0x8069EFA4
    *(0xc + r3) = r0; // stb @ 0x8069EFA8
    if (!=) goto 0x0x8069efcc;
    /* lis r3, 0 */ // 0x8069EFB0
    r3 = *(0 + r3); // lwz @ 0x8069EFB4
    FUN_807897B0(r3); // bl 0x807897B0
    r3 = r29;
    /* li r4, 8 */ // 0x8069EFC0
    /* li r5, -1 */ // 0x8069EFC4
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r0 = *(0x24 + r1); // lwz @ 0x8069EFCC
    r31 = *(0x1c + r1); // lwz @ 0x8069EFD0
    r30 = *(0x18 + r1); // lwz @ 0x8069EFD4
    r29 = *(0x14 + r1); // lwz @ 0x8069EFD8
    return;
}