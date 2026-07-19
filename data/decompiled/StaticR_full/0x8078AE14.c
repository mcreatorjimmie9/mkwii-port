/* Function at 0x8078AE14, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078AE14(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8078AE1C
    *(0x18 + r1) = r30; // stw @ 0x8078AE28
    *(0x14 + r1) = r29; // stw @ 0x8078AE2C
    r29 = r3;
    r4 = *(0 + r4); // lwz @ 0x8078AE34
    if (==) goto 0x0x8078ae48;
    r0 = *(0x70 + r4); // lbz @ 0x8078AE40
    /* b 0x8078ae4c */ // 0x8078AE44
    /* li r0, 0 */ // 0x8078AE48
    if (!=) goto 0x0x8078ae74;
    r30 = r3 + 0x1c; // 0x8078AE54
    /* li r31, 0 */ // 0x8078AE58
    r3 = r30;
    FUN_8078C950(r3); // bl 0x8078C950
    r31 = r31 + 1; // 0x8078AE64
    r30 = r30 + 0x74; // 0x8078AE68
    if (<) goto 0x0x8078ae5c;
    r0 = *(0x10 + r29); // lwz @ 0x8078AE74
    if (==) goto 0x0x8078ae8c;
    if (==) goto 0x0x8078ae98;
    /* b 0x8078af30 */ // 0x8078AE88
    r3 = r29;
    FUN_8078C1E4(r3); // bl 0x8078C1E4
    /* b 0x8078af30 */ // 0x8078AE94
    r3 = *(0x18c + r29); // lwz @ 0x8078AE98
    r31 = *(0x189 + r29); // lbz @ 0x8078AE9C
    if (==) goto 0x0x8078aec4;
    if (==) goto 0x0x8078aeb4;
    r0 = *(0x90 + r3); // lwz @ 0x8078AEAC
    /* b 0x8078aeb8 */ // 0x8078AEB0
    /* li r0, -1 */ // 0x8078AEB4
    if (!=) goto 0x0x8078aec4;
    /* li r31, 1 */ // 0x8078AEC0
    r0 = *(0x188 + r29); // lbz @ 0x8078AEC4
    if (!=) goto 0x0x8078aef8;
    if (!=) goto 0x0x8078aef8;
    /* lis r3, 0 */ // 0x8078AED8
    /* lis r5, 0 */ // 0x8078AEDC
    /* lfs f1, 0(r5) */ // 0x8078AEE0
    /* li r4, 0 */ // 0x8078AEE4
    r3 = *(0 + r3); // lwz @ 0x8078AEE8
    /* li r5, 0x14 */ // 0x8078AEEC
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* b 0x8078af24 */ // 0x8078AEF4
    if (!=) goto 0x0x8078af24;
    if (!=) goto 0x0x8078af24;
    /* lis r3, 0 */ // 0x8078AF08
    /* lis r5, 0 */ // 0x8078AF0C
    /* lfs f1, 0(r5) */ // 0x8078AF10
    /* li r4, 0 */ // 0x8078AF14
    r3 = *(0 + r3); // lwz @ 0x8078AF18
    /* li r5, 0x3c */ // 0x8078AF1C
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* li r0, 0 */ // 0x8078AF24
    *(0x188 + r29) = r31; // stb @ 0x8078AF28
    *(0x189 + r29) = r0; // stb @ 0x8078AF2C
    r0 = *(0x24 + r1); // lwz @ 0x8078AF30
    r31 = *(0x1c + r1); // lwz @ 0x8078AF34
    r30 = *(0x18 + r1); // lwz @ 0x8078AF38
    r29 = *(0x14 + r1); // lwz @ 0x8078AF3C
    return;
}