/* Function at 0x806BDC28, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_806BDC28(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806BDC30
    *(0xc + r1) = r31; // stw @ 0x806BDC38
    *(8 + r1) = r30; // stw @ 0x806BDC3C
    r30 = r3;
    r3 = r3 + 0x98; // 0x806BDC44
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806BDC4C
    /* li r4, 0 */ // 0x806BDC50
    /* lfs f1, 0(r31) */ // 0x806BDC54
    FUN_8069F7A0(r3, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x806BDC5C
    /* li r4, 1 */ // 0x806BDC60
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BDC68
    /* li r4, 0 */ // 0x806BDC6C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BDC74
    /* li r4, 2 */ // 0x806BDC78
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BDC80
    /* li r4, 1 */ // 0x806BDC84
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BDC8C
    /* li r4, 3 */ // 0x806BDC90
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BDC98
    /* li r4, 1 */ // 0x806BDC9C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BDCA4
    /* li r4, 4 */ // 0x806BDCA8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BDCB0
    /* li r4, 0 */ // 0x806BDCB4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r31, 0 */ // 0x806BDCBC
    r3 = r30;
    r31 = r31 + 0; // 0x806BDCC4
    r4 = r31 + 0xb2; // 0x806BDCC8
    r5 = r31 + 0xb8; // 0x806BDCCC
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0xc3; // 0x806BDCD8
    r5 = r31 + 0xd2; // 0x806BDCDC
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0xdd; // 0x806BDCE8
    r5 = r31 + 0xec; // 0x806BDCEC
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    /* li r0, 0 */ // 0x806BDCF4
    *(0x19c + r30) = r0; // stb @ 0x806BDCF8
    r31 = *(0xc + r1); // lwz @ 0x806BDCFC
    r30 = *(8 + r1); // lwz @ 0x806BDD00
    r0 = *(0x14 + r1); // lwz @ 0x806BDD04
    return;
}