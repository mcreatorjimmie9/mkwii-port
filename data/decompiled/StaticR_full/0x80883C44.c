/* Function at 0x80883C44, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80883C44(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80883C4C
    *(0xc + r1) = r31; // stw @ 0x80883C54
    /* lis r31, 0 */ // 0x80883C58
    r31 = r31 + 0; // 0x80883C5C
    *(8 + r1) = r30; // stw @ 0x80883C60
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lis r3, 0 */ // 0x80883C6C
    /* lfs f1, 4(r31) */ // 0x80883C70
    r3 = r3 + 0; // 0x80883C74
    *(0 + r30) = r3; // stw @ 0x80883C78
    /* lfs f0, 0x1c(r31) */ // 0x80883C7C
    /* lis r4, 0 */ // 0x80883C80
    /* stfs f1, 0xac(r30) */ // 0x80883C84
    r4 = r4 + 0; // 0x80883C88
    /* lfs f1, 0x18(r31) */ // 0x80883C8C
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x80883C94
    /* stfs f1, 0xac(r30) */ // 0x80883C98
    /* stfs f0, 0xb0(r30) */ // 0x80883C9C
    r31 = *(0xc + r1); // lwz @ 0x80883CA0
    r30 = *(8 + r1); // lwz @ 0x80883CA4
    r0 = *(0x14 + r1); // lwz @ 0x80883CA8
    return;
}