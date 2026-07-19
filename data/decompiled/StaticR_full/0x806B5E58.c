/* Function at 0x806B5E58, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806B5E58(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x806B5E68
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806B5E74
    /* lis r4, 0 */ // 0x806B5E78
    r3 = r3 + 0; // 0x806B5E7C
    *(0 + r30) = r3; // stw @ 0x806B5E80
    /* lis r7, 0 */ // 0x806B5E84
    r4 = r4 + 0; // 0x806B5E88
    r6 = *(0 + r7); // lwzu @ 0x806B5E8C
    r3 = r30 + 0x5c; // 0x806B5E90
    *(8 + r1) = r6; // stw @ 0x806B5E94
    r5 = *(4 + r7); // lwz @ 0x806B5E98
    r0 = *(8 + r7); // lwz @ 0x806B5E9C
    *(0xc + r1) = r5; // stw @ 0x806B5EA0
    *(0x10 + r1) = r0; // stw @ 0x806B5EA4
    *(0x44 + r30) = r4; // stw @ 0x806B5EA8
    *(0x48 + r30) = r30; // stw @ 0x806B5EAC
    *(0x4c + r30) = r6; // stw @ 0x806B5EB0
    *(0x50 + r30) = r5; // stw @ 0x806B5EB4
    *(0x54 + r30) = r0; // stw @ 0x806B5EB8
    FUN_8066880C(); // bl 0x8066880C
    r3 = r30 + 0x1a0; // 0x806B5EC0
    FUN_806A0418(r3); // bl 0x806A0418
    r3 = r30 + 0x314; // 0x806B5EC8
    FUN_806A0418(r3, r3); // bl 0x806A0418
    r31 = r30 + 0x488; // 0x806B5ED0
    r3 = r31;
    FUN_806A0418(r3, r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806B5EDC
    /* lis r4, 0 */ // 0x806B5EE0
    r3 = r3 + 0; // 0x806B5EE4
    /* lis r5, 0 */ // 0x806B5EE8
    *(0 + r31) = r3; // stw @ 0x806B5EEC
    r3 = r30 + 0x5fc; // 0x806B5EF0
    r4 = r4 + 0; // 0x806B5EF4
    r5 = r5 + 0; // 0x806B5EF8
    /* li r6, 0x174 */ // 0x806B5EFC
    /* li r7, 0xc */ // 0x806B5F00
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}