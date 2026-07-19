/* Function at 0x80802C54, size=168 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80802C54(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80802C64
    r31 = r31 + 0; // 0x80802C68
    *(0x38 + r1) = r30; // stw @ 0x80802C6C
    /* lis r30, 0 */ // 0x80802C70
    r30 = r30 + 0; // 0x80802C74
    *(0x34 + r1) = r29; // stw @ 0x80802C78
    r29 = r3;
    r0 = *(0x108 + r3); // lbz @ 0x80802C80
    r4 = *(0x40 + r31); // lwz @ 0x80802C84
    /* subf r0, r4, r0 */ // 0x80802C88
    *(0x108 + r3) = r0; // stb @ 0x80802C8C
    /* clrlwi r4, r0, 0x18 */ // 0x80802C90
    r0 = *(0x3c + r31); // lwz @ 0x80802C94
    if (>=) goto 0x0x80802cb8;
    r0 = *(0x104 + r3); // lwz @ 0x80802CA0
    /* li r5, 0 */ // 0x80802CA4
    /* li r4, 3 */ // 0x80802CA8
    *(0x108 + r3) = r5; // stb @ 0x80802CAC
    *(0xb0 + r3) = r4; // stw @ 0x80802CB0
    *(0x100 + r3) = r0; // stw @ 0x80802CB4
    r3 = *(8 + r3); // lwz @ 0x80802CB8
    /* li r4, 3 */ // 0x80802CBC
    r5 = *(0x108 + r29); // lbz @ 0x80802CC0
    FUN_805EF304(r4); // bl 0x805EF304
    /* lfs f2, 0xf0(r29) */ // 0x80802CC8
    /* lfs f1, 0x38(r31) */ // 0x80802CCC
    /* lfs f0, 0x34(r30) */ // 0x80802CD0
    /* fadds f1, f2, f1 */ // 0x80802CD4
    /* stfs f1, 0xf0(r29) */ // 0x80802CD8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80802CDC
    if (<=) goto 0x0x80802cec;
    /* lfs f0, 0(r30) */ // 0x80802CE4
    /* stfs f0, 0xf0(r29) */ // 0x80802CE8
    /* lfs f1, 0xf0(r29) */ // 0x80802CEC
    /* lfs f0, 0x38(r30) */ // 0x80802CF0
    /* fmuls f1, f1, f0 */ // 0x80802CF4
    FUN_805E3430(); // bl 0x805E3430
}