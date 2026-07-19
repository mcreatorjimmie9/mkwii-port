/* Function at 0x805C4E5C, size=180 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805C4E5C(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0x4330 */ // 0x805C4E64
    *(0x34 + r1) = r29; // stw @ 0x805C4E74
    r29 = r3;
    *(0x30 + r1) = r28; // stw @ 0x805C4E7C
    r0 = *(0x41 + r3); // lbz @ 0x805C4E80
    *(8 + r1) = r4; // stw @ 0x805C4E84
    *(0x10 + r1) = r4; // stw @ 0x805C4E8C
    if (==) goto 0x0x805c51d8;
    r0 = *(0x40 + r3); // lbz @ 0x805C4E94
    if (==) goto 0x0x805c4ea8;
    /* li r30, 0 */ // 0x805C4EA0
    /* b 0x805c4ed4 */ // 0x805C4EA4
    /* lis r4, 0 */ // 0x805C4EA8
    /* lis r3, 0 */ // 0x805C4EAC
    r4 = *(0 + r4); // lwz @ 0x805C4EB0
    /* lfs f0, 0(r3) */ // 0x805C4EB4
    /* lfs f1, 0x7c(r4) */ // 0x805C4EB8
    /* fsubs f1, f1, f0 */ // 0x805C4EBC
    FUN_805E3430(r3); // bl 0x805E3430
    r4 = r3;
    r3 = r29 + 0x28; // 0x805C4EC8
    FUN_805E364C(r4, r3); // bl 0x805E364C
    r30 = r3;
    r0 = *(0x48 + r29); // lwz @ 0x805C4ED4
    /* lis r3, 0 */ // 0x805C4ED8
    *(0xc + r1) = r0; // stw @ 0x805C4EDC
    /* lis r4, 0 */ // 0x805C4EE0
    r4 = *(0 + r4); // lwz @ 0x805C4EE4
    /* lfd f1, 0(r3) */ // 0x805C4EE8
    /* lfd f0, 8(r1) */ // 0x805C4EEC
    /* lfs f2, 0x7c(r4) */ // 0x805C4EF0
    /* fsubs f0, f0, f1 */ // 0x805C4EF4
    /* fmuls f1, f0, f2 */ // 0x805C4EF8
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x44 + r29); // lwz @ 0x805C4F00
    if (<=) goto 0x0x805c4f14;
    /* li r0, 1 */ // 0x805C4F0C
}