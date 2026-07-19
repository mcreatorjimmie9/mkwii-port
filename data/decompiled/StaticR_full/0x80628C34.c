/* Function at 0x80628C34, size=212 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80628C34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80628C44
    r31 = r31 + 0; // 0x80628C48
    *(0x58 + r1) = r30; // stw @ 0x80628C4C
    r30 = r3;
    r4 = *(0x7c + r3); // lwz @ 0x80628C54
    r0 = *(4 + r4); // lwz @ 0x80628C58
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80628C5C
    if (==) goto 0x0x80628d88;
    FUN_8061DF18(); // bl 0x8061DF18
    r4 = *(0x98 + r30); // lwz @ 0x80628C68
    /* lfs f2, 0(r31) */ // 0x80628C6C
    /* lfs f1, 0x6c(r4) */ // 0x80628C70
    /* lfs f0, 0x22c(r3) */ // 0x80628C74
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x80628C78
    if (<=) goto 0x0x80628c84;
    /* fdivs f2, f0, f1 */ // 0x80628C80
    /* lfs f0, 0x9c(r30) */ // 0x80628C84
    /* lfs f1, 4(r31) */ // 0x80628C88
    /* fadds f2, f0, f2 */ // 0x80628C8C
    /* stfs f2, 0x9c(r30) */ // 0x80628C90
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x80628C94
    if (<=) goto 0x0x80628ca8;
    /* fsubs f0, f2, f1 */ // 0x80628C9C
    /* stfs f0, 0x9c(r30) */ // 0x80628CA0
    /* b 0x80628cbc */ // 0x80628CA4
    /* lfs f0, 8(r31) */ // 0x80628CA8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80628CAC
    if (>=) goto 0x0x80628cbc;
    /* fadds f0, f2, f1 */ // 0x80628CB4
    /* stfs f0, 0x9c(r30) */ // 0x80628CB8
    r3 = r30;
    FUN_8061DF18(r3); // bl 0x8061DF18
    /* lfs f2, 0x98(r3) */ // 0x80628CC4
    r3 = r30 + 0xa0; // 0x80628CC8
    /* lfs f0, 0xc(r31) */ // 0x80628CCC
    /* lfs f1, 0x9c(r30) */ // 0x80628CD4
    /* fmuls f2, f0, f2 */ // 0x80628CD8
    /* lfs f0, 0(r31) */ // 0x80628CDC
    /* stfs f1, 0x14(r1) */ // 0x80628CE0
    /* stfs f2, 0x18(r1) */ // 0x80628CE4
    /* stfs f0, 0x1c(r1) */ // 0x80628CE8
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30 + 0x1c; // 0x80628CF0
    r4 = r30 + 0xa0; // 0x80628CF4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r6 = *(0x98 + r30); // lwz @ 0x80628D00
    r3 = r30;
}