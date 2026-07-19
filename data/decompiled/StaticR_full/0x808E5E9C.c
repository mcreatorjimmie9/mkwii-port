/* Function at 0x808E5E9C, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808E5E9C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808E5EB4
    r29 = r3;
    r31 = *(0x240 + r4); // lwz @ 0x808E5EBC
    if (==) goto 0x0x808e5f54;
    r0 = *(8 + r3); // lwz @ 0x808E5EC8
    if (<=) goto 0x0x808e5f54;
    if (<=) goto 0x0x808e5eec;
    r0 = r31 + -0x12; // 0x808E5EDC
    if (<=) goto 0x0x808e5ef8;
    /* b 0x808e5f00 */ // 0x808E5EE8
    /* li r0, 0 */ // 0x808E5EEC
    *(0x6cc + r3) = r0; // stw @ 0x808E5EF0
    /* b 0x808e5f00 */ // 0x808E5EF4
    /* li r0, 1 */ // 0x808E5EF8
    *(0x6cc + r3) = r0; // stw @ 0x808E5EFC
    /* lis r4, 0 */ // 0x808E5F00
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x808E5F08
    r4 = *(0xce4 + r4); // lwz @ 0x808E5F0C
    FUN_808AF6B0(r4, r3); // bl 0x808AF6B0
    r4 = r3;
    r3 = r29 + 0x854; // 0x808E5F18
    /* li r5, 0 */ // 0x808E5F1C
    FUN_806A0A34(r4, r3, r5); // bl 0x806A0A34
    r4 = r31;
    r3 = r29 + 0x6d0; // 0x808E5F28
    FUN_806CAD80(r3, r5, r4, r3); // bl 0x806CAD80
    /* lis r3, 0 */ // 0x808E5F30
    /* slwi r0, r30, 2 */ // 0x808E5F34
    r4 = *(0 + r3); // lwz @ 0x808E5F38
    r5 = r31;
    r3 = r29 + 0x9cc; // 0x808E5F40
    r4 = *(0x98 + r4); // lwz @ 0x808E5F44
    r4 = r4 + r0; // 0x808E5F48
    r4 = *(0x12c + r4); // lwz @ 0x808E5F4C
    FUN_808D3DE8(r5, r3); // bl 0x808D3DE8
    r0 = *(0x24 + r1); // lwz @ 0x808E5F54
    r31 = *(0x1c + r1); // lwz @ 0x808E5F58
    r30 = *(0x18 + r1); // lwz @ 0x808E5F5C
    r29 = *(0x14 + r1); // lwz @ 0x808E5F60
    return;
}