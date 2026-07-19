/* Function at 0x806284EC, size=300 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806284EC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806284FC
    r31 = r31 + 0; // 0x80628500
    *(0x48 + r1) = r30; // stw @ 0x80628504
    *(0x44 + r1) = r29; // stw @ 0x80628508
    r29 = r3;
    r4 = *(0x7c + r3); // lwz @ 0x80628510
    r0 = *(4 + r4); // lwz @ 0x80628514
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80628518
    if (==) goto 0x0x8062869c;
    FUN_8061DF18(); // bl 0x8061DF18
    r4 = *(0x98 + r29); // lwz @ 0x80628524
    /* lfs f2, 0(r31) */ // 0x80628528
    /* lfs f1, 0x6c(r4) */ // 0x8062852C
    /* lfs f0, 0x22c(r3) */ // 0x80628530
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x80628534
    if (<=) goto 0x0x80628540;
    /* fdivs f2, f0, f1 */ // 0x8062853C
    /* lfs f0, 0x9c(r29) */ // 0x80628540
    /* lfs f1, 4(r31) */ // 0x80628544
    /* fadds f2, f0, f2 */ // 0x80628548
    /* stfs f2, 0x9c(r29) */ // 0x8062854C
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x80628550
    if (<=) goto 0x0x80628564;
    /* fsubs f0, f2, f1 */ // 0x80628558
    /* stfs f0, 0x9c(r29) */ // 0x8062855C
    /* b 0x80628578 */ // 0x80628560
    /* lfs f0, 8(r31) */ // 0x80628564
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80628568
    if (>=) goto 0x0x80628578;
    /* fadds f0, f2, f1 */ // 0x80628570
    /* stfs f0, 0x9c(r29) */ // 0x80628574
    r7 = *(0x98 + r29); // lwz @ 0x80628578
    r3 = r29 + 0x4c; // 0x8062857C
    /* lfs f5, 0x20(r29) */ // 0x80628580
    r6 = *(0x20 + r7); // lwz @ 0x80628588
    *(0x2c + r1) = r6; // stw @ 0x8062858C
    r5 = *(0x24 + r7); // lwz @ 0x80628590
    r0 = *(0x28 + r7); // lwz @ 0x80628594
    *(0x30 + r1) = r5; // stw @ 0x80628598
    /* lfs f0, 0x2c(r1) */ // 0x8062859C
    /* lfs f6, 0x30(r29) */ // 0x806285A0
    /* fadds f3, f0, f5 */ // 0x806285A4
    *(0x34 + r1) = r0; // stw @ 0x806285A8
    /* lfs f7, 0x40(r29) */ // 0x806285AC
    /* lfs f1, 0x30(r1) */ // 0x806285B0
    /* lfs f0, 0x34(r1) */ // 0x806285B4
    /* fadds f2, f1, f6 */ // 0x806285B8
    /* lfs f4, 0x9c(r29) */ // 0x806285BC
    /* fadds f1, f0, f7 */ // 0x806285C0
    /* stfs f3, 0x28(r29) */ // 0x806285C4
    /* lfs f0, 0(r31) */ // 0x806285C8
    /* stfs f2, 0x38(r29) */ // 0x806285CC
    /* stfs f1, 0x48(r29) */ // 0x806285D0
    /* stfs f5, 0x20(r1) */ // 0x806285D4
    /* stfs f6, 0x24(r1) */ // 0x806285D8
    /* stfs f7, 0x28(r1) */ // 0x806285DC
    /* stfs f3, 0x2c(r1) */ // 0x806285E0
    /* stfs f2, 0x30(r1) */ // 0x806285E4
    /* stfs f1, 0x34(r1) */ // 0x806285E8
    /* stfs f4, 8(r1) */ // 0x806285EC
    /* stfs f0, 0xc(r1) */ // 0x806285F0
    /* stfs f0, 0x10(r1) */ // 0x806285F4
    FUN_805E3430(); // bl 0x805E3430
    r3 = r29 + 0x1c; // 0x806285FC
    r4 = r29 + 0x4c; // 0x80628600
    r5 = r3;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r29;
    FUN_8061ED38(r3, r4, r5, r3); // bl 0x8061ED38
    r31 = r3;
}