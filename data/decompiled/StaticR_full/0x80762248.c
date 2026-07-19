/* Function at 0x80762248, size=128 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80762248(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x80762258
    r0 = *(0xb4 + r3); // lwz @ 0x8076225C
    if (==) goto 0x0x80762270;
    FUN_808A1F00(); // bl 0x808A1F00
    /* b 0x807622fc */ // 0x8076226C
    r30 = *(0x10 + r3); // lwz @ 0x80762270
    /* lfs f1, 0x38(r3) */ // 0x80762274
    r4 = *(0x10 + r30); // lwz @ 0x80762278
    /* lfs f0, 0xd0(r3) */ // 0x8076227C
    r4 = *(0 + r4); // lwz @ 0x80762280
    /* lfs f2, 0x30(r3) */ // 0x80762284
    /* stfs f2, 8(r1) */ // 0x8076228C
    /* stfs f0, 0xc(r1) */ // 0x80762290
    /* stfs f1, 0x10(r1) */ // 0x80762294
    if (==) goto 0x0x807622ac;
    r3 = r4 + 0xc; // 0x8076229C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x807622b4 */ // 0x807622A8
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f2, 8(r1) */ // 0x807622B4
    /* li r31, 0 */ // 0x807622B8
    /* lfs f1, 0xc(r1) */ // 0x807622BC
    /* lfs f0, 0x10(r1) */ // 0x807622C0
    /* stfs f2, 0x24(r1) */ // 0x807622C4
}