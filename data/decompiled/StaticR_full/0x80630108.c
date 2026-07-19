/* Function at 0x80630108, size=156 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80630108(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x80630120
    *(0x84 + r1) = r29; // stw @ 0x80630124
    /* li r29, 0 */ // 0x80630128
    *(0x80 + r1) = r28; // stw @ 0x8063012C
    /* lis r28, 0 */ // 0x80630130
    r28 = r28 + 0; // 0x80630134
    *(0x6c + r3) = r29; // sth @ 0x80630138
    /* lis r3, 0 */ // 0x8063013C
    r4 = *(4 + r31); // lwz @ 0x80630140
    r3 = *(0 + r3); // lwz @ 0x80630144
    r6 = *(0x9c + r4); // lbz @ 0x80630148
    FUN_805C5834(r3, r4); // bl 0x805C5834
    /* lfs f3, 0x168(r28) */ // 0x80630154
    r3 = r31 + 0x3c; // 0x80630158
    /* lfs f2, 0x2c(r1) */ // 0x8063015C
    /* lfs f1, 0x30(r1) */ // 0x80630164
    /* lfs f0, 0x34(r1) */ // 0x8063016C
    /* fmuls f2, f3, f2 */ // 0x80630170
    r7 = *(0x2c + r1); // lwz @ 0x80630174
    /* fmuls f1, f3, f1 */ // 0x80630178
    r6 = *(0x30 + r1); // lwz @ 0x8063017C
    /* fmuls f0, f3, f0 */ // 0x80630180
    r0 = *(0x34 + r1); // lwz @ 0x80630184
    *(0x20 + r1) = r7; // stw @ 0x80630188
    *(0x24 + r1) = r6; // stw @ 0x8063018C
    *(0x28 + r1) = r0; // stw @ 0x80630190
    /* stfs f2, 0x20(r1) */ // 0x80630194
    /* stfs f1, 0x24(r1) */ // 0x80630198
    /* stfs f0, 0x28(r1) */ // 0x8063019C
    FUN_805E3430(); // bl 0x805E3430
}