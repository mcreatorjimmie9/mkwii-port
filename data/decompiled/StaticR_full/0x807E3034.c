/* Function at 0x807E3034, size=140 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807E3034(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x807E3040
    r31 = r3;
    r4 = *(0x1a8 + r3); // lwz @ 0x807E3048
    /* addic. r0, r4, -1 */ // 0x807E304C
    *(0x1a8 + r3) = r0; // stw @ 0x807E3050
    if (>=) goto 0x0x807e305c;
    FUN_807E35E4(); // bl 0x807E35E4
    /* lis r4, 0 */ // 0x807E305C
    /* lfs f1, 0(r4) */ // 0x807E3064
    r4 = r31 + 0x1ac; // 0x807E3068
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0xcc(r31) */ // 0x807E3070
    /* lfs f0, 0x38(r1) */ // 0x807E3078
    /* lfs f2, 0xd0(r31) */ // 0x807E307C
    /* fadds f0, f1, f0 */ // 0x807E3080
    /* lfs f1, 0xd4(r31) */ // 0x807E3084
    /* stfs f0, 0xcc(r31) */ // 0x807E3088
    /* lfs f0, 0x3c(r1) */ // 0x807E308C
    r4 = *(0xcc + r31); // lwz @ 0x807E3090
    /* fadds f0, f2, f0 */ // 0x807E3094
    /* stfs f0, 0xd0(r31) */ // 0x807E3098
    /* lfs f0, 0x40(r1) */ // 0x807E309C
    r0 = *(0xd0 + r31); // lwz @ 0x807E30A0
    /* fadds f0, f1, f0 */ // 0x807E30A4
    /* stfs f0, 0xd4(r31) */ // 0x807E30A8
    *(0x2c + r1) = r4; // stw @ 0x807E30AC
    *(0x30 + r1) = r0; // stw @ 0x807E30B0
    r0 = *(0xd4 + r31); // lwz @ 0x807E30B4
    *(0x34 + r1) = r0; // stw @ 0x807E30B8
    FUN_805E3430(); // bl 0x805E3430
}