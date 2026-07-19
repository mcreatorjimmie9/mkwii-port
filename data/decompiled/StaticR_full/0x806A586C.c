/* Function at 0x806A586C, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_806A586C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806A5874
    *(0xc + r1) = r31; // stw @ 0x806A587C
    *(8 + r1) = r30; // stw @ 0x806A5880
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A5888
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A5890
    /* li r4, 0 */ // 0x806A5894
    /* lfs f1, 0(r31) */ // 0x806A5898
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A58A0
    /* li r4, 1 */ // 0x806A58A4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A58AC
    /* li r4, 0 */ // 0x806A58B0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A58B8
    /* li r4, 2 */ // 0x806A58BC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A58C4
    /* li r4, 1 */ // 0x806A58C8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A58D0
    /* li r4, 3 */ // 0x806A58D4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A58DC
    /* li r4, 0 */ // 0x806A58E0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A58E8
    /* li r4, 4 */ // 0x806A58EC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A58F4
    /* li r4, 0 */ // 0x806A58F8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* li r0, 1 */ // 0x806A5900
    *(0x80 + r30) = r0; // stb @ 0x806A5904
    r31 = *(0xc + r1); // lwz @ 0x806A5908
    r30 = *(8 + r1); // lwz @ 0x806A590C
    r0 = *(0x14 + r1); // lwz @ 0x806A5910
    return;
}