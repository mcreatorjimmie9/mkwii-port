/* Function at 0x806A2E1C, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_806A2E1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806A2E34
    r29 = r4;
    /* li r4, 1 */ // 0x806A2E3C
    *(0x10 + r1) = r28; // stw @ 0x806A2E40
    r28 = r3;
    r3 = r3 + 0x98; // 0x806A2E48
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    if (==) goto 0x0x806a2ef8;
    r0 = *(0x38 + r3); // lwz @ 0x806A2E5C
    if (==) goto 0x0x806a2e74;
    if (==) goto 0x0x806a2e88;
    /* b 0x806a2ed8 */ // 0x806A2E70
    /* lis r5, 0 */ // 0x806A2E74
    /* li r4, 1 */ // 0x806A2E78
    /* lfs f1, 0(r5) */ // 0x806A2E7C
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a2ed8 */ // 0x806A2E84
    r3 = *(0 + r3); // lwz @ 0x806A2E88
    /* slwi r0, r0, 4 */ // 0x806A2E8C
    /* lwzx r3, r3, r0 */ // 0x806A2E90
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A2E98
    /* lis r0, 0x4330 */ // 0x806A2E9C
    *(0xc + r1) = r4; // stw @ 0x806A2EA0
    /* lis r3, 0 */ // 0x806A2EA4
    /* lfd f3, 0(r3) */ // 0x806A2EA8
    /* lis r5, 0 */ // 0x806A2EAC
    *(8 + r1) = r0; // stw @ 0x806A2EB0
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806A2EB8
    /* li r4, 1 */ // 0x806A2EBC
    /* lfd f2, 8(r1) */ // 0x806A2EC0
    /* lfs f0, 0(r5) */ // 0x806A2EC4
    /* fsubs f2, f2, f3 */ // 0x806A2EC8
    /* fdivs f1, f1, f2 */ // 0x806A2ECC
    /* fsubs f1, f0, f1 */ // 0x806A2ED0
    FUN_8069F59C(); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x806A2ED8
    /* li r4, 2 */ // 0x806A2EDC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A2EE4
    /* li r4, 0 */ // 0x806A2EE8
    /* lfs f1, 0(r5) */ // 0x806A2EEC
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x806a2f74 */ // 0x806A2EF4
    r0 = *(0x38 + r3); // lwz @ 0x806A2EF8
    if (==) goto 0x0x806a2f10;
    if (==) goto 0x0x806a2f64;
    /* b 0x806a2f74 */ // 0x806A2F0C
    r3 = *(0 + r3); // lwz @ 0x806A2F10
    /* slwi r0, r0, 4 */ // 0x806A2F14
    /* lwzx r3, r3, r0 */ // 0x806A2F18
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A2F20
    /* lis r0, 0x4330 */ // 0x806A2F24
    *(0xc + r1) = r4; // stw @ 0x806A2F28
    /* lis r3, 0 */ // 0x806A2F2C
    /* lfd f3, 0(r3) */ // 0x806A2F30
    /* lis r5, 0 */ // 0x806A2F34
    *(8 + r1) = r0; // stw @ 0x806A2F38
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806A2F40
    /* li r4, 3 */ // 0x806A2F44
    /* lfd f2, 8(r1) */ // 0x806A2F48
    /* lfs f0, 0(r5) */ // 0x806A2F4C
    /* fsubs f2, f2, f3 */ // 0x806A2F50
    /* fdivs f1, f1, f2 */ // 0x806A2F54
    /* fsubs f1, f0, f1 */ // 0x806A2F58
}