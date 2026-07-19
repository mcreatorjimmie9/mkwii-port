/* Function at 0x80883A58, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80883A58(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80883A60
    *(0xc + r1) = r31; // stw @ 0x80883A68
    /* lis r31, 0 */ // 0x80883A6C
    r31 = r31 + 0; // 0x80883A70
    *(8 + r1) = r30; // stw @ 0x80883A74
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lis r3, 0 */ // 0x80883A80
    /* lfs f1, 4(r31) */ // 0x80883A84
    r3 = r3 + 0; // 0x80883A88
    *(0 + r30) = r3; // stw @ 0x80883A8C
    /* lfs f0, 0x10(r31) */ // 0x80883A90
    /* lis r4, 0 */ // 0x80883A94
    /* stfs f1, 0xac(r30) */ // 0x80883A98
    r4 = r4 + 0; // 0x80883A9C
    /* lfs f1, 0xc(r31) */ // 0x80883AA0
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x80883AA8
    /* stfs f1, 0xac(r30) */ // 0x80883AAC
    /* stfs f0, 0xb0(r30) */ // 0x80883AB0
    r31 = *(0xc + r1); // lwz @ 0x80883AB4
    r30 = *(8 + r1); // lwz @ 0x80883AB8
    r0 = *(0x14 + r1); // lwz @ 0x80883ABC
    return;
}