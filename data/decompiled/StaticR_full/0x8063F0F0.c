/* Function at 0x8063F0F0, size=96 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063F0F0(int r3, int r4, int r5)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lfs f0, 0(r5) */ // 0x8063F0F8
    /* lfs f2, 4(r5) */ // 0x8063F100
    *(0xfc + r1) = r31; // stw @ 0x8063F104
    r31 = r5;
    *(0xf8 + r1) = r30; // stw @ 0x8063F10C
    r30 = r4;
    *(0xf4 + r1) = r29; // stw @ 0x8063F114
    r29 = r3;
    r4 = r29 + 0x100; // 0x8063F11C
    /* lfs f1, 0xb0(r3) */ // 0x8063F120
    /* lfs f3, 0xb4(r3) */ // 0x8063F124
    /* fadds f4, f1, f0 */ // 0x8063F128
    /* lfs f1, 0xb8(r3) */ // 0x8063F12C
    /* lfs f0, 8(r5) */ // 0x8063F130
    /* fadds f2, f3, f2 */ // 0x8063F134
    /* stfs f4, 0xb0(r3) */ // 0x8063F138
    /* fadds f0, f1, f0 */ // 0x8063F13C
    /* stfs f2, 0xb4(r3) */ // 0x8063F140
    /* stfs f0, 0xb8(r3) */ // 0x8063F144
    FUN_805E3430(r3); // bl 0x805E3430
}