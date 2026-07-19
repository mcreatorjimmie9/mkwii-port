/* Function at 0x8085D924, size=240 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8085D924(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r4;
    *(0x94 + r1) = r29; // stw @ 0x8085D93C
    r29 = r3;
    *(0x90 + r1) = r28; // stw @ 0x8085D944
    r0 = *(0x23e + r3); // lbz @ 0x8085D948
    if (!=) goto 0x0x8085dc24;
    r5 = *(0x10 + r3); // lwz @ 0x8085D954
    r0 = *(0x144 + r5); // lbz @ 0x8085D958
    if (==) goto 0x0x8085dc24;
    /* addic. r0, r3, 0x18 */ // 0x8085D964
    if (==) goto 0x0x8085d978;
    r3 = *(0 + r4); // lwz @ 0x8085D96C
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = *(0x260 + r29); // lbz @ 0x8085D978
    if (==) goto 0x0x8085d99c;
    r3 = r29;
    r4 = r29 + 0x18; // 0x8085D988
    r6 = r29 + 0x26c; // 0x8085D98C
    /* li r5, 2 */ // 0x8085D990
    /* li r7, 1 */ // 0x8085D994
    FUN_8085CA98(r3, r4, r6, r5, r7); // bl 0x8085CA98
    /* lfs f0, 0x24(r29) */ // 0x8085D99C
    /* lfs f1, 0x34(r29) */ // 0x8085D9A4
    /* lfs f2, 0x44(r29) */ // 0x8085D9AC
    r31 = *(0x14 + r29); // lwz @ 0x8085D9B0
    /* lfs f3, 0x18(r29) */ // 0x8085D9B4
    /* stfs f3, 0x44(r1) */ // 0x8085D9B8
    /* lfs f3, 0x28(r29) */ // 0x8085D9BC
    /* stfs f3, 0x48(r1) */ // 0x8085D9C0
    r6 = *(0x44 + r1); // lwz @ 0x8085D9C4
    /* lfs f3, 0x38(r29) */ // 0x8085D9C8
    /* stfs f3, 0x4c(r1) */ // 0x8085D9CC
    r5 = *(0x48 + r1); // lwz @ 0x8085D9D0
    r0 = *(0x4c + r1); // lwz @ 0x8085D9D4
    /* stfs f0, 0x50(r1) */ // 0x8085D9D8
    /* stfs f1, 0x54(r1) */ // 0x8085D9DC
    /* stfs f2, 0x58(r1) */ // 0x8085D9E0
    *(0x2c + r1) = r6; // stw @ 0x8085D9E4
    *(0x30 + r1) = r5; // stw @ 0x8085D9E8
    *(0x34 + r1) = r0; // stw @ 0x8085D9EC
    FUN_80816F30(); // bl 0x80816F30
    r5 = *(0x10 + r29); // lwz @ 0x8085D9F4
    /* lfs f0, 0x11c(r5) */ // 0x8085DA00
    /* stfs f0, 0x38(r1) */ // 0x8085DA04
    /* lfs f0, 0x12c(r5) */ // 0x8085DA08
    /* stfs f0, 0x3c(r1) */ // 0x8085DA0C
    r6 = *(0x38 + r1); // lwz @ 0x8085DA10
}