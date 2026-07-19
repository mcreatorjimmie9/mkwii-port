/* Function at 0x8085BA20, size=476 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8085BA20(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8085BA34
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8085BA3C
    r0 = *(0x23e + r3); // lbz @ 0x8085BA40
    if (!=) goto 0x0x8085bbe0;
    r4 = *(0x10 + r3); // lwz @ 0x8085BA4C
    r0 = *(0x14a + r4); // lbz @ 0x8085BA50
    if (==) goto 0x0x8085bb18;
    /* lis r4, 0 */ // 0x8085BA5C
    /* lfs f1, 0x240(r3) */ // 0x8085BA60
    /* lfs f0, 0(r4) */ // 0x8085BA64
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8085BA68
    if (<=) goto 0x0x8085ba9c;
    r6 = *(0x94 + r3); // lwz @ 0x8085BA70
    r4 = r3 + 0xb4; // 0x8085BA74
    r0 = *(0x9c + r3); // lwz @ 0x8085BA78
    r5 = r3 + 0x174; // 0x8085BA7C
    /* mulli r6, r6, 0x30 */ // 0x8085BA80
    /* li r8, 0 */ // 0x8085BA84
    /* mulli r0, r0, 0x30 */ // 0x8085BA88
    r6 = r31 + r6; // 0x8085BA8C
    r7 = r31 + r0; // 0x8085BA90
    FUN_8085B4D0(r8); // bl 0x8085B4D0
    /* stfs f1, 0x250(r30) */ // 0x8085BA98
    /* lis r3, 0 */ // 0x8085BA9C
    /* lfs f1, 0x244(r30) */ // 0x8085BAA0
    /* lfs f0, 0(r3) */ // 0x8085BAA4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8085BAA8
    if (<=) goto 0x0x8085bb18;
    r0 = *(0x98 + r30); // lwz @ 0x8085BAB0
    r3 = *(0x10 + r30); // lwz @ 0x8085BAB4
    /* mulli r0, r0, 0x30 */ // 0x8085BAB8
    r29 = r31 + r0; // 0x8085BABC
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x8085BAC4
    /* cntlzw r0, r0 */ // 0x8085BAC8
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x8085BACC
    if (==) goto 0x0x8085baf0;
    /* lfs f1, 0x3e8(r30) */ // 0x8085BAD4
    /* lis r3, 0 */ // 0x8085BAD8
    /* lfs f0, 0(r3) */ // 0x8085BADC
    r3 = r29;
    /* fneg f1, f1 */ // 0x8085BAE4
    /* fmuls f1, f0, f1 */ // 0x8085BAE8
    FUN_80862794(r3, r3); // bl 0x80862794
    r0 = *(0xa0 + r30); // lwz @ 0x8085BAF0
    r3 = r30;
    r6 = r29;
    r4 = r30 + 0xe4; // 0x8085BAFC
    /* mulli r0, r0, 0x30 */ // 0x8085BB00
    r5 = r30 + 0x1a4; // 0x8085BB04
    /* li r8, 0 */ // 0x8085BB08
    r7 = r31 + r0; // 0x8085BB0C
    FUN_8085B4D0(r4, r5, r8); // bl 0x8085B4D0
    /* stfs f1, 0x254(r30) */ // 0x8085BB14
    r7 = *(0x10 + r30); // lwz @ 0x8085BB18
    r0 = *(0x14b + r7); // lbz @ 0x8085BB1C
    if (==) goto 0x0x8085bbcc;
    /* lis r3, 0 */ // 0x8085BB28
    /* lfs f1, 0x248(r30) */ // 0x8085BB2C
    /* lfs f0, 0(r3) */ // 0x8085BB30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8085BB34
    if (>) goto 0x0x8085bb48;
    r0 = *(0x3f0 + r30); // lbz @ 0x8085BB3C
    if (==) goto 0x0x8085bb78;
    r5 = *(0xa4 + r30); // lwz @ 0x8085BB48
    r3 = r30;
    r0 = *(0xac + r30); // lwz @ 0x8085BB50
    r4 = r30 + 0x114; // 0x8085BB54
    /* mulli r6, r5, 0x30 */ // 0x8085BB58
    r5 = r30 + 0x1d4; // 0x8085BB5C
    r8 = r7 + 0x28c; // 0x8085BB60
    /* mulli r0, r0, 0x30 */ // 0x8085BB64
    r6 = r31 + r6; // 0x8085BB68
    r7 = r31 + r0; // 0x8085BB6C
    FUN_8085B4D0(r5, r8); // bl 0x8085B4D0
    /* stfs f1, 0x258(r30) */ // 0x8085BB74
    /* lis r3, 0 */ // 0x8085BB78
    /* lfs f1, 0x24c(r30) */ // 0x8085BB7C
    /* lfs f0, 0(r3) */ // 0x8085BB80
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8085BB84
    if (>) goto 0x0x8085bb98;
    r0 = *(0x3f1 + r30); // lbz @ 0x8085BB8C
    if (==) goto 0x0x8085bbcc;
    r5 = *(0xa8 + r30); // lwz @ 0x8085BB98
    r3 = r30;
    r0 = *(0xb0 + r30); // lwz @ 0x8085BBA0
    r4 = r30 + 0x144; // 0x8085BBA4
    /* mulli r7, r5, 0x30 */ // 0x8085BBA8
    r6 = *(0x10 + r30); // lwz @ 0x8085BBAC
    r5 = r30 + 0x204; // 0x8085BBB0
    r8 = r6 + 0x298; // 0x8085BBB4
    /* mulli r0, r0, 0x30 */ // 0x8085BBB8
    r6 = r31 + r7; // 0x8085BBBC
    r7 = r31 + r0; // 0x8085BBC0
    FUN_8085B4D0(r5, r8); // bl 0x8085B4D0
    /* stfs f1, 0x25c(r30) */ // 0x8085BBC8
    r0 = *(0x23c + r30); // lbz @ 0x8085BBCC
    if (==) goto 0x0x8085bbe0;
    /* li r0, 0 */ // 0x8085BBD8
    *(0x23c + r30) = r0; // stb @ 0x8085BBDC
    r0 = *(0x24 + r1); // lwz @ 0x8085BBE0
    r31 = *(0x1c + r1); // lwz @ 0x8085BBE4
    r30 = *(0x18 + r1); // lwz @ 0x8085BBE8
    r29 = *(0x14 + r1); // lwz @ 0x8085BBEC
    return;
}