/* Function at 0x808288E0, size=88 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808288E0(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* addic. r0, r1, 8 */ // 0x808288EC
    *(0x3c + r1) = r31; // stw @ 0x808288F0
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x808288F8
    r30 = r3;
    if (==) goto 0x0x80828910;
    r3 = *(0 + r4); // lwz @ 0x80828904
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x10 + r30); // lwz @ 0x80828910
    /* lfs f0, 0(r4) */ // 0x80828918
    /* stfs f0, 0x14(r1) */ // 0x8082891C
    /* lfs f0, 4(r4) */ // 0x80828920
    /* stfs f0, 0x24(r1) */ // 0x80828924
    /* lfs f0, 8(r4) */ // 0x80828928
    /* stfs f0, 0x34(r1) */ // 0x8082892C
    r4 = *(0 + r31); // lwz @ 0x80828930
    FUN_805E3430(); // bl 0x805E3430
}