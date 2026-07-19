/* Function at 0x807F4E38, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807F4E38(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x807F4E50
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807F4E58
    r29 = r3;
    if (!=) goto 0x0x807f4ea4;
    r0 = *(0xb0 + r3); // lwz @ 0x807F4E64
    if (==) goto 0x0x807f4ea4;
    /* li r0, 2 */ // 0x807F4E70
    *(0xb0 + r3) = r0; // stw @ 0x807F4E74
    r4 = *(8 + r3); // lwz @ 0x807F4E78
    /* lis r3, 0 */ // 0x807F4E7C
    /* lis r5, 0 */ // 0x807F4E80
    /* lfs f1, 0(r3) */ // 0x807F4E84
    r3 = *(0x28 + r4); // lwz @ 0x807F4E88
    /* li r4, 1 */ // 0x807F4E8C
    /* lfs f2, 0(r5) */ // 0x807F4E90
    /* li r5, 1 */ // 0x807F4E94
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* li r0, 0xb4 */ // 0x807F4E9C
    *(0xbc + r29) = r0; // stw @ 0x807F4EA0
    if (==) goto 0x0x807f4eb4;
    if (!=) goto 0x0x807f4ef4;
    r0 = *(0xb0 + r29); // lwz @ 0x807F4EB4
    if (==) goto 0x0x807f4ef4;
    /* li r0, 2 */ // 0x807F4EC0
    *(0xb0 + r29) = r0; // stw @ 0x807F4EC4
    /* lis r3, 0 */ // 0x807F4EC8
    /* lis r5, 0 */ // 0x807F4ECC
    /* lfs f2, 0(r5) */ // 0x807F4ED0
    /* li r5, 1 */ // 0x807F4ED4
    r4 = *(8 + r29); // lwz @ 0x807F4ED8
    /* lfs f1, 0(r3) */ // 0x807F4EDC
    r3 = *(0x28 + r4); // lwz @ 0x807F4EE0
    /* li r4, 1 */ // 0x807F4EE4
    FUN_805E73A4(r5, r4); // bl 0x805E73A4
    /* li r0, 0xb4 */ // 0x807F4EEC
    *(0xbc + r29) = r0; // stw @ 0x807F4EF0
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x807F4EF8
    r30 = *(0x18 + r1); // lwz @ 0x807F4EFC
    r29 = *(0x14 + r1); // lwz @ 0x807F4F00
    r0 = *(0x24 + r1); // lwz @ 0x807F4F04
    return;
}