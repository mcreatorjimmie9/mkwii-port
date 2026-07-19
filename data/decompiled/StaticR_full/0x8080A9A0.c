/* Function at 0x8080A9A0, size=216 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8080A9A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x8080A9A8
    /* li r31, 0 */ // 0x8080A9B4
    *(0x38 + r1) = r30; // stw @ 0x8080A9B8
    r30 = r5;
    r5 = r6 + 0; // 0x8080A9C0
    *(0x34 + r1) = r29; // stw @ 0x8080A9C4
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x8080A9CC
    r28 = r3;
    r3 = r29;
    /* lfs f2, 0(r6) */ // 0x8080A9D8
    /* lfs f1, 4(r5) */ // 0x8080A9DC
    /* lfs f0, 8(r5) */ // 0x8080A9E0
    /* stfs f2, 0x20(r1) */ // 0x8080A9E8
    /* stfs f1, 0x24(r1) */ // 0x8080A9EC
    /* stfs f0, 0x28(r1) */ // 0x8080A9F0
    /* stfs f2, 0x14(r1) */ // 0x8080A9F4
    /* stfs f1, 0x18(r1) */ // 0x8080A9F8
    /* stfs f0, 0x1c(r1) */ // 0x8080A9FC
    r4 = *(0xac + r28); // lwz @ 0x8080AA00
    FUN_808B04F0(); // bl 0x808B04F0
    if (!=) goto 0x0x8080aa28;
    r4 = *(0xd0 + r28); // lwz @ 0x8080AA10
    r3 = r29;
    FUN_808B04F0(r3, r5); // bl 0x808B04F0
    if (==) goto 0x0x8080aa2c;
    /* li r31, 1 */ // 0x8080AA28
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x8080AA3C
    r3 = r31;
    /* stfs f0, 0(r30) */ // 0x8080AA44
    /* lfs f0, 0xc(r1) */ // 0x8080AA48
    /* stfs f0, 4(r30) */ // 0x8080AA4C
    /* lfs f0, 0x10(r1) */ // 0x8080AA50
    /* stfs f0, 8(r30) */ // 0x8080AA54
    r31 = *(0x3c + r1); // lwz @ 0x8080AA58
    r30 = *(0x38 + r1); // lwz @ 0x8080AA5C
    r29 = *(0x34 + r1); // lwz @ 0x8080AA60
    r28 = *(0x30 + r1); // lwz @ 0x8080AA64
    r0 = *(0x44 + r1); // lwz @ 0x8080AA68
    return;
}