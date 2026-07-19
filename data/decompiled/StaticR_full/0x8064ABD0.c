/* Function at 0x8064ABD0, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_8064ABD0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064ABDC
    r31 = r3;
    FUN_8064B298(); // bl 0x8064B298
    /* li r0, 0xb */ // 0x8064ABE8
    /* li r3, -1 */ // 0x8064ABEC
    *(0x260 + r31) = r3; // stw @ 0x8064ABF0
    /* li r4, 0 */ // 0x8064ABF4
    /* mtctr r0 */ // 0x8064ABF8
    r3 = r31 + r4; // 0x8064ABFC
    r0 = *(0x254 + r3); // lbz @ 0x8064AC00
    if (==) goto 0x0x8064ac14;
    *(0x260 + r31) = r4; // stw @ 0x8064AC0C
    /* b 0x8064ac1c */ // 0x8064AC10
    r4 = r4 + 1; // 0x8064AC14
    if (counter-- != 0) goto 0x0x8064abfc;
    r0 = *(0x260 + r31); // lwz @ 0x8064AC1C
    if (>=) goto 0x0x8064ac50;
    /* li r0, 1 */ // 0x8064AC28
    *(0x80 + r31) = r0; // stb @ 0x8064AC2C
    r3 = r31 + 0x98; // 0x8064AC30
    /* li r4, 4 */ // 0x8064AC34
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064AC3C
    /* li r4, 0 */ // 0x8064AC40
    /* lfs f1, 0(r5) */ // 0x8064AC44
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x8064ac84 */ // 0x8064AC4C
    /* li r0, 0 */ // 0x8064AC50
    *(0x80 + r31) = r0; // stb @ 0x8064AC54
    r3 = r31;
    FUN_8064B4CC(r3); // bl 0x8064B4CC
    /* li r0, 0xb4 */ // 0x8064AC60
    *(0x264 + r31) = r0; // stw @ 0x8064AC64
    r3 = r31 + 0x98; // 0x8064AC68
    /* li r4, 4 */ // 0x8064AC6C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064AC74
    /* li r4, 1 */ // 0x8064AC78
    /* lfs f1, 0(r5) */ // 0x8064AC7C
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0 */ // 0x8064AC88
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    r0 = *(0x14 + r1); // lwz @ 0x8064AC90
    r31 = *(0xc + r1); // lwz @ 0x8064AC94
    return;
}